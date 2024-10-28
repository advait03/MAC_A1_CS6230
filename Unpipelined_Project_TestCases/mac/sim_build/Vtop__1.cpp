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
    vlTOPp->mkMac__DOT__y___05Fh210848 = ((vlTOPp->mkMac__DOT__IF_reg_a_BIT_15_0_XOR_reg_b_1_BIT_15_2_3_EQ_re_ETC___05F_d3279 
                                           >> 0xdU) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh210871));
    vlTOPp->mkMac__DOT__y___05Fh210978 = (1U & ((vlTOPp->mkMac__DOT__IF_reg_a_BIT_15_0_XOR_reg_b_1_BIT_15_2_3_EQ_re_ETC___05F_d3281 
                                                 >> 0xdU) 
                                                | (IData)(vlTOPp->mkMac__DOT__y___05Fh210848)));
    vlTOPp->mkMac__DOT__y___05Fh210955 = ((vlTOPp->mkMac__DOT__IF_reg_a_BIT_15_0_XOR_reg_b_1_BIT_15_2_3_EQ_re_ETC___05F_d3279 
                                           >> 0xeU) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh210978));
    vlTOPp->mkMac__DOT__y___05Fh211085 = (1U & ((vlTOPp->mkMac__DOT__IF_reg_a_BIT_15_0_XOR_reg_b_1_BIT_15_2_3_EQ_re_ETC___05F_d3281 
                                                 >> 0xeU) 
                                                | (IData)(vlTOPp->mkMac__DOT__y___05Fh210955)));
    vlTOPp->mkMac__DOT__y___05Fh211062 = ((vlTOPp->mkMac__DOT__IF_reg_a_BIT_15_0_XOR_reg_b_1_BIT_15_2_3_EQ_re_ETC___05F_d3279 
                                           >> 0xfU) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh211085));
    vlTOPp->mkMac__DOT__y___05Fh211192 = (1U & ((vlTOPp->mkMac__DOT__IF_reg_a_BIT_15_0_XOR_reg_b_1_BIT_15_2_3_EQ_re_ETC___05F_d3281 
                                                 >> 0xfU) 
                                                | (IData)(vlTOPp->mkMac__DOT__y___05Fh211062)));
    vlTOPp->mkMac__DOT__y___05Fh211169 = ((vlTOPp->mkMac__DOT__IF_reg_a_BIT_15_0_XOR_reg_b_1_BIT_15_2_3_EQ_re_ETC___05F_d3279 
                                           >> 0x10U) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh211192));
    vlTOPp->mkMac__DOT__y___05Fh211299 = (1U & ((vlTOPp->mkMac__DOT__IF_reg_a_BIT_15_0_XOR_reg_b_1_BIT_15_2_3_EQ_re_ETC___05F_d3281 
                                                 >> 0x10U) 
                                                | (IData)(vlTOPp->mkMac__DOT__y___05Fh211169)));
    vlTOPp->mkMac__DOT__y___05Fh211276 = ((vlTOPp->mkMac__DOT__IF_reg_a_BIT_15_0_XOR_reg_b_1_BIT_15_2_3_EQ_re_ETC___05F_d3279 
                                           >> 0x11U) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh211299));
    vlTOPp->mkMac__DOT__y___05Fh211406 = (1U & ((vlTOPp->mkMac__DOT__IF_reg_a_BIT_15_0_XOR_reg_b_1_BIT_15_2_3_EQ_re_ETC___05F_d3281 
                                                 >> 0x11U) 
                                                | (IData)(vlTOPp->mkMac__DOT__y___05Fh211276)));
    vlTOPp->mkMac__DOT__y___05Fh211383 = ((vlTOPp->mkMac__DOT__IF_reg_a_BIT_15_0_XOR_reg_b_1_BIT_15_2_3_EQ_re_ETC___05F_d3279 
                                           >> 0x12U) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh211406));
    vlTOPp->mkMac__DOT__y___05Fh211513 = (1U & ((vlTOPp->mkMac__DOT__IF_reg_a_BIT_15_0_XOR_reg_b_1_BIT_15_2_3_EQ_re_ETC___05F_d3281 
                                                 >> 0x12U) 
                                                | (IData)(vlTOPp->mkMac__DOT__y___05Fh211383)));
    vlTOPp->mkMac__DOT__y___05Fh211490 = ((vlTOPp->mkMac__DOT__IF_reg_a_BIT_15_0_XOR_reg_b_1_BIT_15_2_3_EQ_re_ETC___05F_d3279 
                                           >> 0x13U) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh211513));
    vlTOPp->mkMac__DOT__y___05Fh211620 = (1U & ((vlTOPp->mkMac__DOT__IF_reg_a_BIT_15_0_XOR_reg_b_1_BIT_15_2_3_EQ_re_ETC___05F_d3281 
                                                 >> 0x13U) 
                                                | (IData)(vlTOPp->mkMac__DOT__y___05Fh211490)));
    vlTOPp->mkMac__DOT__y___05Fh211597 = ((vlTOPp->mkMac__DOT__IF_reg_a_BIT_15_0_XOR_reg_b_1_BIT_15_2_3_EQ_re_ETC___05F_d3279 
                                           >> 0x14U) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh211620));
    vlTOPp->mkMac__DOT__y___05Fh211727 = (1U & ((vlTOPp->mkMac__DOT__IF_reg_a_BIT_15_0_XOR_reg_b_1_BIT_15_2_3_EQ_re_ETC___05F_d3281 
                                                 >> 0x14U) 
                                                | (IData)(vlTOPp->mkMac__DOT__y___05Fh211597)));
    vlTOPp->mkMac__DOT__y___05Fh211704 = ((vlTOPp->mkMac__DOT__IF_reg_a_BIT_15_0_XOR_reg_b_1_BIT_15_2_3_EQ_re_ETC___05F_d3279 
                                           >> 0x15U) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh211727));
    vlTOPp->mkMac__DOT__y___05Fh211834 = (1U & ((vlTOPp->mkMac__DOT__IF_reg_a_BIT_15_0_XOR_reg_b_1_BIT_15_2_3_EQ_re_ETC___05F_d3281 
                                                 >> 0x15U) 
                                                | (IData)(vlTOPp->mkMac__DOT__y___05Fh211704)));
    vlTOPp->mkMac__DOT__y___05Fh211811 = ((vlTOPp->mkMac__DOT__IF_reg_a_BIT_15_0_XOR_reg_b_1_BIT_15_2_3_EQ_re_ETC___05F_d3279 
                                           >> 0x16U) 
                                          & (IData)(vlTOPp->mkMac__DOT__y___05Fh211834));
    vlTOPp->mkMac__DOT__y___05Fh208600 = ((0x800000U 
                                           & ((0xff800000U 
                                               & (vlTOPp->mkMac__DOT__IF_reg_a_BIT_15_0_XOR_reg_b_1_BIT_15_2_3_EQ_re_ETC___05F_d3281 
                                                  << 1U)) 
                                              | ((IData)(vlTOPp->mkMac__DOT__y___05Fh211811) 
                                                 << 0x17U))) 
                                          | (((IData)(vlTOPp->mkMac__DOT__y___05Fh211834) 
                                              << 0x16U) 
                                             | (((IData)(vlTOPp->mkMac__DOT__y___05Fh211727) 
                                                 << 0x15U) 
                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh211620) 
                                                    << 0x14U) 
                                                   | (((IData)(vlTOPp->mkMac__DOT__y___05Fh211513) 
                                                       << 0x13U) 
                                                      | (((IData)(vlTOPp->mkMac__DOT__y___05Fh211406) 
                                                          << 0x12U) 
                                                         | (((IData)(vlTOPp->mkMac__DOT__y___05Fh211299) 
                                                             << 0x11U) 
                                                            | (((IData)(vlTOPp->mkMac__DOT__y___05Fh211192) 
                                                                << 0x10U) 
                                                               | (((IData)(vlTOPp->mkMac__DOT__y___05Fh211085) 
                                                                   << 0xfU) 
                                                                  | (((IData)(vlTOPp->mkMac__DOT__y___05Fh210978) 
                                                                      << 0xeU) 
                                                                     | (((IData)(vlTOPp->mkMac__DOT__y___05Fh210871) 
                                                                         << 0xdU) 
                                                                        | (((IData)(vlTOPp->mkMac__DOT__y___05Fh210764) 
                                                                            << 0xcU) 
                                                                           | (((IData)(vlTOPp->mkMac__DOT__y___05Fh210657) 
                                                                               << 0xbU) 
                                                                              | (((IData)(vlTOPp->mkMac__DOT__y___05Fh210550) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh210443) 
                                                                                << 9U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh210336) 
                                                                                << 8U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh210229) 
                                                                                << 7U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh210122) 
                                                                                << 6U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh210015) 
                                                                                << 5U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh209908) 
                                                                                << 4U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh209801) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->mkMac__DOT__y___05Fh209694) 
                                                                                << 2U) 
                                                                                | (3U 
                                                                                & (IData)(vlTOPp->mkMac__DOT__IF_IF_reg_a_BIT_15_0_XOR_reg_b_1_BIT_15_2_3_EQ_ETC___05F_d3327))))))))))))))))))))))));
    vlTOPp->mkMac__DOT__final_mant___05Fh208592 = (vlTOPp->mkMac__DOT__propagate___05Fh208597 
                                                   ^ vlTOPp->mkMac__DOT__y___05Fh208600);
    vlTOPp->mkMac__DOT___theResult___05F___05F_2___05Fh208547 
        = ((2U & vlTOPp->mkMac__DOT__IF_reg_a_BIT_15_0_XOR_reg_b_1_BIT_15_2_3_EQ_re_ETC___05F_d3273)
            ? vlTOPp->mkMac__DOT__final_mant___05Fh208592
            : vlTOPp->mkMac__DOT__mant_interim___05F_1___05Fh208546);
    vlTOPp->mkMac__DOT__IF_IF_reg_a_BIT_15_0_XOR_reg_b_1_BIT_15_2_3_EQ_ETC___05Fq10 
        = ((0x1000000U & vlTOPp->mkMac__DOT__IF_reg_a_BIT_15_0_XOR_reg_b_1_BIT_15_2_3_EQ_re_ETC___05F_d3273)
            ? vlTOPp->mkMac__DOT___theResult___05F___05F_2___05Fh208547
            : vlTOPp->mkMac__DOT___theResult___05F___05F_2_snd___05Fh221339);
    vlTOPp->mkMac__DOT___theResult___05F___05F_2_fst___05Fh208549 
        = ((0x800000U & vlTOPp->mkMac__DOT___theResult___05F___05F_2___05Fh208547)
            ? vlTOPp->mkMac__DOT__final_exp___05F_1___05Fh212843
            : vlTOPp->mkMac__DOT__final_exp___05F_2___05Fh208548);
    vlTOPp->mkMac__DOT__IF_IF_reg_a_BIT_15_0_XOR_reg_b_1_BIT_15_2_3_EQ_ETC___05Fq9 
        = ((0x1000000U & vlTOPp->mkMac__DOT__IF_reg_a_BIT_15_0_XOR_reg_b_1_BIT_15_2_3_EQ_re_ETC___05F_d3273)
            ? vlTOPp->mkMac__DOT___theResult___05F___05F_2_fst___05Fh208549
            : vlTOPp->mkMac__DOT___theResult___05F___05F_2_fst___05Fh221338);
    vlTOPp->mkMac__DOT__x___05Fh81976 = (((IData)(vlTOPp->mkMac__DOT___theResult___05F___05F_3_snd___05Fh139851) 
                                          << 0x1fU) 
                                         | ((0x7f800000U 
                                             & (vlTOPp->mkMac__DOT__IF_IF_reg_a_BIT_15_0_XOR_reg_b_1_BIT_15_2_3_EQ_ETC___05Fq9 
                                                << 0x17U)) 
                                            | (0x7fffffU 
                                               & vlTOPp->mkMac__DOT__IF_IF_reg_a_BIT_15_0_XOR_reg_b_1_BIT_15_2_3_EQ_ETC___05Fq10)));
    vlTOPp->mkMac__DOT__rg_out_D_IN = ((IData)(vlTOPp->mkMac__DOT__reg_s)
                                        ? vlTOPp->mkMac__DOT__x___05Fh81976
                                        : vlTOPp->mkMac__DOT__x___05Fh588);
}

VL_INLINE_OPT void Vtop::_combo__TOP__7(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__7\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkMac__DOT__reg_s_EN = vlTOPp->EN_get_inputs;
    vlTOPp->mkMac__DOT__reg_s_D_IN = vlTOPp->get_inputs_s;
    vlTOPp->mkMac__DOT__rg_inp_valid_D_IN = vlTOPp->EN_get_inputs;
    vlTOPp->mkMac__DOT__reg_c_EN = vlTOPp->EN_get_inputs;
    vlTOPp->mkMac__DOT__reg_c_D_IN = vlTOPp->get_inputs_c;
    vlTOPp->mkMac__DOT__reg_b_EN = vlTOPp->EN_get_inputs;
    vlTOPp->mkMac__DOT__reg_b_D_IN = vlTOPp->get_inputs_b;
    vlTOPp->mkMac__DOT__reg_a_EN = vlTOPp->EN_get_inputs;
    vlTOPp->mkMac__DOT__reg_a_D_IN = vlTOPp->get_inputs_a;
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
