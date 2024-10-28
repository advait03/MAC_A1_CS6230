# MAC_A1_CS6230
Implements and Verifies a Multiply-Accumulate (MAC) Unit Design using Bluespec System Verilog(BSV) and Python. Performs Binary multiplication, addition in one case and BF16 Multiplication, FP32 Addition in the other case.  Written by Advait Iyer (EE21B006) and SN Sooraj Skanda (EE21B132).

## The given repository contains 4 folders:

1. Unpipelined MAC with given testcases for both Int and FP32
2. Pipelined MAC with given testcases for both Int and FP32
3. Pipelined MAC with Integer Multiplication & Addition (Int) Coverage
4. Pipelined MAC with BF16 Multiplication & FP32 Addition (FP32) Coverage

## Design Approach & Micro-Architecture Description:
The MAC unit chooses the operation based on the input S provided. It implements Int for S=0 and FP32 for S=1.

#### (S=0): 
Int operation implements (a*b + c) given inputs 16-bit input 'a', 16-bit input 'b' and 32-bit 'c'. 
1. Shift-&-Add Multiplier: The last 8-bits of inputs 'a' & 'b' are passed into the multiplier function. For negative numbers, we use the CLA function below to convert it into its 2's complement form. A for loop is then used to continuously shift the multiplicand, and accordingly add it to the partial sum in each iteration in case that bit of the multiplier corresponds to 1. The result of multiplication is sign-extended to 32-bits and returned.
2. CLA: The result of multiplication, along with c is passed into the Carry-Look Ahead Adder. Here the Generate and Propagate bits are first calculated in the first steps using a 32-bit AND & XOR operation respectively: This is followed by a for loop that calculates the carry at each bit for 32-bits based on the Generate and Propagate bits calculated earlier. The Sum is calculated in the end in 1 cycle after the completion of the for loop, and this holds the final result in signed 32-bit binary representation. In case of performing subtraction, we input 2's complement of the number we wish to subtract.

#### (S=1): FP32: 
Considers 16-bits 'a' & 'b' to be in BF16 form, and 32-bit 'c' to be in FP32 form, and performs the same operation (a*b + c). Result is returned in FP32 form.
1. BF16 Multiplier: This function takes entire 16-bit inputs a & b, and then splits each into its respective sign (1), exponent(8) and mantissa(7) bits. The sign bits are XOR-ed together to give resultant sign bit. Initially, the two exponents are zero-extended and added together to give an intermediate. After this, the two mantissas are multiplied together in a separate multiplier function that performs unsigned multiplication. The mantissa multiplication results in two cases:
a. Overflow: The 16th bit is 1. Hence, we must increment the exponent, and right shift the multiplication result to obtain the mantissa. To perform this, we subtract 126 from the exponent intermediate to obtain the final exponent. Next, we perform round-off operation using the 8th bit along with the 15th-9th bits to get the resultant 7-bit rounded mantissa. 
b. No Overflow: The 16th bit is 0. Here, we don't need to perform any right shift/increment. We subtract 127 from the exponent intermediate to obtain the final exponent. Next, we perform round-off operation using the 7th bit along with the 14th-8th bits to get the resultant 7-bit rounded mantissa. 
The rounded-off mantissa is zero-padded and combined with the sign, exponent bits to give the FP32 resultant of multiplication.
2. FP32 Adder: This function takes two 32-bit inputs c & the resultant of multiplication in FP32 form, and splits each into its respective sign(1), exponent(8) and mantissa(23) bits. It compares the exponents of the two numbers, and retains the larger exponent in an intermediate value. The 24th bit of the 32-bit form of mantissas is also made 1, to ensure it represents 1.xx form in decimal. The difference between the exponents is also noted, and the mantissa of the lower exponent is accordingly right shifted by the difference. The number is also rounded-off while right-shifting, and bits aren't simply truncated. In case the sign-bits are of the same size, the two shifted mantissas are directly added using the CLA function. If the signs are different, 2's complement of the smaller mantissa is taken, and this value is added to the larger mantissa using the CLA function taking the sign of the larger mantissa for the sign-bit. Here, as well multiple cases are possible:
a. Overflow: This can occur during addition of same-signed numbers. Here the 25th bit of the 32-bit form mantissa becomes 1 - in this case we increment the intermediate exponent and round-off the following bits of the mantissa to 23-bits.
b. Underflow: This can occur during addition of different-signed numbers. Here the 24th bit of the 32-bit form mantissa becomes zero (excluding overflow case). In this case, we decrement the intermediate exponent and left shift-the mantissa bits and zero-pad to obtain net 23-bit mantissa.
c. Remaining cases: No need to increment intermediate exponent - net mantissa is stored in [22:0] bits. 
The sign, exponent and final mantissa bits are combined to give the net output in FP32 form.


### Understanding Pipelining

The pipelined code for MAC operation elegantly pipelines two test cases simultaneously to improve the performance compared to the Unpipelined version. 
- The architecture contains 3 stages of pipelines. They are,
  - Input Pipeline
  - Intermediate Pipeline
  - Output Pipeline
 - The code queues inputs a,b,c and s into the input pipeline.
 - This makes the inputs valid, which triggers the first computation stage, the multiplication of a and b.
 - The output of multiplication is enqueued into the intermediate pipeline. Simultaneously, the next test case's input is enqueued into the input pipeline.
 - This facilitates the computation of the product of the second test case while simultaneously computing the sum of a*b and c for the first case.
 - Hence, there is a significant improvement in the time taken to run multiple test cases!

### Performance comparison

#### Unpipelined Performance

Below is the image depicting 1049 test cases of int and 1000 test cases of float for the unpipelined Mac operator.
![unpipelined](https://github.com/user-attachments/assets/6a75e9eb-db5b-4f5e-9b8b-f5744990c558)

It takes a total of 61485000 ns to complete all test cases.

#### Pipelined Performance

Below is the image depicting 1049 test cases of int and 1000 test cases of float for the pipelined Mac operator.
![pipelined](https://github.com/user-attachments/assets/d402dc32-4016-4569-b2bf-1befe7e72535)

It takes a total of 20555000 ns to complete all test cases.
#### Hence we see a speedup of 1/3 factor in time taken

## Contributions:

We worked on the entire MAC Design together, helping each other wherever we were stuck. Detailed contributions are mentioned below:
1. Carry-Look Ahead Adder: Advait
2. Shift-&-Add Multiplier: Sooraj
3. BF16 Multiplier: Sooraj
4. FP32 Adder: Advait
5. Round-Off logic & debugging: Both
6. Pipelining: Advait
7. Coverage: Sooraj
8. Testbenches & General Debugging: Both



