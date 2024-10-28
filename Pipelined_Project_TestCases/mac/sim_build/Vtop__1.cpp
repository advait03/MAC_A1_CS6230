// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vtop::_sequent__TOP__6(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__6\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkMac__DOT__y___05Fh77882 = ((vlTOPp->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 5U) & (IData)(vlTOPp->mkMac__DOT__y___05Fh77775));
    vlTOPp->mkMac__DOT__y___05Fh128343 = (1U & ((vlTOPp->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 0xfU) 
                                                | (IData)(vlTOPp->mkMac__DOT__y___05Fh128210)));
    vlTOPp->mkMac__DOT__y___05Fh136951 = ((vlTOPp->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 0x10U) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh136974));
    vlTOPp->mkMac__DOT__y___05Fh77989 = ((vlTOPp->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 6U) & (IData)(vlTOPp->mkMac__DOT__y___05Fh77882));
    vlTOPp->mkMac__DOT__y___05Fh128319 = ((vlTOPp->mkMac__DOT__propagate___05Fh80941 
                                           >> 0x10U) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh128343));
    vlTOPp->mkMac__DOT__y___05Fh137081 = (1U & ((vlTOPp->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 0x10U) 
                                                | (IData)(vlTOPp->mkMac__DOT__y___05Fh136951)));
    vlTOPp->mkMac__DOT__y___05Fh78096 = ((vlTOPp->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 7U) & (IData)(vlTOPp->mkMac__DOT__y___05Fh77989));
    vlTOPp->mkMac__DOT__y___05Fh128452 = (1U & ((vlTOPp->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 0x10U) 
                                                | (IData)(vlTOPp->mkMac__DOT__y___05Fh128319)));
    vlTOPp->mkMac__DOT__y___05Fh137058 = ((vlTOPp->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 0x11U) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh137081));
    vlTOPp->mkMac__DOT__y___05Fh78203 = ((vlTOPp->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 8U) & (IData)(vlTOPp->mkMac__DOT__y___05Fh78096));
    vlTOPp->mkMac__DOT__y___05Fh128428 = ((vlTOPp->mkMac__DOT__propagate___05Fh80941 
                                           >> 0x11U) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh128452));
    vlTOPp->mkMac__DOT__y___05Fh137188 = (1U & ((vlTOPp->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 0x11U) 
                                                | (IData)(vlTOPp->mkMac__DOT__y___05Fh137058)));
    vlTOPp->mkMac__DOT__y___05Fh78310 = ((vlTOPp->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 9U) & (IData)(vlTOPp->mkMac__DOT__y___05Fh78203));
    vlTOPp->mkMac__DOT__y___05Fh128561 = (1U & ((vlTOPp->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 0x11U) 
                                                | (IData)(vlTOPp->mkMac__DOT__y___05Fh128428)));
    vlTOPp->mkMac__DOT__y___05Fh137165 = ((vlTOPp->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 0x12U) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh137188));
    vlTOPp->mkMac__DOT__y___05Fh78417 = ((vlTOPp->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 0xaU) 
                                         & (IData)(vlTOPp->mkMac__DOT__y___05Fh78310));
    vlTOPp->mkMac__DOT__y___05Fh128537 = ((vlTOPp->mkMac__DOT__propagate___05Fh80941 
                                           >> 0x12U) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh128561));
    vlTOPp->mkMac__DOT__y___05Fh137295 = (1U & ((vlTOPp->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 0x12U) 
                                                | (IData)(vlTOPp->mkMac__DOT__y___05Fh137165)));
    vlTOPp->mkMac__DOT__y___05Fh78524 = ((vlTOPp->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 0xbU) 
                                         & (IData)(vlTOPp->mkMac__DOT__y___05Fh78417));
    vlTOPp->mkMac__DOT__y___05Fh128670 = (1U & ((vlTOPp->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 0x12U) 
                                                | (IData)(vlTOPp->mkMac__DOT__y___05Fh128537)));
    vlTOPp->mkMac__DOT__y___05Fh137272 = ((vlTOPp->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 0x13U) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh137295));
    vlTOPp->mkMac__DOT__y___05Fh78631 = ((vlTOPp->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 0xcU) 
                                         & (IData)(vlTOPp->mkMac__DOT__y___05Fh78524));
    vlTOPp->mkMac__DOT__y___05Fh128646 = ((vlTOPp->mkMac__DOT__propagate___05Fh80941 
                                           >> 0x13U) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh128670));
    vlTOPp->mkMac__DOT__y___05Fh137402 = (1U & ((vlTOPp->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 0x13U) 
                                                | (IData)(vlTOPp->mkMac__DOT__y___05Fh137272)));
    vlTOPp->mkMac__DOT__y___05Fh78738 = ((vlTOPp->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 0xdU) 
                                         & (IData)(vlTOPp->mkMac__DOT__y___05Fh78631));
    vlTOPp->mkMac__DOT__y___05Fh128779 = (1U & ((vlTOPp->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 0x13U) 
                                                | (IData)(vlTOPp->mkMac__DOT__y___05Fh128646)));
    vlTOPp->mkMac__DOT__y___05Fh137379 = ((vlTOPp->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 0x14U) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh137402));
    vlTOPp->mkMac__DOT__y___05Fh78845 = ((vlTOPp->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 0xeU) 
                                         & (IData)(vlTOPp->mkMac__DOT__y___05Fh78738));
    vlTOPp->mkMac__DOT__y___05Fh128755 = ((vlTOPp->mkMac__DOT__propagate___05Fh80941 
                                           >> 0x14U) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh128779));
    vlTOPp->mkMac__DOT__y___05Fh137509 = (1U & ((vlTOPp->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 0x14U) 
                                                | (IData)(vlTOPp->mkMac__DOT__y___05Fh137379)));
    vlTOPp->mkMac__DOT__y___05Fh78952 = ((vlTOPp->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 0xfU) 
                                         & (IData)(vlTOPp->mkMac__DOT__y___05Fh78845));
    vlTOPp->mkMac__DOT__y___05Fh128888 = (1U & ((vlTOPp->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 0x14U) 
                                                | (IData)(vlTOPp->mkMac__DOT__y___05Fh128755)));
    vlTOPp->mkMac__DOT__y___05Fh137486 = ((vlTOPp->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 0x15U) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh137509));
    vlTOPp->mkMac__DOT__y___05Fh79059 = ((vlTOPp->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 0x10U) 
                                         & (IData)(vlTOPp->mkMac__DOT__y___05Fh78952));
    vlTOPp->mkMac__DOT__y___05Fh128864 = ((vlTOPp->mkMac__DOT__propagate___05Fh80941 
                                           >> 0x15U) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh128888));
    vlTOPp->mkMac__DOT__y___05Fh137616 = (1U & ((vlTOPp->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 0x15U) 
                                                | (IData)(vlTOPp->mkMac__DOT__y___05Fh137486)));
    vlTOPp->mkMac__DOT__y___05Fh79166 = ((vlTOPp->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 0x11U) 
                                         & (IData)(vlTOPp->mkMac__DOT__y___05Fh79059));
    vlTOPp->mkMac__DOT__y___05Fh128997 = (1U & ((vlTOPp->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 0x15U) 
                                                | (IData)(vlTOPp->mkMac__DOT__y___05Fh128864)));
    vlTOPp->mkMac__DOT__y___05Fh137593 = ((vlTOPp->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 0x16U) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh137616));
    vlTOPp->mkMac__DOT__y___05Fh79273 = ((vlTOPp->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 0x12U) 
                                         & (IData)(vlTOPp->mkMac__DOT__y___05Fh79166));
    vlTOPp->mkMac__DOT__y___05Fh128973 = ((vlTOPp->mkMac__DOT__propagate___05Fh80941 
                                           >> 0x16U) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh128997));
    vlTOPp->mkMac__DOT__y___05Fh137723 = (1U & ((vlTOPp->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 0x16U) 
                                                | (IData)(vlTOPp->mkMac__DOT__y___05Fh137593)));
    vlTOPp->mkMac__DOT__y___05Fh79380 = ((vlTOPp->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 0x13U) 
                                         & (IData)(vlTOPp->mkMac__DOT__y___05Fh79273));
    vlTOPp->mkMac__DOT__y___05Fh129106 = (1U & ((vlTOPp->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 0x16U) 
                                                | (IData)(vlTOPp->mkMac__DOT__y___05Fh128973)));
    vlTOPp->mkMac__DOT__y___05Fh137700 = ((vlTOPp->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 0x17U) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh137723));
    vlTOPp->mkMac__DOT__y___05Fh79487 = ((vlTOPp->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 0x14U) 
                                         & (IData)(vlTOPp->mkMac__DOT__y___05Fh79380));
    vlTOPp->mkMac__DOT__y___05Fh129082 = ((vlTOPp->mkMac__DOT__propagate___05Fh80941 
                                           >> 0x17U) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh129106));
    vlTOPp->mkMac__DOT__y___05Fh137830 = (1U & ((vlTOPp->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 0x17U) 
                                                | (IData)(vlTOPp->mkMac__DOT__y___05Fh137700)));
    vlTOPp->mkMac__DOT__y___05Fh79594 = ((vlTOPp->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 0x15U) 
                                         & (IData)(vlTOPp->mkMac__DOT__y___05Fh79487));
    vlTOPp->mkMac__DOT__y___05Fh129215 = (1U & ((vlTOPp->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 0x17U) 
                                                | (IData)(vlTOPp->mkMac__DOT__y___05Fh129082)));
    vlTOPp->mkMac__DOT__y___05Fh137807 = ((vlTOPp->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 0x18U) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh137830));
    vlTOPp->mkMac__DOT__y___05Fh79701 = ((vlTOPp->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 0x16U) 
                                         & (IData)(vlTOPp->mkMac__DOT__y___05Fh79594));
    vlTOPp->mkMac__DOT__y___05Fh129191 = ((vlTOPp->mkMac__DOT__propagate___05Fh80941 
                                           >> 0x18U) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh129215));
    vlTOPp->mkMac__DOT__y___05Fh137937 = (1U & ((vlTOPp->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 0x18U) 
                                                | (IData)(vlTOPp->mkMac__DOT__y___05Fh137807)));
    vlTOPp->mkMac__DOT__y___05Fh79808 = ((vlTOPp->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 0x17U) 
                                         & (IData)(vlTOPp->mkMac__DOT__y___05Fh79701));
    vlTOPp->mkMac__DOT__y___05Fh129324 = (1U & ((vlTOPp->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 0x18U) 
                                                | (IData)(vlTOPp->mkMac__DOT__y___05Fh129191)));
    vlTOPp->mkMac__DOT__y___05Fh137914 = ((vlTOPp->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 0x19U) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh137937));
    vlTOPp->mkMac__DOT__y___05Fh79915 = ((vlTOPp->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 0x18U) 
                                         & (IData)(vlTOPp->mkMac__DOT__y___05Fh79808));
    vlTOPp->mkMac__DOT__y___05Fh129300 = ((vlTOPp->mkMac__DOT__propagate___05Fh80941 
                                           >> 0x19U) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh129324));
    vlTOPp->mkMac__DOT__y___05Fh138044 = (1U & ((vlTOPp->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 0x19U) 
                                                | (IData)(vlTOPp->mkMac__DOT__y___05Fh137914)));
    vlTOPp->mkMac__DOT__y___05Fh80022 = ((vlTOPp->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 0x19U) 
                                         & (IData)(vlTOPp->mkMac__DOT__y___05Fh79915));
    vlTOPp->mkMac__DOT__y___05Fh129433 = (1U & ((vlTOPp->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 0x19U) 
                                                | (IData)(vlTOPp->mkMac__DOT__y___05Fh129300)));
    vlTOPp->mkMac__DOT__y___05Fh138021 = ((vlTOPp->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 0x1aU) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh138044));
    vlTOPp->mkMac__DOT__y___05Fh80129 = ((vlTOPp->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 0x1aU) 
                                         & (IData)(vlTOPp->mkMac__DOT__y___05Fh80022));
    vlTOPp->mkMac__DOT__y___05Fh129409 = ((vlTOPp->mkMac__DOT__propagate___05Fh80941 
                                           >> 0x1aU) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh129433));
    vlTOPp->mkMac__DOT__y___05Fh138151 = (1U & ((vlTOPp->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 0x1aU) 
                                                | (IData)(vlTOPp->mkMac__DOT__y___05Fh138021)));
    vlTOPp->mkMac__DOT__y___05Fh80236 = ((vlTOPp->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 0x1bU) 
                                         & (IData)(vlTOPp->mkMac__DOT__y___05Fh80129));
    vlTOPp->mkMac__DOT__y___05Fh129542 = (1U & ((vlTOPp->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 0x1aU) 
                                                | (IData)(vlTOPp->mkMac__DOT__y___05Fh129409)));
    vlTOPp->mkMac__DOT__y___05Fh138128 = ((vlTOPp->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 0x1bU) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh138151));
    vlTOPp->mkMac__DOT__y___05Fh80343 = ((vlTOPp->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 0x1cU) 
                                         & (IData)(vlTOPp->mkMac__DOT__y___05Fh80236));
    vlTOPp->mkMac__DOT__y___05Fh129518 = ((vlTOPp->mkMac__DOT__propagate___05Fh80941 
                                           >> 0x1bU) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh129542));
    vlTOPp->mkMac__DOT__y___05Fh138258 = (1U & ((vlTOPp->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 0x1bU) 
                                                | (IData)(vlTOPp->mkMac__DOT__y___05Fh138128)));
    vlTOPp->mkMac__DOT__y___05Fh80450 = ((vlTOPp->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 0x1dU) 
                                         & (IData)(vlTOPp->mkMac__DOT__y___05Fh80343));
    vlTOPp->mkMac__DOT__y___05Fh129651 = (1U & ((vlTOPp->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 0x1bU) 
                                                | (IData)(vlTOPp->mkMac__DOT__y___05Fh129518)));
    vlTOPp->mkMac__DOT__y___05Fh138235 = ((vlTOPp->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 0x1cU) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh138258));
    vlTOPp->mkMac__DOT__y___05Fh3445 = ((0x80000000U 
                                         & ((vlTOPp->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                             << 1U) 
                                            & ((IData)(vlTOPp->mkMac__DOT__y___05Fh80450) 
                                               << 0x1fU))) 
                                        | (((IData)(vlTOPp->mkMac__DOT__y___05Fh80450) 
                                            << 0x1eU) 
                                           | (((IData)(vlTOPp->mkMac__DOT__y___05Fh80343) 
                                               << 0x1dU) 
                                              | (((IData)(vlTOPp->mkMac__DOT__y___05Fh80236) 
                                                  << 0x1cU) 
                                                 | (((IData)(vlTOPp->mkMac__DOT__y___05Fh80129) 
                                                     << 0x1bU) 
                                                    | (((IData)(vlTOPp->mkMac__DOT__y___05Fh80022) 
                                                        << 0x1aU) 
                                                       | (((IData)(vlTOPp->mkMac__DOT__y___05Fh79915) 
                                                           << 0x19U) 
                                                          | (((IData)(vlTOPp->mkMac__DOT__y___05Fh79808) 
                                                              << 0x18U) 
                                                             | (((IData)(vlTOPp->mkMac__DOT__y___05Fh79701) 
                                                                 << 0x17U) 
                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh79594) 
                                                                    << 0x16U) 
                                                                   | (((IData)(vlTOPp->mkMac__DOT__y___05Fh79487) 
                                                                       << 0x15U) 
                                                                      | (((IData)(vlTOPp->mkMac__DOT__y___05Fh79380) 
                                                                          << 0x14U) 
                                                                         | (((IData)(vlTOPp->mkMac__DOT__y___05Fh79273) 
                                                                             << 0x13U) 
                                                                            | (((IData)(vlTOPp->mkMac__DOT__y___05Fh79166) 
                                                                                << 0x12U) 
                                                                               | (((IData)(vlTOPp->mkMac__DOT__y___05Fh79059) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh78952) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh78845) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh78738) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh78631) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh78524) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh78417) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh78310) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh78203) 
                                                                                << 9U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh78096) 
                                                                                << 8U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh77989) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh77882) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh77775) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh77668) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh77561) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh77454) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (IData)(vlTOPp->mkMac__DOT__IF_INV_IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_3_ETC___05F_d1280))))))))))))))))))))))))))))))));
    vlTOPp->mkMac__DOT__y___05Fh129627 = ((vlTOPp->mkMac__DOT__propagate___05Fh80941 
                                           >> 0x1cU) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh129651));
    vlTOPp->mkMac__DOT__y___05Fh138365 = (1U & ((vlTOPp->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 0x1cU) 
                                                | (IData)(vlTOPp->mkMac__DOT__y___05Fh138235)));
    vlTOPp->mkMac__DOT__product___05Fh3437 = (vlTOPp->mkMac__DOT__propagate___05Fh3442 
                                              ^ vlTOPp->mkMac__DOT__y___05Fh3445);
    vlTOPp->mkMac__DOT__y___05Fh129760 = (1U & ((vlTOPp->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 0x1cU) 
                                                | (IData)(vlTOPp->mkMac__DOT__y___05Fh129627)));
    vlTOPp->mkMac__DOT__y___05Fh138342 = ((vlTOPp->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 0x1dU) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh138365));
    vlTOPp->mkMac__DOT__x___05Fh3317 = ((1U & ((vlTOPp->mkMac__DOT__int_ififo_rv[1U] 
                                                >> 0x17U) 
                                               ^ (vlTOPp->mkMac__DOT__int_ififo_rv[1U] 
                                                  >> 7U)))
                                         ? vlTOPp->mkMac__DOT__product___05Fh3437
                                         : vlTOPp->mkMac__DOT___theResult___05F___05F_2___05Fh3324);
    vlTOPp->mkMac__DOT__y___05Fh129736 = ((vlTOPp->mkMac__DOT__propagate___05Fh80941 
                                           >> 0x1dU) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh129760));
    vlTOPp->mkMac__DOT__y___05Fh138472 = (1U & ((vlTOPp->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 0x1dU) 
                                                | (IData)(vlTOPp->mkMac__DOT__y___05Fh138342)));
    vlTOPp->mkMac__DOT__int_pfifo_rv_port1___05Fwrite_1[0U] 
        = (IData)((((QData)((IData)(vlTOPp->mkMac__DOT__x___05Fh3317)) 
                    << 0x20U) | (QData)((IData)(vlTOPp->mkMac__DOT__int_ififo_rv[0U]))));
    vlTOPp->mkMac__DOT__int_pfifo_rv_port1___05Fwrite_1[1U] 
        = (IData)(((((QData)((IData)(vlTOPp->mkMac__DOT__x___05Fh3317)) 
                     << 0x20U) | (QData)((IData)(vlTOPp->mkMac__DOT__int_ififo_rv[0U]))) 
                   >> 0x20U));
    vlTOPp->mkMac__DOT__int_pfifo_rv_port1___05Fwrite_1[2U] = 1U;
    vlTOPp->mkMac__DOT__y___05Fh129869 = (1U & ((vlTOPp->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 0x1dU) 
                                                | (IData)(vlTOPp->mkMac__DOT__y___05Fh129736)));
    vlTOPp->mkMac__DOT__y___05Fh138449 = ((vlTOPp->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 0x1eU) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh138472));
    vlTOPp->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2749 
        = (vlTOPp->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
           ^ (((IData)(vlTOPp->mkMac__DOT__y___05Fh138472) 
               << 0x1eU) | (((IData)(vlTOPp->mkMac__DOT__y___05Fh138365) 
                             << 0x1dU) | (((IData)(vlTOPp->mkMac__DOT__y___05Fh138258) 
                                           << 0x1cU) 
                                          | (((IData)(vlTOPp->mkMac__DOT__y___05Fh138151) 
                                              << 0x1bU) 
                                             | (((IData)(vlTOPp->mkMac__DOT__y___05Fh138044) 
                                                 << 0x1aU) 
                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh137937) 
                                                    << 0x19U) 
                                                   | (((IData)(vlTOPp->mkMac__DOT__y___05Fh137830) 
                                                       << 0x18U) 
                                                      | (((IData)(vlTOPp->mkMac__DOT__y___05Fh137723) 
                                                          << 0x17U) 
                                                         | (((IData)(vlTOPp->mkMac__DOT__y___05Fh137616) 
                                                             << 0x16U) 
                                                            | (((IData)(vlTOPp->mkMac__DOT__y___05Fh137509) 
                                                                << 0x15U) 
                                                               | (((IData)(vlTOPp->mkMac__DOT__y___05Fh137402) 
                                                                   << 0x14U) 
                                                                  | (((IData)(vlTOPp->mkMac__DOT__y___05Fh137295) 
                                                                      << 0x13U) 
                                                                     | (((IData)(vlTOPp->mkMac__DOT__y___05Fh137188) 
                                                                         << 0x12U) 
                                                                        | (((IData)(vlTOPp->mkMac__DOT__y___05Fh137081) 
                                                                            << 0x11U) 
                                                                           | (((IData)(vlTOPp->mkMac__DOT__y___05Fh136974) 
                                                                               << 0x10U) 
                                                                              | (((IData)(vlTOPp->mkMac__DOT__y___05Fh136867) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh136760) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh136653) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh136546) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh136439) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh136332) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh136225) 
                                                                                << 9U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh136118) 
                                                                                << 8U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh136011) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh135904) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh135797) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh135690) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh135583) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh135476) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (IData)(vlTOPp->mkMac__DOT__IF_0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BI_ETC___05F_d2671))))))))))))))))))))))))))))))));
    if (vlTOPp->mkMac__DOT__CAN_FIRE_RL_int_pipe_stage1) {
        vlTOPp->mkMac__DOT__int_pfifo_rv_port2___05Fread[0U] 
            = vlTOPp->mkMac__DOT__int_pfifo_rv_port1___05Fwrite_1[0U];
        vlTOPp->mkMac__DOT__int_pfifo_rv_port2___05Fread[1U] 
            = vlTOPp->mkMac__DOT__int_pfifo_rv_port1___05Fwrite_1[1U];
        vlTOPp->mkMac__DOT__int_pfifo_rv_port2___05Fread[2U] 
            = vlTOPp->mkMac__DOT__int_pfifo_rv_port1___05Fwrite_1[2U];
    } else {
        vlTOPp->mkMac__DOT__int_pfifo_rv_port2___05Fread[0U] 
            = vlTOPp->mkMac__DOT__int_pfifo_rv_port1___05Fread[0U];
        vlTOPp->mkMac__DOT__int_pfifo_rv_port2___05Fread[1U] 
            = vlTOPp->mkMac__DOT__int_pfifo_rv_port1___05Fread[1U];
        vlTOPp->mkMac__DOT__int_pfifo_rv_port2___05Fread[2U] 
            = vlTOPp->mkMac__DOT__int_pfifo_rv_port1___05Fread[2U];
    }
    vlTOPp->mkMac__DOT__y___05Fh129845 = ((vlTOPp->mkMac__DOT__propagate___05Fh80941 
                                           >> 0x1eU) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh129869));
    vlTOPp->mkMac__DOT__mantissa___05F_1___05Fh125736 
        = ((0x80000000U & ((0x80000000U & (vlTOPp->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                           << 1U)) 
                           | ((IData)(vlTOPp->mkMac__DOT__y___05Fh138449) 
                              << 0x1fU))) | vlTOPp->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2749);
    vlTOPp->mkMac__DOT__int_pfifo_rv_D_IN[0U] = vlTOPp->mkMac__DOT__int_pfifo_rv_port2___05Fread[0U];
    vlTOPp->mkMac__DOT__int_pfifo_rv_D_IN[1U] = vlTOPp->mkMac__DOT__int_pfifo_rv_port2___05Fread[1U];
    vlTOPp->mkMac__DOT__int_pfifo_rv_D_IN[2U] = vlTOPp->mkMac__DOT__int_pfifo_rv_port2___05Fread[2U];
    vlTOPp->mkMac__DOT__y___05Fh80944 = ((0x80000000U 
                                          & ((0x80000000U 
                                              & (vlTOPp->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 << 1U)) 
                                             | ((IData)(vlTOPp->mkMac__DOT__y___05Fh129845) 
                                                << 0x1fU))) 
                                         | (((IData)(vlTOPp->mkMac__DOT__y___05Fh129869) 
                                             << 0x1eU) 
                                            | (((IData)(vlTOPp->mkMac__DOT__y___05Fh129760) 
                                                << 0x1dU) 
                                               | (((IData)(vlTOPp->mkMac__DOT__y___05Fh129651) 
                                                   << 0x1cU) 
                                                  | (((IData)(vlTOPp->mkMac__DOT__y___05Fh129542) 
                                                      << 0x1bU) 
                                                     | (((IData)(vlTOPp->mkMac__DOT__y___05Fh129433) 
                                                         << 0x1aU) 
                                                        | (((IData)(vlTOPp->mkMac__DOT__y___05Fh129324) 
                                                            << 0x19U) 
                                                           | (((IData)(vlTOPp->mkMac__DOT__y___05Fh129215) 
                                                               << 0x18U) 
                                                              | (((IData)(vlTOPp->mkMac__DOT__y___05Fh129106) 
                                                                  << 0x17U) 
                                                                 | (((IData)(vlTOPp->mkMac__DOT__y___05Fh128997) 
                                                                     << 0x16U) 
                                                                    | (((IData)(vlTOPp->mkMac__DOT__y___05Fh128888) 
                                                                        << 0x15U) 
                                                                       | (((IData)(vlTOPp->mkMac__DOT__y___05Fh128779) 
                                                                           << 0x14U) 
                                                                          | (((IData)(vlTOPp->mkMac__DOT__y___05Fh128670) 
                                                                              << 0x13U) 
                                                                             | (((IData)(vlTOPp->mkMac__DOT__y___05Fh128561) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh128452) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh128343) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh128234) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh128125) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh128016) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh127907) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh127798) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh127689) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh127580) 
                                                                                << 9U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh127471) 
                                                                                << 8U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh127362) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh127253) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh127144) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh127035) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh126926) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh126817) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (IData)(vlTOPp->mkMac__DOT__IF_0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BIT_ETC___05F_d2500))))))))))))))))))))))))))))))));
    vlTOPp->mkMac__DOT___theResult___05F_fst___05Fh121453 
        = ((0x100U & vlTOPp->mkMac__DOT__mantissa___05F_2___05Fh121451)
            ? vlTOPp->mkMac__DOT__mantissa___05F_1___05Fh125736
            : vlTOPp->mkMac__DOT__mantissa___05F_2___05Fh121451);
    vlTOPp->mkMac__DOT__propagate0941_XOR_y0944___05Fq8 
        = (vlTOPp->mkMac__DOT__propagate___05Fh80941 
           ^ vlTOPp->mkMac__DOT__y___05Fh80944);
    vlTOPp->mkMac__DOT__IF_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383___05FETC___05Fq7 
        = (((vlTOPp->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2399 
             >> 6U) & (0x40U != (0xffU & vlTOPp->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2399)))
            ? vlTOPp->mkMac__DOT___theResult___05F_fst___05Fh121453
            : vlTOPp->mkMac__DOT__mantissa___05F_3___05Fh121395);
    vlTOPp->mkMac__DOT__fraction___05F_1___05Fh121399 
        = (0x7f0000U & (vlTOPp->mkMac__DOT__IF_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383___05FETC___05Fq7 
                        << 0x10U));
    if ((0x8000U & vlTOPp->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2399)) {
        vlTOPp->mkMac__DOT___theResult___05F_fst___05Fh121389 = 0U;
        vlTOPp->mkMac__DOT___theResult___05F_fst___05Fh121356 
            = vlTOPp->mkMac__DOT__fraction___05F_1___05Fh130054;
    } else {
        vlTOPp->mkMac__DOT___theResult___05F_fst___05Fh121389 
            = vlTOPp->mkMac__DOT__fraction___05F_1___05Fh121399;
        vlTOPp->mkMac__DOT___theResult___05F_fst___05Fh121356 
            = vlTOPp->mkMac__DOT___theResult___05F_fst___05Fh121389;
    }
    vlTOPp->mkMac__DOT__x___05Fh80838 = (((IData)(vlTOPp->mkMac__DOT__sgn___05Fh80850) 
                                          << 0x1fU) 
                                         | ((0x7f800000U 
                                             & (vlTOPp->mkMac__DOT__propagate0941_XOR_y0944___05Fq8 
                                                << 0x17U)) 
                                            | vlTOPp->mkMac__DOT___theResult___05F_fst___05Fh121356));
    vlTOPp->mkMac__DOT__fp_pfifo_rv_port1___05Fwrite_1[0U] 
        = (IData)((((QData)((IData)(vlTOPp->mkMac__DOT__x___05Fh80838)) 
                    << 0x20U) | (QData)((IData)(vlTOPp->mkMac__DOT__fp_ififo_rv[0U]))));
    vlTOPp->mkMac__DOT__fp_pfifo_rv_port1___05Fwrite_1[1U] 
        = (IData)(((((QData)((IData)(vlTOPp->mkMac__DOT__x___05Fh80838)) 
                     << 0x20U) | (QData)((IData)(vlTOPp->mkMac__DOT__fp_ififo_rv[0U]))) 
                   >> 0x20U));
    vlTOPp->mkMac__DOT__fp_pfifo_rv_port1___05Fwrite_1[2U] = 1U;
    if (vlTOPp->mkMac__DOT__CAN_FIRE_RL_fp_pipe_stage1) {
        vlTOPp->mkMac__DOT__fp_pfifo_rv_port2___05Fread[0U] 
            = vlTOPp->mkMac__DOT__fp_pfifo_rv_port1___05Fwrite_1[0U];
        vlTOPp->mkMac__DOT__fp_pfifo_rv_port2___05Fread[1U] 
            = vlTOPp->mkMac__DOT__fp_pfifo_rv_port1___05Fwrite_1[1U];
        vlTOPp->mkMac__DOT__fp_pfifo_rv_port2___05Fread[2U] 
            = vlTOPp->mkMac__DOT__fp_pfifo_rv_port1___05Fwrite_1[2U];
    } else {
        vlTOPp->mkMac__DOT__fp_pfifo_rv_port2___05Fread[0U] 
            = vlTOPp->mkMac__DOT__fp_pfifo_rv_port1___05Fread[0U];
        vlTOPp->mkMac__DOT__fp_pfifo_rv_port2___05Fread[1U] 
            = vlTOPp->mkMac__DOT__fp_pfifo_rv_port1___05Fread[1U];
        vlTOPp->mkMac__DOT__fp_pfifo_rv_port2___05Fread[2U] 
            = vlTOPp->mkMac__DOT__fp_pfifo_rv_port1___05Fread[2U];
    }
    vlTOPp->mkMac__DOT__fp_pfifo_rv_D_IN[0U] = vlTOPp->mkMac__DOT__fp_pfifo_rv_port2___05Fread[0U];
    vlTOPp->mkMac__DOT__fp_pfifo_rv_D_IN[1U] = vlTOPp->mkMac__DOT__fp_pfifo_rv_port2___05Fread[1U];
    vlTOPp->mkMac__DOT__fp_pfifo_rv_D_IN[2U] = vlTOPp->mkMac__DOT__fp_pfifo_rv_port2___05Fread[2U];
}

VL_INLINE_OPT void Vtop::_combo__TOP__7(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__7\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkMac__DOT__reg_a_EN = vlTOPp->EN_get_inputs;
    vlTOPp->mkMac__DOT__reg_a_D_IN = vlTOPp->get_inputs_a;
    vlTOPp->mkMac__DOT__reg_b_EN = vlTOPp->EN_get_inputs;
    vlTOPp->mkMac__DOT__reg_b_D_IN = vlTOPp->get_inputs_b;
    vlTOPp->mkMac__DOT__reg_c_EN = vlTOPp->EN_get_inputs;
    vlTOPp->mkMac__DOT__reg_c_D_IN = vlTOPp->get_inputs_c;
    vlTOPp->mkMac__DOT__reg_s_EN = vlTOPp->EN_get_inputs;
    vlTOPp->mkMac__DOT__reg_s_D_IN = vlTOPp->get_inputs_s;
    vlTOPp->mkMac__DOT__rg_inp_valid_D_IN = vlTOPp->EN_get_inputs;
}

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    if (((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK)))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    vlTOPp->_combo__TOP__7(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__CLK = vlTOPp->CLK;
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vtop::_change_request_1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request_1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((RST_N & 0xfeU))) {
        Verilated::overWidthError("RST_N");}
    if (VL_UNLIKELY((get_inputs_s & 0xfeU))) {
        Verilated::overWidthError("get_inputs_s");}
    if (VL_UNLIKELY((EN_get_inputs & 0xfeU))) {
        Verilated::overWidthError("EN_get_inputs");}
}
#endif  // VL_DEBUG
