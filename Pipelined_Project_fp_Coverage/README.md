# Run Commands for the code
This is the folder for testing coverage of fp32 MAC.

## Coverage
We chose the range of inputs as follows for testing the coverage.
- a : (1,30)
- b : (1,30)
- c : (1,30)

While it is possible to increase the range of inputs, the coverage report was not being dumped due to the extremely large number of combinations possible and the RAM limit was 16GB.
The user can increase the range using the computational resources available.
The sample coverage report shows 100% coverage for the test cases chosen! Report can be found in the mac folder.

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
