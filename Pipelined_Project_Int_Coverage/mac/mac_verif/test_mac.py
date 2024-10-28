# This file is public domain, it can be freely copied without restrictions.
# SPDX-License-Identifier: CC0-1.0

import os
import random
from pathlib import Path

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge
from itertools import product
from model_mac import *

#-----------------------------------------------------------------------------------------------------
#Some test cases to show the extremities of the input values. This will be coupled with random values to show coverage
'''A = [0,0,127,-128,127]
B = [0,0,127,127,-128]
C = [2147483647,-2147483648,2147467518,-2147467392,-2147467392]'''
#-----------------------------------------------------------------------------------------------------

@cocotb.test()
async def test_mac(dut):
    """Test to check counter"""

    dut.EN_get_inputs.value = 0
 
    clock = Clock(dut.CLK, 10, units="us")  # Create a 10us period clock on port clk
    # Start the clock. Start it low to avoid issues on the first RisingEdge
    cocotb.start_soon(clock.start(start_high=False))
    
    #Reset
    dut.RST_N.value = 0
    await RisingEdge(dut.CLK)
    dut.RST_N.value = 1
    
    #Enable all methods
    dut.EN_get_inputs.value = 1
    dut.get_inputs_s.value = 0
    dut._log.info('Performing mac_int')
    '''for i in range(0,10):
        if i<5:
            dut.get_inputs_a.value = A[i]
            dut.get_inputs_b.value = B[i]
            dut.get_inputs_c.value = C[i]
        await RisingEdge(dut.CLK)
        if i>4:
            dut._log.info(f'output {dut.macop.value}')
            output = model_mac(1, 0, A[i-5], B[i-5], C[i-5])
            assert output == str(dut.macop.value), f'MAC Output Mismatch, Expected = {output} DUT = {str(dut.macop.value)}'
    '''
    a = [i for i in range(-16, 16)]
    b = [i for i in range(-16, 16)]
    c = [i for i in range(-16, 16)]
    
    combinations = list(product(a, b, c))
        
    for i in range(0,len(combinations)+5):
        if i<len(combinations):
            dut.get_inputs_a.value = combinations[i][0]
            dut.get_inputs_b.value = combinations[i][1]
            dut.get_inputs_c.value = combinations[i][2]
        await RisingEdge(dut.CLK)
        if i>4:
            dut._log.info(f'output {dut.macop.value}')
            output = model_mac(1, 0, combinations[i-5][0], combinations[i-5][1], combinations[i-5][2])
            assert output == str(dut.macop.value), f'MAC Output Mismatch, Expected = {output} DUT = {str(dut.macop.value)}'
        
    dut._log.info("Done!")
    
    coverage_db.export_to_yaml(filename="coverage_mac.yml")

