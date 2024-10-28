# Run Commands for the code
This is the folder for testing coverage of fp32 MAC.

## Test Cases
The code works for 1049 int and 1000 float test cases and the performance is seen the main readme file


Make a clone of the mac folder in this repo. Run the following commands.
## To activate pyenv

```
pyenv activate py38
```

## To setup cocotb (remove any older versions and install v1.6.2)
```
pip uninstall cocotb
pip install cocotb==1.6.2
```

## To compile and generate verilog from bsv

```
make  generate_verilog
```

## To simulate using cocotb
```
pip install cocotb_coverage==1.1
make simulate 
```

## To clean all the builds
```
make clean_build
```