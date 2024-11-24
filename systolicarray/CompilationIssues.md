# In Brief

We were able to successfully implement the bluespec logic and microarchitecture for 4*4 Systolic Array which is capable of performing multiplication. Our manual verification has strongly suggested that the functionality of the code is correct. But we were not able to verify the code using cocotb testbench. The reasons are explained in this section.

# Generation of Verilog Files

The blue spec verilog code successfully compiled and generated 3 verilog files.
- **mkMac.v**
- **mkSystolicCell.v**
- **mkSystolicArray.v**

![image](https://github.com/user-attachments/assets/0a30a5f8-58b3-47a4-a569-c85ecdb652fa)

The files can be accessed from the directory **"verilog"**

# Cocotb Test bench

The code for this is accessible from systolicarray_verif folder. The code correctly implements the required verification by randomly generating the matrices A and B and testing out code as compred to numpy library output.

# Issues in HDL Simulators

As per the guidelines, the makefile used by TAs consisted of **"verilator"** simulator for generating verilog files. The simulator throws timescale issue.
![image](https://github.com/user-attachments/assets/7590572e-b296-46ec-8674-5a4db60ebb7c)

As per the documentation and available online resources, we understood that:
- The submodules and the topmodule verilog files generated, **"Verilator"** has mismatch in timescale.
- A fix suggested widely was to use **icarus verilog** simulator which has built in capability to handle time scale mismatches.

Accordingly we changed the simulator to **"icarus"** in both the make files and ran the code again.

![image](https://github.com/user-attachments/assets/ea11a0bf-10c6-4044-a6d7-ce8663a6a24f)

We were successful in eliminating timescale mismatch error!But we faces another error as shown above.
As per our analysis, this error is caused because of some syntax in verilog file generated, which is not compatible with icarus.

This put us in a situation where
- We were unable to resolve timescale error in **"verilator"** simulator
- We were unable to understand why the verilog files were not compatible with **"icarus"**. Since the verilog file generation is happening automatically, we were not sure how to fix the compatibility issues with icarus.

# Conclusion
Based on our analysis, while our logic seems correct in the bluespec part and we succesfully wrote the code for testing it, due to issues with simulator, we were not able to test it.
