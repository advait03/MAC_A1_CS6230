# **Systolic Array Functionality**

This code defines a **systolic array**, a hardware design pattern commonly used in digital signal processing (DSP) and machine learning applications (e.g., matrix multiplication in neural networks). It consists of interconnected processing elements (**systolic cells**) that compute and pass intermediate results in a pipelined fashion.

---

## **Overview**
The systolic array is a 4x4 grid of `SystolicCell` modules. Each cell:
1. Performs a **multiply-accumulate (MAC) operation** using inputs \( A \), \( B \), and an accumulated \( C \).
2. Passes results horizontally and vertically to neighboring cells, enabling **pipelined computation**.

The array facilitates **matrix multiplication**, where:
- Rows of the first matrix (\( A \)) are fed to the first column.
- Columns of the second matrix (\( B \)) are fed to the first row.
- The result matrix (\( C \)) is computed and stored in the cells.

---

## **Modules**

### **1. `SystolicCell`**
This is the core computational unit of the systolic array. Each cell:
- Contains registers for \( A \), \( B \), and \( C \), as well as intermediate results.
- Implements a **MAC operation** using the `Mac` module (likely computes \( C \gets A \times B + C \)).
- Provides methods to:
  - Load \( A \), \( B \), and \( C \).
  - Retrieve the accumulated result (\( C \)).
  - Pass \( A \), \( B \), and \( C \) to neighboring cells.

#### **Key Rules in `SystolicCell`:**
- **`compute`**: Triggers the MAC operation when all inputs (\( A \), \( B \), \( C \)) are valid.
- **`getmac`**: Updates the output register \( C_{\text{out}} \) with the result of the MAC operation.

---

### **2. `SystolicArray`**
This module orchestrates the 4x4 grid of `SystolicCell`s. It manages data flow across the array and coordinates computations.

#### **Key Functionalities:**
1. **Data Loading:**
   - `loadA`: Loads \( A \)-values into the first column.
   - `loadB`: Loads \( B \)-values into the first row.
   - `loadS`: Sets a "select signal" (\( s \)), though its use isn't detailed.

2. **Data Propagation:**
   - **Horizontal and Vertical Passing**:
     - \( A \)-values propagate horizontally across rows.
     - \( B \)-values propagate vertically down columns.
     - Intermediate \( C \)-values propagate vertically for accumulation.
   - `getC_data`: Collects \( C \)-values from all cells.
   - `putC_data`: Passes \( A \), \( B \), and \( C \) to neighboring cells based on the cycle.

3. **Result Retrieval:**
   - `getResult`: Retrieves the final \( C \)-values as a 4x4 matrix.

4. **Control Signals:**
   - A `cycle` counter manages data flow and ensures proper timing for inputs and computation.
   - `isReady`: Indicates when all computations are complete and results are available.

---

## **Functionality Walkthrough**

1. **Initialization:**
   - The systolic array is initialized with `loadS` to configure all cells with a select signal.
   - Data is loaded row-by-row (\( A \)) and column-by-column (\( B \)) using `loadA` and `loadB`.

2. **Computation:**
   - Data flows:
     - \( A \)-values propagate rightward.
     - \( B \)-values propagate downward.
     - Intermediate \( C \)-values propagate vertically for accumulation.
   - Each cell performs the MAC operation, gradually accumulating results over cycles.

3. **Result Extraction:**
   - After computation (indicated by `isReady`), the final result matrix is retrieved using `getResult`.

---

## **Summary of Interfaces**

| **Module**         | **Method**        | **Description**                                                                                  |
|---------------------|-------------------|--------------------------------------------------------------------------------------------------|
| **`SystolicCell`**  | `putA`           | Loads \( A \)-value into the cell.                                                              |
|                     | `putB`           | Loads \( B \)-value into the cell.                                                              |
|                     | `putC`           | Loads \( C \)-value (initial accumulator value).                                                |
|                     | `putS`           | Loads a select signal \( s \) (no clear use shown in code).                                      |
|                     | `getA`, `getB`   | Retrieves \( A \) and \( B \) values.                                                           |
|                     | `getC`           | Retrieves the accumulated result \( C \).                                                       |
| **`SystolicArray`** | `loadA`, `loadB` | Loads row \( A \)-values and column \( B \)-values into the array.                              |
|                     | `loadS`          | Loads the select signal \( s \) into all cells.                                                 |
|                     | `getResult`      | Retrieves the final result matrix after computation.                                            |
|                     | `isReady`        | Indicates whether computation is complete and results are ready to be retrieved.               |

---

## **Key Insights**
- The systolic array is designed for **parallel, pipelined computation**, enabling high throughput.
- By propagating data locally, it avoids complex memory management or global communication.
- This modular design is **scalable** for larger matrices by adding rows and columns.

# Systolic Array Matrix Multiplication Testbench using Cocotb

This testbench demonstrates how to test a hardware implementation of a systolic array performing **matrix multiplication** using **Cocotb**, a Python-based verification framework. It includes a detailed walkthrough of the testbench setup for two datatypes: `int8` and `bfloat16`. Below, we explain the functionality, methodology, and implementation of the testbench.

---

## Overview of Systolic Array Matrix Multiplication

A **systolic array** is a specialized hardware architecture designed for efficient computation of matrix operations. In this implementation:
- The systolic array computes the product of two 4x4 matrices, \( A \) and \( B \), producing a result matrix \( R \) such that:
  
  \[
  R = A \times B
  \]

- Matrix multiplication is carried out via **adder and multiplier nodes** arranged in a grid, which process elements in a pipelined, diagonal flow.

---

## Testbench Details

### Key Components

1. **Matrix Representation:**
   - Input matrices \( A \) and \( B \) are represented as 4x4 arrays of either `int8` or `bfloat16` values.
   - Computation results are validated against a software-calculated reference.

2. **Clock and Reset:**
   - A 10 ns clock is used to drive the simulation.
   - Reset (`RST_N`) initializes the hardware state.

3. **Data Loading:**
   - Matrix rows are loaded into the systolic array sequentially, row by row.
   - The architecture processes data diagonally, requiring careful management of timing and data flow.

---

### Implementation Walkthrough

#### 1. **Helper Functions**

- **Matrix Multiplication (`int8_matrix_multiply`)**: 
  Computes the expected result in software using NumPy.
  
- **Bfloat16 Conversion (`bfloat16_to_float32`)**: 
  Converts hardware-compatible `bfloat16` values to `float32` for comparison.

#### 2. **Clock and Reset Setup**

- A clock signal (`dut.CLK`) is initialized with a 10 ns period using Cocotb's `Clock` module.
- The design-under-test (DUT) is reset via `RST_N`.

#### 3. **Matrix Loading and Computation**

- **Input Preparation:**
  - Two random \( 4 \times 4 \) matrices \( A \) and \( B \) are generated as test inputs.
  - Data is loaded row by row for \( A \) and column by column (reversed order) for \( B \) to simulate the pipelined diagonal processing of the systolic array.

- **Loading into DUT:**
  - Data is loaded into the DUT (`dut.loadA` and `dut.loadB`) over consecutive clock cycles.

- **Systolic Flow:**
  - The systolic array processes the data diagonally across cycles.
  - Intermediate results are captured from the hardware output (`dut.getResult`).

#### 4. **Result Retrieval and Validation**

- The hardware outputs are read in a sequence, corresponding to the diagonal flow of computations.
- The results are compared against the expected matrix using `numpy.testing.assert_array_almost_equal`.

---

### Code Snippet Explanation

#### Test for `int8` Datatype

```python
async def test_systolic_array_int8(dut):
    # 1. Clock Initialization
    clock = Clock(dut.CLK, 10, units="ns")
    cocotb.start_soon(clock.start())
    
    # 2. Reset
    dut.RST_N.value = 0
    await RisingEdge(dut.CLK)
    dut.RST_N.value = 1

    # 3. Generate Test Data
    A = np.random.randint(-128, 127, (4, 4), dtype=np.int8)
    B = np.random.randint(-128, 127, (4, 4), dtype=np.int8)
    expected = int8_matrix_multiply(A, B)

    # 4. Load Data into DUT
    for i in range(4):
        dut.loadA.value = [int(x) for x in A[i]]
        dut.loadB.value = [int(x) for x in B[:, i]]
        await RisingEdge(dut.CLK)

    # 5. Wait for Computation to Complete
    while not dut.isReady.value:
        await RisingEdge(dut.CLK)

    # 6. Retrieve Results
    Res = np.zeros((4, 4), dtype=np.int8)
    for cycle in range(7):
        last_row = [dut.getResult[3][col].value.integer for col in range(4)]
        for k in range(cycle + 1):
            row_idx = cycle - k
            col_idx = k
            if 0 <= row_idx < 4 and 0 <= col_idx < 4:
                Res[row_idx][col_idx] = last_row[col_idx]

    # 7. Validate Results
    np.testing.assert_array_almost_equal(Res, expected)


