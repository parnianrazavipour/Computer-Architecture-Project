// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmips_machine.h for the primary calling header

#include "verilated.h"

#include "Vmips_machine_Mux_24Bit.h"
#include "Vmips_machine__Syms.h"

VL_INLINE_OPT void Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04__3(Vmips_machine_Mux_24Bit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04__3\n"); );
    // Body
    vlSelf->__Vcellout__M01__out = ((0xfeU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (1U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M2 
                                              & (~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper))) 
                                             | (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M2 
                                                & (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper)))));
    vlSelf->__Vcellout__M01__out = ((0xfdU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (2U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M2 
                                              & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper)) 
                                                 << 1U)) 
                                             | (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M2 
                                                & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper) 
                                                   << 1U)))));
    vlSelf->__Vcellout__M01__out = ((0xfbU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (4U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M2 
                                              & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper)) 
                                                 << 2U)) 
                                             | (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M2 
                                                & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper) 
                                                   << 2U)))));
    vlSelf->__Vcellout__M01__out = ((0xf7U & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (8U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M2 
                                              & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper)) 
                                                 << 3U)) 
                                             | (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M2 
                                                & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper) 
                                                   << 3U)))));
    vlSelf->__Vcellout__M01__out = ((0xefU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (0x10U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M2 
                                                 & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper)) 
                                                    << 4U)) 
                                                | (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M2 
                                                   & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper) 
                                                      << 4U)))));
    vlSelf->__Vcellout__M01__out = ((0xdfU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (0x20U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M2 
                                                 & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper)) 
                                                    << 5U)) 
                                                | (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M2 
                                                   & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper) 
                                                      << 5U)))));
    vlSelf->__Vcellout__M01__out = ((0xbfU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (0x40U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M2 
                                                 & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper)) 
                                                    << 6U)) 
                                                | (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M2 
                                                   & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper) 
                                                      << 6U)))));
    vlSelf->__Vcellout__M01__out = ((0x7fU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (0x80U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M2 
                                                 & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper)) 
                                                    << 7U)) 
                                                | (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M2 
                                                   & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper) 
                                                      << 7U)))));
    vlSelf->__Vcellout__M02__out = ((0xfeU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (1U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M2 
                                               >> 8U) 
                                              & (~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper))) 
                                             | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M2 
                                                 >> 8U) 
                                                & (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper)))));
    vlSelf->__Vcellout__M02__out = ((0xfdU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (2U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M2 
                                               >> 8U) 
                                              & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper)) 
                                                 << 1U)) 
                                             | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M2 
                                                 >> 8U) 
                                                & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper) 
                                                   << 1U)))));
    vlSelf->__Vcellout__M02__out = ((0xfbU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (4U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M2 
                                               >> 8U) 
                                              & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper)) 
                                                 << 2U)) 
                                             | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M2 
                                                 >> 8U) 
                                                & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper) 
                                                   << 2U)))));
    vlSelf->__Vcellout__M02__out = ((0xf7U & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (8U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M2 
                                               >> 8U) 
                                              & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper)) 
                                                 << 3U)) 
                                             | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M2 
                                                 >> 8U) 
                                                & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper) 
                                                   << 3U)))));
    vlSelf->__Vcellout__M02__out = ((0xefU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (0x10U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M2 
                                                  >> 8U) 
                                                 & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper)) 
                                                    << 4U)) 
                                                | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M2 
                                                    >> 8U) 
                                                   & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper) 
                                                      << 4U)))));
    vlSelf->__Vcellout__M02__out = ((0xdfU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (0x20U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M2 
                                                  >> 8U) 
                                                 & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper)) 
                                                    << 5U)) 
                                                | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M2 
                                                    >> 8U) 
                                                   & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper) 
                                                      << 5U)))));
    vlSelf->__Vcellout__M02__out = ((0xbfU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (0x40U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M2 
                                                  >> 8U) 
                                                 & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper)) 
                                                    << 6U)) 
                                                | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M2 
                                                    >> 8U) 
                                                   & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper) 
                                                      << 6U)))));
    vlSelf->__Vcellout__M02__out = ((0x7fU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (0x80U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M2 
                                                  >> 8U) 
                                                 & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper)) 
                                                    << 7U)) 
                                                | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M2 
                                                    >> 8U) 
                                                   & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper) 
                                                      << 7U)))));
    vlSelf->__Vcellout__M03__out = ((0xfeU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (1U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M2 
                                               >> 0x10U) 
                                              & (~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper))) 
                                             | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M2 
                                                 >> 0x10U) 
                                                & (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper)))));
    vlSelf->__Vcellout__M03__out = ((0xfdU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (2U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M2 
                                               >> 0x10U) 
                                              & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper)) 
                                                 << 1U)) 
                                             | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M2 
                                                 >> 0x10U) 
                                                & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper) 
                                                   << 1U)))));
    vlSelf->__Vcellout__M03__out = ((0xfbU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (4U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M2 
                                               >> 0x10U) 
                                              & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper)) 
                                                 << 2U)) 
                                             | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M2 
                                                 >> 0x10U) 
                                                & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper) 
                                                   << 2U)))));
    vlSelf->__Vcellout__M03__out = ((0xf7U & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (8U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M2 
                                               >> 0x10U) 
                                              & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper)) 
                                                 << 3U)) 
                                             | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M2 
                                                 >> 0x10U) 
                                                & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper) 
                                                   << 3U)))));
    vlSelf->__Vcellout__M03__out = ((0xefU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (0x10U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M2 
                                                  >> 0x10U) 
                                                 & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper)) 
                                                    << 4U)) 
                                                | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M2 
                                                    >> 0x10U) 
                                                   & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper) 
                                                      << 4U)))));
    vlSelf->__Vcellout__M03__out = ((0xdfU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (0x20U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M2 
                                                  >> 0x10U) 
                                                 & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper)) 
                                                    << 5U)) 
                                                | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M2 
                                                    >> 0x10U) 
                                                   & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper) 
                                                      << 5U)))));
    vlSelf->__Vcellout__M03__out = ((0xbfU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (0x40U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M2 
                                                  >> 0x10U) 
                                                 & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper)) 
                                                    << 6U)) 
                                                | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M2 
                                                    >> 0x10U) 
                                                   & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper) 
                                                      << 6U)))));
    vlSelf->__Vcellout__M03__out = ((0x7fU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (0x80U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M2 
                                                  >> 0x10U) 
                                                 & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper)) 
                                                    << 7U)) 
                                                | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M2 
                                                    >> 0x10U) 
                                                   & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper) 
                                                      << 7U)))));
    vlSelf->out = (((IData)(vlSelf->__Vcellout__M03__out) 
                    << 0x10U) | (((IData)(vlSelf->__Vcellout__M02__out) 
                                  << 8U) | (IData)(vlSelf->__Vcellout__M01__out)));
}

VL_INLINE_OPT void Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05__4(Vmips_machine_Mux_24Bit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05__4\n"); );
    // Body
    vlSelf->__Vcellout__M01__out = ((0xfeU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (1U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                                              & (~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl))) 
                                             | (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M_result 
                                                & (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl)))));
    vlSelf->__Vcellout__M01__out = ((0xfdU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (2U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                                              & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl)) 
                                                 << 1U)) 
                                             | (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M_result 
                                                & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl) 
                                                   << 1U)))));
    vlSelf->__Vcellout__M01__out = ((0xfbU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (4U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                                              & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl)) 
                                                 << 2U)) 
                                             | (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M_result 
                                                & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl) 
                                                   << 2U)))));
    vlSelf->__Vcellout__M01__out = ((0xf7U & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (8U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                                              & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl)) 
                                                 << 3U)) 
                                             | (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M_result 
                                                & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl) 
                                                   << 3U)))));
    vlSelf->__Vcellout__M01__out = ((0xefU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (0x10U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                                                 & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl)) 
                                                    << 4U)) 
                                                | (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M_result 
                                                   & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl) 
                                                      << 4U)))));
    vlSelf->__Vcellout__M01__out = ((0xdfU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (0x20U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                                                 & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl)) 
                                                    << 5U)) 
                                                | (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M_result 
                                                   & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl) 
                                                      << 5U)))));
    vlSelf->__Vcellout__M01__out = ((0xbfU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (0x40U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                                                 & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl)) 
                                                    << 6U)) 
                                                | (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M_result 
                                                   & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl) 
                                                      << 6U)))));
    vlSelf->__Vcellout__M01__out = ((0x7fU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (0x80U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                                                 & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl)) 
                                                    << 7U)) 
                                                | (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M_result 
                                                   & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl) 
                                                      << 7U)))));
    vlSelf->__Vcellout__M02__out = ((0xfeU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (1U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                                               >> 8U) 
                                              & (~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl))) 
                                             | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M_result 
                                                 >> 8U) 
                                                & (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl)))));
    vlSelf->__Vcellout__M02__out = ((0xfdU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (2U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                                               >> 8U) 
                                              & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl)) 
                                                 << 1U)) 
                                             | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M_result 
                                                 >> 8U) 
                                                & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl) 
                                                   << 1U)))));
    vlSelf->__Vcellout__M02__out = ((0xfbU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (4U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                                               >> 8U) 
                                              & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl)) 
                                                 << 2U)) 
                                             | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M_result 
                                                 >> 8U) 
                                                & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl) 
                                                   << 2U)))));
    vlSelf->__Vcellout__M02__out = ((0xf7U & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (8U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                                               >> 8U) 
                                              & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl)) 
                                                 << 3U)) 
                                             | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M_result 
                                                 >> 8U) 
                                                & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl) 
                                                   << 3U)))));
    vlSelf->__Vcellout__M02__out = ((0xefU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (0x10U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                                                  >> 8U) 
                                                 & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl)) 
                                                    << 4U)) 
                                                | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M_result 
                                                    >> 8U) 
                                                   & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl) 
                                                      << 4U)))));
    vlSelf->__Vcellout__M02__out = ((0xdfU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (0x20U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                                                  >> 8U) 
                                                 & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl)) 
                                                    << 5U)) 
                                                | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M_result 
                                                    >> 8U) 
                                                   & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl) 
                                                      << 5U)))));
    vlSelf->__Vcellout__M02__out = ((0xbfU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (0x40U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                                                  >> 8U) 
                                                 & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl)) 
                                                    << 6U)) 
                                                | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M_result 
                                                    >> 8U) 
                                                   & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl) 
                                                      << 6U)))));
    vlSelf->__Vcellout__M02__out = ((0x7fU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (0x80U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                                                  >> 8U) 
                                                 & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl)) 
                                                    << 7U)) 
                                                | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M_result 
                                                    >> 8U) 
                                                   & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl) 
                                                      << 7U)))));
    vlSelf->__Vcellout__M03__out = ((0xfeU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (1U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                                               >> 0x10U) 
                                              & (~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl))) 
                                             | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M_result 
                                                 >> 0x10U) 
                                                & (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl)))));
    vlSelf->__Vcellout__M03__out = ((0xfdU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (2U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                                               >> 0x10U) 
                                              & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl)) 
                                                 << 1U)) 
                                             | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M_result 
                                                 >> 0x10U) 
                                                & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl) 
                                                   << 1U)))));
    vlSelf->__Vcellout__M03__out = ((0xfbU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (4U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                                               >> 0x10U) 
                                              & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl)) 
                                                 << 2U)) 
                                             | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M_result 
                                                 >> 0x10U) 
                                                & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl) 
                                                   << 2U)))));
    vlSelf->__Vcellout__M03__out = ((0xf7U & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (8U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                                               >> 0x10U) 
                                              & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl)) 
                                                 << 3U)) 
                                             | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M_result 
                                                 >> 0x10U) 
                                                & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl) 
                                                   << 3U)))));
    vlSelf->__Vcellout__M03__out = ((0xefU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (0x10U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                                                  >> 0x10U) 
                                                 & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl)) 
                                                    << 4U)) 
                                                | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M_result 
                                                    >> 0x10U) 
                                                   & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl) 
                                                      << 4U)))));
    vlSelf->__Vcellout__M03__out = ((0xdfU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (0x20U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                                                  >> 0x10U) 
                                                 & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl)) 
                                                    << 5U)) 
                                                | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M_result 
                                                    >> 0x10U) 
                                                   & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl) 
                                                      << 5U)))));
    vlSelf->__Vcellout__M03__out = ((0xbfU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (0x40U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                                                  >> 0x10U) 
                                                 & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl)) 
                                                    << 6U)) 
                                                | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M_result 
                                                    >> 0x10U) 
                                                   & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl) 
                                                      << 6U)))));
    vlSelf->__Vcellout__M03__out = ((0x7fU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (0x80U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                                                  >> 0x10U) 
                                                 & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl)) 
                                                    << 7U)) 
                                                | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M_result 
                                                    >> 0x10U) 
                                                   & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl) 
                                                      << 7U)))));
    vlSelf->out = (((IData)(vlSelf->__Vcellout__M03__out) 
                    << 0x10U) | (((IData)(vlSelf->__Vcellout__M02__out) 
                                  << 8U) | (IData)(vlSelf->__Vcellout__M01__out)));
}

VL_INLINE_OPT void Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02__1(Vmips_machine_Mux_24Bit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02__1\n"); );
    // Body
    vlSelf->__Vcellout__M01__out = ((0xfeU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (1U & ((IData)(
                                                     (0x800000ULL 
                                                      == 
                                                      (0x800000800000ULL 
                                                       & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result))) 
                                             | (IData)(
                                                       (0x800001000000ULL 
                                                        == 
                                                        (0x800001000000ULL 
                                                         & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result))))));
    vlSelf->__Vcellout__M01__out = ((0xfdU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (2U & (((IData)(
                                                      (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                       >> 0x17U)) 
                                              & ((~ (IData)(
                                                            (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                             >> 0x2fU))) 
                                                 << 1U)) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                         >> 0x18U)) 
                                                & ((IData)(
                                                           (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                            >> 0x2fU)) 
                                                   << 1U)))));
    vlSelf->__Vcellout__M01__out = ((0xfbU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (4U & (((IData)(
                                                      (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                       >> 0x17U)) 
                                              & ((~ (IData)(
                                                            (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                             >> 0x2fU))) 
                                                 << 2U)) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                         >> 0x18U)) 
                                                & ((IData)(
                                                           (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                            >> 0x2fU)) 
                                                   << 2U)))));
    vlSelf->__Vcellout__M01__out = ((0xf7U & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (8U & (((IData)(
                                                      (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                       >> 0x17U)) 
                                              & ((~ (IData)(
                                                            (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                             >> 0x2fU))) 
                                                 << 3U)) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                         >> 0x18U)) 
                                                & ((IData)(
                                                           (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                            >> 0x2fU)) 
                                                   << 3U)))));
    vlSelf->__Vcellout__M01__out = ((0xefU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (0x10U & (((IData)(
                                                         (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                          >> 0x17U)) 
                                                 & ((~ (IData)(
                                                               (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                                >> 0x2fU))) 
                                                    << 4U)) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                            >> 0x18U)) 
                                                   & ((IData)(
                                                              (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                               >> 0x2fU)) 
                                                      << 4U)))));
    vlSelf->__Vcellout__M01__out = ((0xdfU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (0x20U & (((IData)(
                                                         (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                          >> 0x17U)) 
                                                 & ((~ (IData)(
                                                               (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                                >> 0x2fU))) 
                                                    << 5U)) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                            >> 0x18U)) 
                                                   & ((IData)(
                                                              (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                               >> 0x2fU)) 
                                                      << 5U)))));
    vlSelf->__Vcellout__M01__out = ((0xbfU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (0x40U & (((IData)(
                                                         (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                          >> 0x17U)) 
                                                 & ((~ (IData)(
                                                               (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                                >> 0x2fU))) 
                                                    << 6U)) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                            >> 0x18U)) 
                                                   & ((IData)(
                                                              (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                               >> 0x2fU)) 
                                                      << 6U)))));
    vlSelf->__Vcellout__M01__out = ((0x7fU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (0x80U & (((IData)(
                                                         (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                          >> 0x17U)) 
                                                 & ((~ (IData)(
                                                               (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                                >> 0x2fU))) 
                                                    << 7U)) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                            >> 0x18U)) 
                                                   & ((IData)(
                                                              (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                               >> 0x2fU)) 
                                                      << 7U)))));
    vlSelf->__Vcellout__M02__out = ((0xfeU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (1U & ((((IData)(
                                                       (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                        >> 0x17U)) 
                                               >> 8U) 
                                              & (~ (IData)(
                                                           (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                            >> 0x2fU)))) 
                                             | (((IData)(
                                                         (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                          >> 0x18U)) 
                                                 >> 8U) 
                                                & (IData)(
                                                          (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                           >> 0x2fU))))));
    vlSelf->__Vcellout__M02__out = ((0xfdU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (2U & ((((IData)(
                                                       (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                        >> 0x17U)) 
                                               >> 8U) 
                                              & ((~ (IData)(
                                                            (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                             >> 0x2fU))) 
                                                 << 1U)) 
                                             | (((IData)(
                                                         (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                          >> 0x18U)) 
                                                 >> 8U) 
                                                & ((IData)(
                                                           (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                            >> 0x2fU)) 
                                                   << 1U)))));
    vlSelf->__Vcellout__M02__out = ((0xfbU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (4U & ((((IData)(
                                                       (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                        >> 0x17U)) 
                                               >> 8U) 
                                              & ((~ (IData)(
                                                            (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                             >> 0x2fU))) 
                                                 << 2U)) 
                                             | (((IData)(
                                                         (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                          >> 0x18U)) 
                                                 >> 8U) 
                                                & ((IData)(
                                                           (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                            >> 0x2fU)) 
                                                   << 2U)))));
    vlSelf->__Vcellout__M02__out = ((0xf7U & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (8U & ((((IData)(
                                                       (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                        >> 0x17U)) 
                                               >> 8U) 
                                              & ((~ (IData)(
                                                            (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                             >> 0x2fU))) 
                                                 << 3U)) 
                                             | (((IData)(
                                                         (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                          >> 0x18U)) 
                                                 >> 8U) 
                                                & ((IData)(
                                                           (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                            >> 0x2fU)) 
                                                   << 3U)))));
    vlSelf->__Vcellout__M02__out = ((0xefU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (0x10U & ((((IData)(
                                                          (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                           >> 0x17U)) 
                                                  >> 8U) 
                                                 & ((~ (IData)(
                                                               (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                                >> 0x2fU))) 
                                                    << 4U)) 
                                                | (((IData)(
                                                            (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                             >> 0x18U)) 
                                                    >> 8U) 
                                                   & ((IData)(
                                                              (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                               >> 0x2fU)) 
                                                      << 4U)))));
    vlSelf->__Vcellout__M02__out = ((0xdfU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (0x20U & ((((IData)(
                                                          (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                           >> 0x17U)) 
                                                  >> 8U) 
                                                 & ((~ (IData)(
                                                               (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                                >> 0x2fU))) 
                                                    << 5U)) 
                                                | (((IData)(
                                                            (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                             >> 0x18U)) 
                                                    >> 8U) 
                                                   & ((IData)(
                                                              (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                               >> 0x2fU)) 
                                                      << 5U)))));
    vlSelf->__Vcellout__M02__out = ((0xbfU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (0x40U & ((((IData)(
                                                          (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                           >> 0x17U)) 
                                                  >> 8U) 
                                                 & ((~ (IData)(
                                                               (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                                >> 0x2fU))) 
                                                    << 6U)) 
                                                | (((IData)(
                                                            (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                             >> 0x18U)) 
                                                    >> 8U) 
                                                   & ((IData)(
                                                              (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                               >> 0x2fU)) 
                                                      << 6U)))));
    vlSelf->__Vcellout__M02__out = ((0x7fU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (0x80U & ((((IData)(
                                                          (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                           >> 0x17U)) 
                                                  >> 8U) 
                                                 & ((~ (IData)(
                                                               (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                                >> 0x2fU))) 
                                                    << 7U)) 
                                                | (((IData)(
                                                            (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                             >> 0x18U)) 
                                                    >> 8U) 
                                                   & ((IData)(
                                                              (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                               >> 0x2fU)) 
                                                      << 7U)))));
    vlSelf->__Vcellout__M03__out = ((0xfeU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (1U & ((((IData)(
                                                       (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                        >> 0x17U)) 
                                               >> 0x10U) 
                                              & (~ (IData)(
                                                           (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                            >> 0x2fU)))) 
                                             | (((IData)(
                                                         (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                          >> 0x18U)) 
                                                 >> 0x10U) 
                                                & (IData)(
                                                          (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                           >> 0x2fU))))));
    vlSelf->__Vcellout__M03__out = ((0xfdU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (2U & ((((IData)(
                                                       (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                        >> 0x17U)) 
                                               >> 0x10U) 
                                              & ((~ (IData)(
                                                            (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                             >> 0x2fU))) 
                                                 << 1U)) 
                                             | (((IData)(
                                                         (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                          >> 0x18U)) 
                                                 >> 0x10U) 
                                                & ((IData)(
                                                           (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                            >> 0x2fU)) 
                                                   << 1U)))));
    vlSelf->__Vcellout__M03__out = ((0xfbU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (4U & ((((IData)(
                                                       (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                        >> 0x17U)) 
                                               >> 0x10U) 
                                              & ((~ (IData)(
                                                            (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                             >> 0x2fU))) 
                                                 << 2U)) 
                                             | (((IData)(
                                                         (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                          >> 0x18U)) 
                                                 >> 0x10U) 
                                                & ((IData)(
                                                           (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                            >> 0x2fU)) 
                                                   << 2U)))));
    vlSelf->__Vcellout__M03__out = ((0xf7U & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (8U & ((((IData)(
                                                       (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                        >> 0x17U)) 
                                               >> 0x10U) 
                                              & ((~ (IData)(
                                                            (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                             >> 0x2fU))) 
                                                 << 3U)) 
                                             | (((IData)(
                                                         (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                          >> 0x18U)) 
                                                 >> 0x10U) 
                                                & ((IData)(
                                                           (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                            >> 0x2fU)) 
                                                   << 3U)))));
    vlSelf->__Vcellout__M03__out = ((0xefU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (0x10U & ((((IData)(
                                                          (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                           >> 0x17U)) 
                                                  >> 0x10U) 
                                                 & ((~ (IData)(
                                                               (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                                >> 0x2fU))) 
                                                    << 4U)) 
                                                | (((IData)(
                                                            (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                             >> 0x18U)) 
                                                    >> 0x10U) 
                                                   & ((IData)(
                                                              (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                               >> 0x2fU)) 
                                                      << 4U)))));
    vlSelf->__Vcellout__M03__out = ((0xdfU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (0x20U & ((((IData)(
                                                          (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                           >> 0x17U)) 
                                                  >> 0x10U) 
                                                 & ((~ (IData)(
                                                               (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                                >> 0x2fU))) 
                                                    << 5U)) 
                                                | (((IData)(
                                                            (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                             >> 0x18U)) 
                                                    >> 0x10U) 
                                                   & ((IData)(
                                                              (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                               >> 0x2fU)) 
                                                      << 5U)))));
    vlSelf->__Vcellout__M03__out = ((0xbfU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (0x40U & ((((IData)(
                                                          (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                           >> 0x17U)) 
                                                  >> 0x10U) 
                                                 & ((~ (IData)(
                                                               (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                                >> 0x2fU))) 
                                                    << 6U)) 
                                                | (((IData)(
                                                            (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                             >> 0x18U)) 
                                                    >> 0x10U) 
                                                   & ((IData)(
                                                              (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M_mul_result 
                                                               >> 0x2fU)) 
                                                      << 6U)))));
    vlSelf->__Vcellout__M03__out = (0x7fU & (IData)(vlSelf->__Vcellout__M03__out));
    vlSelf->out = (((IData)(vlSelf->__Vcellout__M03__out) 
                    << 0x10U) | (((IData)(vlSelf->__Vcellout__M02__out) 
                                  << 8U) | (IData)(vlSelf->__Vcellout__M01__out)));
}

VL_INLINE_OPT void Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__M02__2(Vmips_machine_Mux_24Bit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__M02__2\n"); );
    // Body
    vlSelf->__Vcellout__M01__out = ((0xfeU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (1U & ((IData)(
                                                     (1ULL 
                                                      == 
                                                      (0x1000001ULL 
                                                       & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp))) 
                                             | (IData)(
                                                       (0x1000002ULL 
                                                        == 
                                                        (0x1000002ULL 
                                                         & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp))))));
    vlSelf->__Vcellout__M01__out = ((0xfdU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (2U & (((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp) 
                                              & ((~ (IData)(
                                                            (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                             >> 0x18U))) 
                                                 << 1U)) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                         >> 1U)) 
                                                & ((IData)(
                                                           (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                            >> 0x18U)) 
                                                   << 1U)))));
    vlSelf->__Vcellout__M01__out = ((0xfbU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (4U & (((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp) 
                                              & ((~ (IData)(
                                                            (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                             >> 0x18U))) 
                                                 << 2U)) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                         >> 1U)) 
                                                & ((IData)(
                                                           (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                            >> 0x18U)) 
                                                   << 2U)))));
    vlSelf->__Vcellout__M01__out = ((0xf7U & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (8U & (((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp) 
                                              & ((~ (IData)(
                                                            (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                             >> 0x18U))) 
                                                 << 3U)) 
                                             | ((IData)(
                                                        (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                         >> 1U)) 
                                                & ((IData)(
                                                           (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                            >> 0x18U)) 
                                                   << 3U)))));
    vlSelf->__Vcellout__M01__out = ((0xefU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (0x10U & (((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp) 
                                                 & ((~ (IData)(
                                                               (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                                >> 0x18U))) 
                                                    << 4U)) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                            >> 1U)) 
                                                   & ((IData)(
                                                              (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                               >> 0x18U)) 
                                                      << 4U)))));
    vlSelf->__Vcellout__M01__out = ((0xdfU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (0x20U & (((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp) 
                                                 & ((~ (IData)(
                                                               (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                                >> 0x18U))) 
                                                    << 5U)) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                            >> 1U)) 
                                                   & ((IData)(
                                                              (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                               >> 0x18U)) 
                                                      << 5U)))));
    vlSelf->__Vcellout__M01__out = ((0xbfU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (0x40U & (((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp) 
                                                 & ((~ (IData)(
                                                               (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                                >> 0x18U))) 
                                                    << 6U)) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                            >> 1U)) 
                                                   & ((IData)(
                                                              (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                               >> 0x18U)) 
                                                      << 6U)))));
    vlSelf->__Vcellout__M01__out = ((0x7fU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (0x80U & (((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp) 
                                                 & ((~ (IData)(
                                                               (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                                >> 0x18U))) 
                                                    << 7U)) 
                                                | ((IData)(
                                                           (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                            >> 1U)) 
                                                   & ((IData)(
                                                              (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                               >> 0x18U)) 
                                                      << 7U)))));
    vlSelf->__Vcellout__M02__out = ((0xfeU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (1U & ((((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp) 
                                               >> 8U) 
                                              & (~ (IData)(
                                                           (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                            >> 0x18U)))) 
                                             | (((IData)(
                                                         (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                          >> 1U)) 
                                                 >> 8U) 
                                                & (IData)(
                                                          (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                           >> 0x18U))))));
    vlSelf->__Vcellout__M02__out = ((0xfdU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (2U & ((((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp) 
                                               >> 8U) 
                                              & ((~ (IData)(
                                                            (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                             >> 0x18U))) 
                                                 << 1U)) 
                                             | (((IData)(
                                                         (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                          >> 1U)) 
                                                 >> 8U) 
                                                & ((IData)(
                                                           (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                            >> 0x18U)) 
                                                   << 1U)))));
    vlSelf->__Vcellout__M02__out = ((0xfbU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (4U & ((((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp) 
                                               >> 8U) 
                                              & ((~ (IData)(
                                                            (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                             >> 0x18U))) 
                                                 << 2U)) 
                                             | (((IData)(
                                                         (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                          >> 1U)) 
                                                 >> 8U) 
                                                & ((IData)(
                                                           (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                            >> 0x18U)) 
                                                   << 2U)))));
    vlSelf->__Vcellout__M02__out = ((0xf7U & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (8U & ((((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp) 
                                               >> 8U) 
                                              & ((~ (IData)(
                                                            (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                             >> 0x18U))) 
                                                 << 3U)) 
                                             | (((IData)(
                                                         (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                          >> 1U)) 
                                                 >> 8U) 
                                                & ((IData)(
                                                           (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                            >> 0x18U)) 
                                                   << 3U)))));
    vlSelf->__Vcellout__M02__out = ((0xefU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (0x10U & ((((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp) 
                                                  >> 8U) 
                                                 & ((~ (IData)(
                                                               (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                                >> 0x18U))) 
                                                    << 4U)) 
                                                | (((IData)(
                                                            (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                             >> 1U)) 
                                                    >> 8U) 
                                                   & ((IData)(
                                                              (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                               >> 0x18U)) 
                                                      << 4U)))));
    vlSelf->__Vcellout__M02__out = ((0xdfU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (0x20U & ((((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp) 
                                                  >> 8U) 
                                                 & ((~ (IData)(
                                                               (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                                >> 0x18U))) 
                                                    << 5U)) 
                                                | (((IData)(
                                                            (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                             >> 1U)) 
                                                    >> 8U) 
                                                   & ((IData)(
                                                              (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                               >> 0x18U)) 
                                                      << 5U)))));
    vlSelf->__Vcellout__M02__out = ((0xbfU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (0x40U & ((((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp) 
                                                  >> 8U) 
                                                 & ((~ (IData)(
                                                               (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                                >> 0x18U))) 
                                                    << 6U)) 
                                                | (((IData)(
                                                            (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                             >> 1U)) 
                                                    >> 8U) 
                                                   & ((IData)(
                                                              (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                               >> 0x18U)) 
                                                      << 6U)))));
    vlSelf->__Vcellout__M02__out = ((0x7fU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (0x80U & ((((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp) 
                                                  >> 8U) 
                                                 & ((~ (IData)(
                                                               (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                                >> 0x18U))) 
                                                    << 7U)) 
                                                | (((IData)(
                                                            (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                             >> 1U)) 
                                                    >> 8U) 
                                                   & ((IData)(
                                                              (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                               >> 0x18U)) 
                                                      << 7U)))));
    vlSelf->__Vcellout__M03__out = ((0xfeU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (1U & ((((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp) 
                                               >> 0x10U) 
                                              & (~ (IData)(
                                                           (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                            >> 0x18U)))) 
                                             | (((IData)(
                                                         (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                          >> 1U)) 
                                                 >> 0x10U) 
                                                & (IData)(
                                                          (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                           >> 0x18U))))));
    vlSelf->__Vcellout__M03__out = ((0xfdU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (2U & ((((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp) 
                                               >> 0x10U) 
                                              & ((~ (IData)(
                                                            (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                             >> 0x18U))) 
                                                 << 1U)) 
                                             | (((IData)(
                                                         (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                          >> 1U)) 
                                                 >> 0x10U) 
                                                & ((IData)(
                                                           (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                            >> 0x18U)) 
                                                   << 1U)))));
    vlSelf->__Vcellout__M03__out = ((0xfbU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (4U & ((((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp) 
                                               >> 0x10U) 
                                              & ((~ (IData)(
                                                            (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                             >> 0x18U))) 
                                                 << 2U)) 
                                             | (((IData)(
                                                         (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                          >> 1U)) 
                                                 >> 0x10U) 
                                                & ((IData)(
                                                           (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                            >> 0x18U)) 
                                                   << 2U)))));
    vlSelf->__Vcellout__M03__out = ((0xf7U & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (8U & ((((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp) 
                                               >> 0x10U) 
                                              & ((~ (IData)(
                                                            (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                             >> 0x18U))) 
                                                 << 3U)) 
                                             | (((IData)(
                                                         (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                          >> 1U)) 
                                                 >> 0x10U) 
                                                & ((IData)(
                                                           (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                            >> 0x18U)) 
                                                   << 3U)))));
    vlSelf->__Vcellout__M03__out = ((0xefU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (0x10U & ((((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp) 
                                                  >> 0x10U) 
                                                 & ((~ (IData)(
                                                               (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                                >> 0x18U))) 
                                                    << 4U)) 
                                                | (((IData)(
                                                            (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                             >> 1U)) 
                                                    >> 0x10U) 
                                                   & ((IData)(
                                                              (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                               >> 0x18U)) 
                                                      << 4U)))));
    vlSelf->__Vcellout__M03__out = ((0xdfU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (0x20U & ((((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp) 
                                                  >> 0x10U) 
                                                 & ((~ (IData)(
                                                               (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                                >> 0x18U))) 
                                                    << 5U)) 
                                                | (((IData)(
                                                            (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                             >> 1U)) 
                                                    >> 0x10U) 
                                                   & ((IData)(
                                                              (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                               >> 0x18U)) 
                                                      << 5U)))));
    vlSelf->__Vcellout__M03__out = ((0xbfU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (0x40U & ((((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp) 
                                                  >> 0x10U) 
                                                 & ((~ (IData)(
                                                               (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                                >> 0x18U))) 
                                                    << 6U)) 
                                                | (((IData)(
                                                            (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                             >> 1U)) 
                                                    >> 0x10U) 
                                                   & ((IData)(
                                                              (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                               >> 0x18U)) 
                                                      << 6U)))));
    vlSelf->__Vcellout__M03__out = (0x7fU & (IData)(vlSelf->__Vcellout__M03__out));
    vlSelf->out = (((IData)(vlSelf->__Vcellout__M03__out) 
                    << 0x10U) | (((IData)(vlSelf->__Vcellout__M02__out) 
                                  << 8U) | (IData)(vlSelf->__Vcellout__M01__out)));
}

VL_INLINE_OPT void Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M01__DOT__M01__5(Vmips_machine_Mux_24Bit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M01__DOT__M01__5\n"); );
    // Body
    vlSelf->__Vcellout__M01__out = ((0xfeU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (1U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result1 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                  >> 1U))) 
                                             | (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result2 
                                                & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                   >> 1U)))));
    vlSelf->__Vcellout__M01__out = ((0xfdU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (2U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result1 
                                              & ((~ 
                                                  ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                   >> 1U)) 
                                                 << 1U)) 
                                             | (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result2 
                                                & (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))));
    vlSelf->__Vcellout__M01__out = ((0xfbU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (4U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result1 
                                              & ((~ 
                                                  ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                   >> 1U)) 
                                                 << 2U)) 
                                             | (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result2 
                                                & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                   << 1U)))));
    vlSelf->__Vcellout__M01__out = ((0xf7U & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (8U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result1 
                                              & ((~ 
                                                  ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                   >> 1U)) 
                                                 << 3U)) 
                                             | (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result2 
                                                & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                   << 2U)))));
    vlSelf->__Vcellout__M01__out = ((0xefU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (0x10U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result1 
                                                 & ((~ 
                                                     ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                      >> 1U)) 
                                                    << 4U)) 
                                                | (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result2 
                                                   & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                      << 3U)))));
    vlSelf->__Vcellout__M01__out = ((0xdfU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (0x20U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result1 
                                                 & ((~ 
                                                     ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                      >> 1U)) 
                                                    << 5U)) 
                                                | (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result2 
                                                   & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                      << 4U)))));
    vlSelf->__Vcellout__M01__out = ((0xbfU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (0x40U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result1 
                                                 & ((~ 
                                                     ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                      >> 1U)) 
                                                    << 6U)) 
                                                | (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result2 
                                                   & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                      << 5U)))));
    vlSelf->__Vcellout__M01__out = ((0x7fU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (0x80U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result1 
                                                 & ((~ 
                                                     ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                      >> 1U)) 
                                                    << 7U)) 
                                                | (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result2 
                                                   & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                      << 6U)))));
    vlSelf->__Vcellout__M02__out = ((0xfeU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (1U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result1 
                                               >> 8U) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                  >> 1U))) 
                                             | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result2 
                                                 >> 8U) 
                                                & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                   >> 1U)))));
    vlSelf->__Vcellout__M02__out = ((0xfdU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (2U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result1 
                                               >> 8U) 
                                              & ((~ 
                                                  ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                   >> 1U)) 
                                                 << 1U)) 
                                             | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result2 
                                                 >> 8U) 
                                                & (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))));
    vlSelf->__Vcellout__M02__out = ((0xfbU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (4U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result1 
                                               >> 8U) 
                                              & ((~ 
                                                  ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                   >> 1U)) 
                                                 << 2U)) 
                                             | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result2 
                                                 >> 8U) 
                                                & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                   << 1U)))));
    vlSelf->__Vcellout__M02__out = ((0xf7U & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (8U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result1 
                                               >> 8U) 
                                              & ((~ 
                                                  ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                   >> 1U)) 
                                                 << 3U)) 
                                             | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result2 
                                                 >> 8U) 
                                                & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                   << 2U)))));
    vlSelf->__Vcellout__M02__out = ((0xefU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (0x10U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result1 
                                                  >> 8U) 
                                                 & ((~ 
                                                     ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                      >> 1U)) 
                                                    << 4U)) 
                                                | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result2 
                                                    >> 8U) 
                                                   & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                      << 3U)))));
    vlSelf->__Vcellout__M02__out = ((0xdfU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (0x20U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result1 
                                                  >> 8U) 
                                                 & ((~ 
                                                     ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                      >> 1U)) 
                                                    << 5U)) 
                                                | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result2 
                                                    >> 8U) 
                                                   & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                      << 4U)))));
    vlSelf->__Vcellout__M02__out = ((0xbfU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (0x40U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result1 
                                                  >> 8U) 
                                                 & ((~ 
                                                     ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                      >> 1U)) 
                                                    << 6U)) 
                                                | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result2 
                                                    >> 8U) 
                                                   & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                      << 5U)))));
    vlSelf->__Vcellout__M02__out = ((0x7fU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (0x80U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result1 
                                                  >> 8U) 
                                                 & ((~ 
                                                     ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                      >> 1U)) 
                                                    << 7U)) 
                                                | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result2 
                                                    >> 8U) 
                                                   & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                      << 6U)))));
    vlSelf->__Vcellout__M03__out = ((0xfeU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (1U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result1 
                                               >> 0x10U) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                  >> 1U))) 
                                             | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result2 
                                                 >> 0x10U) 
                                                & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                   >> 1U)))));
    vlSelf->__Vcellout__M03__out = ((0xfdU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (2U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result1 
                                               >> 0x10U) 
                                              & ((~ 
                                                  ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                   >> 1U)) 
                                                 << 1U)) 
                                             | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result2 
                                                 >> 0x10U) 
                                                & (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))));
    vlSelf->__Vcellout__M03__out = ((0xfbU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (4U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result1 
                                               >> 0x10U) 
                                              & ((~ 
                                                  ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                   >> 1U)) 
                                                 << 2U)) 
                                             | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result2 
                                                 >> 0x10U) 
                                                & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                   << 1U)))));
    vlSelf->__Vcellout__M03__out = ((0xf7U & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (8U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result1 
                                               >> 0x10U) 
                                              & ((~ 
                                                  ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                   >> 1U)) 
                                                 << 3U)) 
                                             | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result2 
                                                 >> 0x10U) 
                                                & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                   << 2U)))));
    vlSelf->__Vcellout__M03__out = ((0xefU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (0x10U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result1 
                                                  >> 0x10U) 
                                                 & ((~ 
                                                     ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                      >> 1U)) 
                                                    << 4U)) 
                                                | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result2 
                                                    >> 0x10U) 
                                                   & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                      << 3U)))));
    vlSelf->__Vcellout__M03__out = ((0xdfU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (0x20U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result1 
                                                  >> 0x10U) 
                                                 & ((~ 
                                                     ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                      >> 1U)) 
                                                    << 5U)) 
                                                | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result2 
                                                    >> 0x10U) 
                                                   & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                      << 4U)))));
    vlSelf->__Vcellout__M03__out = ((0xbfU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (0x40U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result1 
                                                  >> 0x10U) 
                                                 & ((~ 
                                                     ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                      >> 1U)) 
                                                    << 6U)) 
                                                | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result2 
                                                    >> 0x10U) 
                                                   & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                      << 5U)))));
    vlSelf->__Vcellout__M03__out = ((0x7fU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (0x80U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result1 
                                                  >> 0x10U) 
                                                 & ((~ 
                                                     ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                      >> 1U)) 
                                                    << 7U)) 
                                                | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result2 
                                                    >> 0x10U) 
                                                   & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                      << 6U)))));
    vlSelf->out = (((IData)(vlSelf->__Vcellout__M03__out) 
                    << 0x10U) | (((IData)(vlSelf->__Vcellout__M02__out) 
                                  << 8U) | (IData)(vlSelf->__Vcellout__M01__out)));
}

VL_INLINE_OPT void Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M02__DOT__M01__6(Vmips_machine_Mux_24Bit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M02__DOT__M01__6\n"); );
    // Body
    vlSelf->__Vcellout__M01__out = ((0xfeU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (1U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__temp_result 
                                              & (~ (IData)(
                                                           (3U 
                                                            == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))))) 
                                             | (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result3 
                                                & (3U 
                                                   == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))))));
    vlSelf->__Vcellout__M01__out = ((0xfdU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (2U & ((0xfffffffeU 
                                              & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__temp_result 
                                                 & ((~ (IData)(
                                                               (3U 
                                                                == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))) 
                                                    << 1U))) 
                                             | (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result3 
                                                  >> 1U) 
                                                 & (3U 
                                                    == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))) 
                                                << 1U))));
    vlSelf->__Vcellout__M01__out = ((0xfbU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (4U & ((0xfffffffcU 
                                              & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__temp_result 
                                                 & ((~ (IData)(
                                                               (3U 
                                                                == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))) 
                                                    << 2U))) 
                                             | (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result3 
                                                  >> 2U) 
                                                 & (3U 
                                                    == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))) 
                                                << 2U))));
    vlSelf->__Vcellout__M01__out = ((0xf7U & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (8U & ((0xfffffff8U 
                                              & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__temp_result 
                                                 & ((~ (IData)(
                                                               (3U 
                                                                == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))) 
                                                    << 3U))) 
                                             | (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result3 
                                                  >> 3U) 
                                                 & (3U 
                                                    == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))) 
                                                << 3U))));
    vlSelf->__Vcellout__M01__out = ((0xefU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (0x10U & ((0xfffffff0U 
                                                 & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__temp_result 
                                                    & ((~ (IData)(
                                                                  (3U 
                                                                   == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))) 
                                                       << 4U))) 
                                                | (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result3 
                                                     >> 4U) 
                                                    & (3U 
                                                       == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))) 
                                                   << 4U))));
    vlSelf->__Vcellout__M01__out = ((0xdfU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (0x20U & ((0xffffffe0U 
                                                 & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__temp_result 
                                                    & ((~ (IData)(
                                                                  (3U 
                                                                   == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))) 
                                                       << 5U))) 
                                                | (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result3 
                                                     >> 5U) 
                                                    & (3U 
                                                       == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))) 
                                                   << 5U))));
    vlSelf->__Vcellout__M01__out = ((0xbfU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (0x40U & ((0xffffffc0U 
                                                 & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__temp_result 
                                                    & ((~ (IData)(
                                                                  (3U 
                                                                   == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))) 
                                                       << 6U))) 
                                                | (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result3 
                                                     >> 6U) 
                                                    & (3U 
                                                       == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))) 
                                                   << 6U))));
    vlSelf->__Vcellout__M01__out = ((0x7fU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (0x80U & ((0xffffff80U 
                                                 & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__temp_result 
                                                    & ((~ (IData)(
                                                                  (3U 
                                                                   == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))) 
                                                       << 7U))) 
                                                | (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result3 
                                                     >> 7U) 
                                                    & (3U 
                                                       == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))) 
                                                   << 7U))));
    vlSelf->__Vcellout__M02__out = ((0xfeU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (1U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__temp_result 
                                               >> 8U) 
                                              & (~ (IData)(
                                                           (3U 
                                                            == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))))) 
                                             | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result3 
                                                 >> 8U) 
                                                & (3U 
                                                   == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))))));
    vlSelf->__Vcellout__M02__out = ((0xfdU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (2U & ((0xfffffeU 
                                              & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__temp_result 
                                                  >> 8U) 
                                                 & ((~ (IData)(
                                                               (3U 
                                                                == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))) 
                                                    << 1U))) 
                                             | (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result3 
                                                  >> 9U) 
                                                 & (3U 
                                                    == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))) 
                                                << 1U))));
    vlSelf->__Vcellout__M02__out = ((0xfbU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (4U & ((0xfffffcU 
                                              & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__temp_result 
                                                  >> 8U) 
                                                 & ((~ (IData)(
                                                               (3U 
                                                                == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))) 
                                                    << 2U))) 
                                             | (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result3 
                                                  >> 0xaU) 
                                                 & (3U 
                                                    == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))) 
                                                << 2U))));
    vlSelf->__Vcellout__M02__out = ((0xf7U & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (8U & ((0xfffff8U 
                                              & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__temp_result 
                                                  >> 8U) 
                                                 & ((~ (IData)(
                                                               (3U 
                                                                == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))) 
                                                    << 3U))) 
                                             | (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result3 
                                                  >> 0xbU) 
                                                 & (3U 
                                                    == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))) 
                                                << 3U))));
    vlSelf->__Vcellout__M02__out = ((0xefU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (0x10U & ((0xfffff0U 
                                                 & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__temp_result 
                                                     >> 8U) 
                                                    & ((~ (IData)(
                                                                  (3U 
                                                                   == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))) 
                                                       << 4U))) 
                                                | (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result3 
                                                     >> 0xcU) 
                                                    & (3U 
                                                       == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))) 
                                                   << 4U))));
    vlSelf->__Vcellout__M02__out = ((0xdfU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (0x20U & ((0xffffe0U 
                                                 & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__temp_result 
                                                     >> 8U) 
                                                    & ((~ (IData)(
                                                                  (3U 
                                                                   == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))) 
                                                       << 5U))) 
                                                | (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result3 
                                                     >> 0xdU) 
                                                    & (3U 
                                                       == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))) 
                                                   << 5U))));
    vlSelf->__Vcellout__M02__out = ((0xbfU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (0x40U & ((0xffffc0U 
                                                 & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__temp_result 
                                                     >> 8U) 
                                                    & ((~ (IData)(
                                                                  (3U 
                                                                   == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))) 
                                                       << 6U))) 
                                                | (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result3 
                                                     >> 0xeU) 
                                                    & (3U 
                                                       == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))) 
                                                   << 6U))));
    vlSelf->__Vcellout__M02__out = ((0x7fU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (0x80U & ((0xffff80U 
                                                 & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__temp_result 
                                                     >> 8U) 
                                                    & ((~ (IData)(
                                                                  (3U 
                                                                   == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))) 
                                                       << 7U))) 
                                                | (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result3 
                                                     >> 0xfU) 
                                                    & (3U 
                                                       == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))) 
                                                   << 7U))));
    vlSelf->__Vcellout__M03__out = ((0xfeU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (1U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__temp_result 
                                               >> 0x10U) 
                                              & (~ (IData)(
                                                           (3U 
                                                            == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))))) 
                                             | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result3 
                                                 >> 0x10U) 
                                                & (3U 
                                                   == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))))));
    vlSelf->__Vcellout__M03__out = ((0xfdU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (2U & ((0xfffeU 
                                              & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__temp_result 
                                                  >> 0x10U) 
                                                 & ((~ (IData)(
                                                               (3U 
                                                                == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))) 
                                                    << 1U))) 
                                             | (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result3 
                                                  >> 0x11U) 
                                                 & (3U 
                                                    == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))) 
                                                << 1U))));
    vlSelf->__Vcellout__M03__out = ((0xfbU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (4U & ((0xfffcU 
                                              & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__temp_result 
                                                  >> 0x10U) 
                                                 & ((~ (IData)(
                                                               (3U 
                                                                == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))) 
                                                    << 2U))) 
                                             | (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result3 
                                                  >> 0x12U) 
                                                 & (3U 
                                                    == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))) 
                                                << 2U))));
    vlSelf->__Vcellout__M03__out = ((0xf7U & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (8U & ((0xfff8U 
                                              & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__temp_result 
                                                  >> 0x10U) 
                                                 & ((~ (IData)(
                                                               (3U 
                                                                == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))) 
                                                    << 3U))) 
                                             | (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result3 
                                                  >> 0x13U) 
                                                 & (3U 
                                                    == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))) 
                                                << 3U))));
    vlSelf->__Vcellout__M03__out = ((0xefU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (0x10U & ((0xfff0U 
                                                 & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__temp_result 
                                                     >> 0x10U) 
                                                    & ((~ (IData)(
                                                                  (3U 
                                                                   == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))) 
                                                       << 4U))) 
                                                | (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result3 
                                                     >> 0x14U) 
                                                    & (3U 
                                                       == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))) 
                                                   << 4U))));
    vlSelf->__Vcellout__M03__out = ((0xdfU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (0x20U & ((0xffe0U 
                                                 & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__temp_result 
                                                     >> 0x10U) 
                                                    & ((~ (IData)(
                                                                  (3U 
                                                                   == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))) 
                                                       << 5U))) 
                                                | (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result3 
                                                     >> 0x15U) 
                                                    & (3U 
                                                       == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))) 
                                                   << 5U))));
    vlSelf->__Vcellout__M03__out = ((0xbfU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (0x40U & ((0xffc0U 
                                                 & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__temp_result 
                                                     >> 0x10U) 
                                                    & ((~ (IData)(
                                                                  (3U 
                                                                   == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))) 
                                                       << 6U))) 
                                                | (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result3 
                                                     >> 0x16U) 
                                                    & (3U 
                                                       == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))) 
                                                   << 6U))));
    vlSelf->__Vcellout__M03__out = ((0x7fU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (0x80U & ((0xff80U 
                                                 & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__temp_result 
                                                     >> 0x10U) 
                                                    & ((~ (IData)(
                                                                  (3U 
                                                                   == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))) 
                                                       << 7U))) 
                                                | (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result3 
                                                     >> 0x17U) 
                                                    & (3U 
                                                       == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))) 
                                                   << 7U))));
    vlSelf->out = (((IData)(vlSelf->__Vcellout__M03__out) 
                    << 0x10U) | (((IData)(vlSelf->__Vcellout__M02__out) 
                                  << 8U) | (IData)(vlSelf->__Vcellout__M01__out)));
}

VL_INLINE_OPT void Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M09__DOT__M01__7(Vmips_machine_Mux_24Bit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M09__DOT__M01__7\n"); );
    // Body
    vlSelf->__Vcellout__M01__out = ((0xf8U & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | ((4U & ((0xfffffffcU 
                                               & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result4) 
                                              | ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Exception) 
                                                 << 2U))) 
                                       | (3U & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result4 
                                                | (- (IData)((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Exception)))))));
    vlSelf->__Vcellout__M01__out = ((0xc7U & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result4) 
                                                 | ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Exception) 
                                                    << 5U))) 
                                       | (0x18U & (
                                                   (0xfffffff8U 
                                                    & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result4) 
                                                   | ((- (IData)((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Exception))) 
                                                      << 3U)))));
    vlSelf->__Vcellout__M01__out = ((0x3fU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (0xc0U & ((0xffffffc0U 
                                                 & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result4) 
                                                | ((- (IData)((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Exception))) 
                                                   << 6U))));
    vlSelf->__Vcellout__M02__out = ((0xf8U & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | ((4U & ((0xfffffcU 
                                               & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result4 
                                                  >> 8U)) 
                                              | ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Exception) 
                                                 << 2U))) 
                                       | (3U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result4 
                                                 >> 8U) 
                                                | (- (IData)((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Exception)))))));
    vlSelf->__Vcellout__M02__out = ((0xc7U & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | ((0x20U & ((0xffffe0U 
                                                  & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result4 
                                                     >> 8U)) 
                                                 | ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Exception) 
                                                    << 5U))) 
                                       | (0x18U & (
                                                   (0xfffff8U 
                                                    & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result4 
                                                       >> 8U)) 
                                                   | ((- (IData)((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Exception))) 
                                                      << 3U)))));
    vlSelf->__Vcellout__M02__out = ((0x3fU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (0xc0U & ((0xffffc0U 
                                                 & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result4 
                                                    >> 8U)) 
                                                | ((- (IData)((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Exception))) 
                                                   << 6U))));
    vlSelf->__Vcellout__M03__out = ((0xf8U & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | ((4U & ((0xfffcU 
                                               & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result4 
                                                  >> 0x10U)) 
                                              | ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Exception) 
                                                 << 2U))) 
                                       | (3U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result4 
                                                 >> 0x10U) 
                                                | (- (IData)((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Exception)))))));
    vlSelf->__Vcellout__M03__out = ((0xc7U & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | ((0x20U & ((0xffe0U 
                                                  & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result4 
                                                     >> 0x10U)) 
                                                 | ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Exception) 
                                                    << 5U))) 
                                       | (0x18U & (
                                                   (0xfff8U 
                                                    & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result4 
                                                       >> 0x10U)) 
                                                   | ((- (IData)((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Exception))) 
                                                      << 3U)))));
    vlSelf->__Vcellout__M03__out = ((0x3fU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (0xc0U & ((0xffc0U 
                                                 & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result4 
                                                    >> 0x10U)) 
                                                | ((- (IData)((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Exception))) 
                                                   << 6U))));
    vlSelf->out = (((IData)(vlSelf->__Vcellout__M03__out) 
                    << 0x10U) | (((IData)(vlSelf->__Vcellout__M02__out) 
                                  << 8U) | (IData)(vlSelf->__Vcellout__M01__out)));
}

VL_INLINE_OPT void Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M010__DOT__M01__8(Vmips_machine_Mux_24Bit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M010__DOT__M01__8\n"); );
    // Body
    vlSelf->__Vcellout__M01__out = ((0xfcU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | ((2U & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result5 
                                              & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Underflow)) 
                                                 << 1U))) 
                                       | (1U & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result5 
                                                & (~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Underflow))))));
    vlSelf->__Vcellout__M01__out = ((0xf3U & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | ((8U & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result5 
                                              & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Underflow)) 
                                                 << 3U))) 
                                       | (4U & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result5 
                                                & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Underflow)) 
                                                   << 2U)))));
    vlSelf->__Vcellout__M01__out = ((0xcfU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | ((0x20U & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result5 
                                                 & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Underflow)) 
                                                    << 5U))) 
                                       | (0x10U & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result5 
                                                   & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Underflow)) 
                                                      << 4U)))));
    vlSelf->__Vcellout__M01__out = ((0x3fU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | ((0x80U & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result5 
                                                 & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Underflow)) 
                                                    << 7U))) 
                                       | (0x40U & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result5 
                                                   & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Underflow)) 
                                                      << 6U)))));
    vlSelf->__Vcellout__M02__out = ((0xfcU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | ((2U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result5 
                                               >> 8U) 
                                              & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Underflow)) 
                                                 << 1U))) 
                                       | (1U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result5 
                                                 >> 8U) 
                                                & (~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Underflow))))));
    vlSelf->__Vcellout__M02__out = ((0xf3U & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | ((8U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result5 
                                               >> 8U) 
                                              & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Underflow)) 
                                                 << 3U))) 
                                       | (4U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result5 
                                                 >> 8U) 
                                                & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Underflow)) 
                                                   << 2U)))));
    vlSelf->__Vcellout__M02__out = ((0xcfU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | ((0x20U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result5 
                                                  >> 8U) 
                                                 & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Underflow)) 
                                                    << 5U))) 
                                       | (0x10U & (
                                                   (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result5 
                                                    >> 8U) 
                                                   & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Underflow)) 
                                                      << 4U)))));
    vlSelf->__Vcellout__M02__out = ((0x3fU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | ((0x80U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result5 
                                                  >> 8U) 
                                                 & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Underflow)) 
                                                    << 7U))) 
                                       | (0x40U & (
                                                   (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result5 
                                                    >> 8U) 
                                                   & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Underflow)) 
                                                      << 6U)))));
    vlSelf->__Vcellout__M03__out = ((0xfcU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | ((2U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result5 
                                               >> 0x10U) 
                                              & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Underflow)) 
                                                 << 1U))) 
                                       | (1U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result5 
                                                 >> 0x10U) 
                                                & (~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Underflow))))));
    vlSelf->__Vcellout__M03__out = ((0xf3U & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | ((8U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result5 
                                               >> 0x10U) 
                                              & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Underflow)) 
                                                 << 3U))) 
                                       | (4U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result5 
                                                 >> 0x10U) 
                                                & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Underflow)) 
                                                   << 2U)))));
    vlSelf->__Vcellout__M03__out = ((0xcfU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | ((0x20U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result5 
                                                  >> 0x10U) 
                                                 & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Underflow)) 
                                                    << 5U))) 
                                       | (0x10U & (
                                                   (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result5 
                                                    >> 0x10U) 
                                                   & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Underflow)) 
                                                      << 4U)))));
    vlSelf->__Vcellout__M03__out = ((0x3fU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | ((0x80U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result5 
                                                  >> 0x10U) 
                                                 & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Underflow)) 
                                                    << 7U))) 
                                       | (0x40U & (
                                                   (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result5 
                                                    >> 0x10U) 
                                                   & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Underflow)) 
                                                      << 6U)))));
    vlSelf->out = (((IData)(vlSelf->__Vcellout__M03__out) 
                    << 0x10U) | (((IData)(vlSelf->__Vcellout__M02__out) 
                                  << 8U) | (IData)(vlSelf->__Vcellout__M01__out)));
}

VL_INLINE_OPT void Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M011__DOT__M01__9(Vmips_machine_Mux_24Bit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M011__DOT__M01__9\n"); );
    // Body
    vlSelf->__Vcellout__M01__out = ((0xfcU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | ((2U & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result6 
                                              & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Overflow)) 
                                                 << 1U))) 
                                       | (1U & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result6 
                                                & (~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Overflow))))));
    vlSelf->__Vcellout__M01__out = ((0xf3U & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | ((8U & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result6 
                                              & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Overflow)) 
                                                 << 3U))) 
                                       | (4U & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result6 
                                                & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Overflow)) 
                                                   << 2U)))));
    vlSelf->__Vcellout__M01__out = ((0xcfU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | ((0x20U & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result6 
                                                 & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Overflow)) 
                                                    << 5U))) 
                                       | (0x10U & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result6 
                                                   & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Overflow)) 
                                                      << 4U)))));
    vlSelf->__Vcellout__M01__out = ((0x3fU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | ((0x80U & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result6 
                                                 & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Overflow)) 
                                                    << 7U))) 
                                       | (0x40U & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result6 
                                                   & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Overflow)) 
                                                      << 6U)))));
    vlSelf->__Vcellout__M02__out = ((0xfcU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | ((2U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result6 
                                               >> 8U) 
                                              & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Overflow)) 
                                                 << 1U))) 
                                       | (1U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result6 
                                                 >> 8U) 
                                                & (~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Overflow))))));
    vlSelf->__Vcellout__M02__out = ((0xf3U & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | ((8U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result6 
                                               >> 8U) 
                                              & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Overflow)) 
                                                 << 3U))) 
                                       | (4U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result6 
                                                 >> 8U) 
                                                & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Overflow)) 
                                                   << 2U)))));
    vlSelf->__Vcellout__M02__out = ((0xcfU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | ((0x20U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result6 
                                                  >> 8U) 
                                                 & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Overflow)) 
                                                    << 5U))) 
                                       | (0x10U & (
                                                   (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result6 
                                                    >> 8U) 
                                                   & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Overflow)) 
                                                      << 4U)))));
    vlSelf->__Vcellout__M02__out = ((0x3fU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | ((0x80U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result6 
                                                  >> 8U) 
                                                 & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Overflow)) 
                                                    << 7U))) 
                                       | (0x40U & (
                                                   (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result6 
                                                    >> 8U) 
                                                   & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Overflow)) 
                                                      << 6U)))));
    vlSelf->__Vcellout__M03__out = ((0xfcU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | ((2U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result6 
                                               >> 0x10U) 
                                              & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Overflow)) 
                                                 << 1U))) 
                                       | (1U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result6 
                                                 >> 0x10U) 
                                                & (~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Overflow))))));
    vlSelf->__Vcellout__M03__out = ((0xf3U & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | ((8U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result6 
                                               >> 0x10U) 
                                              & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Overflow)) 
                                                 << 3U))) 
                                       | (4U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result6 
                                                 >> 0x10U) 
                                                & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Overflow)) 
                                                   << 2U)))));
    vlSelf->__Vcellout__M03__out = ((0xcfU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | ((0x20U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result6 
                                                  >> 0x10U) 
                                                 & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Overflow)) 
                                                    << 5U))) 
                                       | (0x10U & (
                                                   (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result6 
                                                    >> 0x10U) 
                                                   & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Overflow)) 
                                                      << 4U)))));
    vlSelf->__Vcellout__M03__out = ((0x3fU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | ((0x80U & ((0xff80U 
                                                  & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result6 
                                                     >> 0x10U)) 
                                                 | ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Overflow) 
                                                    << 7U))) 
                                       | (0x40U & (
                                                   (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result6 
                                                    >> 0x10U) 
                                                   & ((~ (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Overflow)) 
                                                      << 6U)))));
    vlSelf->out = (((IData)(vlSelf->__Vcellout__M03__out) 
                    << 0x10U) | (((IData)(vlSelf->__Vcellout__M02__out) 
                                  << 8U) | (IData)(vlSelf->__Vcellout__M01__out)));
}
