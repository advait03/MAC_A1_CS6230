# model for increment alone

import cocotb
from cocotb_coverage.coverage import *

mac_coverage = coverage_section(
    CoverPoint('top.get_inputs_s', vname='get_inputs_s', bins = list(range(0,1))),
    CoverPoint('top.get_inputs_a', vname='get_inputs_a', bins = list(range(-16,16))),
    CoverPoint('top.get_inputs_b', vname='get_inputs_b', bins = list(range(-16,16))),
    CoverPoint('top.get_inputs_c', vname='get_inputs_c', bins = list(range(-16,16))),
    CoverPoint('top.EN_get_inputs', vname='EN_get_inputs', bins = list(range(1,2))),
    CoverCross('top.cross_cover', items = ['top.get_inputs_s', 'top.get_inputs_a', 'top.get_inputs_b', 'top.get_inputs_c', 'top.EN_get_inputs'])
)
@mac_coverage
def model_mac(EN_get_inputs: int, get_inputs_s: int, get_inputs_a: int, get_inputs_b: int, get_inputs_c: int) -> str:
    #Condition for int mac operation
    if(EN_get_inputs == 1 and get_inputs_s == 0):
        
        #Code to compute mac
        value = get_inputs_a*get_inputs_b + get_inputs_c

        #Handling negaitve case
        if value < 0:
            # Handle negative number: 2's complement
            value = (1 << 32) + value  # Add 2^32 to get 2's complement
            
        #Returning it as a string in binary 32 bit
        binary_repr = f"{value:032b}"  # Format as 32-bit binary
        return binary_repr
    return 'wrong'
