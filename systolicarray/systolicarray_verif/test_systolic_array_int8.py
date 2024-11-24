import cocotb
from cocotb.triggers import Timer, RisingEdge
from cocotb.clock import Clock
import numpy as np

def int8_matrix_multiply(A, B):
    return np.matmul(A, B)

def bfloat16_to_float32(val):
    # Convert bfloat16 to float32
    sign = -1 if (val & 0x8000) else 1
    exp = ((val & 0x7F80) >> 7) - 127
    frac = (val & 0x007F) / 128.0 + 1.0
    return sign * frac * (2.0 ** exp)

@cocotb.test()
async def test_systolic_array_int8(dut):
    # Initialize clock
    clock = Clock(dut.CLK, 10, units="ns")
    cocotb.start_soon(clock.start())
    
    # Reset
    dut.RST_N.value = 0
    await RisingEdge(dut.CLK)
    dut.RST_N.value = 1
    
    # Generate random 4x4 matrices
    A = np.random.randint(-128, 127, (4, 4), dtype=np.int8)
    B = np.random.randint(-128, 127, (4, 4), dtype=np.int8)
    
    # Expected result
    expected = int8_matrix_multiply(A, B)
    
    # Set datatype to int8
    await RisingEdge(dut.CLK)
    dut.loadS.value = 0
    
    # Load matrices
    for i in range(4):
        row_a = [0 for x in A[i]]
        col_b = [int(x) for x in B[3-i]]
        dut.loadA.value = row_a
        dut.loadB.value = col_b
        await RisingEdge(dut.CLK)
    for i in range(15):
    	col_b = [0] * 4  # Initialize row_a with zeros
        row_a = [0] * 4  # Initialize row_a with zeros
        for j in range(4):
            if i - j >= 0 and i - j < 4:  # Ensure indices are within the matrix bounds
                row_a[j] = A[i - j][j]
                dut.loadA.value = row_a
        dut.loadB.value = col_b
        await RisingEdge(dut.CLK)
    	
    # Wait for computation
    while not dut.isReady.value:
        await RisingEdge(dut.CLK)
    
	Res = [[0 for _ in range(4)] for _ in range(4)]

	# Iterate through 7 cycles
	for cycle in range(7):
		# Access the last row (row 3) of the 4x4 matrix returned by getResult
		last_row = [dut.getResult[3][col].value.integer for col in range(4)]
		
		# Fill the appropriate diagonal entries of Res for the current cycle
		for k in range(cycle + 1):
		    row_idx = cycle - k
		    col_idx = k
		    
		    # Ensure indices are within bounds of the 4x4 matrix
		    if 0 <= row_idx < 4 and 0 <= col_idx < 4:
		        Res[row_idx][col_idx] = last_row[col_idx]


    # Compare results
    np.testing.assert_array_almost_equal(Res, expected)

@cocotb.test()
async def test_systolic_array_bfloat16(dut):
    # Initialize clock
    clock = Clock(dut.CLK, 10, units="ns")
    cocotb.start_soon(clock.start())
    
    # Reset
    dut.RST_N.value = 0
    await RisingEdge(dut.CLK)
    dut.RST_N.value = 1
    
    # Generate random 4x4 matrices with bfloat16 values
    A = np.random.randint(0, 65535, (4, 4), dtype=np.uint16)  # Full range of bfloat16
    B = np.random.randint(0, 65535, (4, 4), dtype=np.uint16)
    
    # Convert to float32 for expected result calculation
    A_float = np.zeros((4, 4), dtype=np.float32)
    B_float = np.zeros((4, 4), dtype=np.float32)
    
    for i in range(4):
        for j in range(4):
            A_float[i,j] = bfloat16_to_float32(A[i,j])
            B_float[i,j] = bfloat16_to_float32(B[i,j])
    
    # Calculate expected result
    expected = np.matmul(A_float, B_float)
    
    # Set datatype to bfloat16
    await RisingEdge(dut.CLK)
    dut.loadS.value = 1  # 1 for bfloat16 mode
    
    # Load matrices
    for i in range(4):
        row_a = [0 for x in A[i]]
        col_b = [int(x) for x in B[3-i]]
        dut.loadA.value = row_a
        dut.loadB.value = col_b
        await RisingEdge(dut.CLK)
    
    # Feed data diagonally
    for i in range(15):
        col_b = [0] * 4
        row_a = [0] * 4
        for j in range(4):
            if i - j >= 0 and i - j < 4:
                row_a[j] = A[i - j][j]
        dut.loadA.value = row_a
        dut.loadB.value = col_b
        await RisingEdge(dut.CLK)
    
    # Wait for computation
    while not dut.isReady.value:
        await RisingEdge(dut.CLK)
    
    # Get results
    Res = [[0 for _ in range(4)] for _ in range(4)]
    
    # Iterate through 7 cycles
    for cycle in range(7):
        # Get the last row of results
        last_row = [dut.getResult[3][col].value.integer for col in range(4)]
        
        # Fill the appropriate diagonal entries
        for k in range(cycle + 1):
            row_idx = cycle - k
            col_idx = k
            
            if 0 <= row_idx < 4 and 0 <= col_idx < 4:
                # Convert bfloat16 result back to float32
                Res[row_idx][col_idx] = bfloat16_to_float32(last_row[col_idx])
    
    # Compare results with appropriate tolerance for bfloat16 precision
    np.testing.assert_array_almost_equal(Res, expected, decimal=2)
