// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmips_machine.h for the primary calling header

#include "verilated.h"

#include "Vmips_machine_Mux_24Bit.h"
#include "Vmips_machine__Syms.h"

VL_INLINE_OPT void Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider__M09__DOT__M01__27(Vmips_machine_Mux_24Bit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider__M09__DOT__M01__27\n"); );
    // Body
    vlSelf->__Vcellout__M01__out = ((0xf8U & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | ((4U & ((0xfffffffcU 
                                               & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result4) 
                                              | ((IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Exception) 
                                                 << 2U))) 
                                       | (3U & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result4 
                                                | (- (IData)((IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Exception)))))));
    vlSelf->__Vcellout__M01__out = ((0xc7U & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result4) 
                                                 | ((IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Exception) 
                                                    << 5U))) 
                                       | (0x18U & (
                                                   (0xfffffff8U 
                                                    & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result4) 
                                                   | ((- (IData)((IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Exception))) 
                                                      << 3U)))));
    vlSelf->__Vcellout__M01__out = ((0x3fU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | (0xc0U & ((0xffffffc0U 
                                                 & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result4) 
                                                | ((- (IData)((IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Exception))) 
                                                   << 6U))));
    vlSelf->__Vcellout__M02__out = ((0xf8U & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | ((4U & ((0xfffffcU 
                                               & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result4 
                                                  >> 8U)) 
                                              | ((IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Exception) 
                                                 << 2U))) 
                                       | (3U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result4 
                                                 >> 8U) 
                                                | (- (IData)((IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Exception)))))));
    vlSelf->__Vcellout__M02__out = ((0xc7U & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | ((0x20U & ((0xffffe0U 
                                                  & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result4 
                                                     >> 8U)) 
                                                 | ((IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Exception) 
                                                    << 5U))) 
                                       | (0x18U & (
                                                   (0xfffff8U 
                                                    & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result4 
                                                       >> 8U)) 
                                                   | ((- (IData)((IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Exception))) 
                                                      << 3U)))));
    vlSelf->__Vcellout__M02__out = ((0x3fU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | (0xc0U & ((0xffffc0U 
                                                 & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result4 
                                                    >> 8U)) 
                                                | ((- (IData)((IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Exception))) 
                                                   << 6U))));
    vlSelf->__Vcellout__M03__out = ((0xf8U & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | ((4U & ((0xfffcU 
                                               & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result4 
                                                  >> 0x10U)) 
                                              | ((IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Exception) 
                                                 << 2U))) 
                                       | (3U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result4 
                                                 >> 0x10U) 
                                                | (- (IData)((IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Exception)))))));
    vlSelf->__Vcellout__M03__out = ((0xc7U & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | ((0x20U & ((0xffe0U 
                                                  & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result4 
                                                     >> 0x10U)) 
                                                 | ((IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Exception) 
                                                    << 5U))) 
                                       | (0x18U & (
                                                   (0xfff8U 
                                                    & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result4 
                                                       >> 0x10U)) 
                                                   | ((- (IData)((IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Exception))) 
                                                      << 3U)))));
    vlSelf->__Vcellout__M03__out = ((0x3fU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | (0xc0U & ((0xffc0U 
                                                 & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result4 
                                                    >> 0x10U)) 
                                                | ((- (IData)((IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Exception))) 
                                                   << 6U))));
    vlSelf->__PVT__out = (((IData)(vlSelf->__Vcellout__M03__out) 
                           << 0x10U) | (((IData)(vlSelf->__Vcellout__M02__out) 
                                         << 8U) | (IData)(vlSelf->__Vcellout__M01__out)));
}

VL_INLINE_OPT void Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider__M010__DOT__M01__31(Vmips_machine_Mux_24Bit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider__M010__DOT__M01__31\n"); );
    // Body
    vlSelf->__Vcellout__M01__out = ((0xfcU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | ((2U & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result5 
                                              & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Underflow)) 
                                                 << 1U))) 
                                       | (1U & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result5 
                                                & (~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Underflow))))));
    vlSelf->__Vcellout__M01__out = ((0xf3U & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | ((8U & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result5 
                                              & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Underflow)) 
                                                 << 3U))) 
                                       | (4U & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result5 
                                                & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Underflow)) 
                                                   << 2U)))));
    vlSelf->__Vcellout__M01__out = ((0xcfU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | ((0x20U & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result5 
                                                 & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Underflow)) 
                                                    << 5U))) 
                                       | (0x10U & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result5 
                                                   & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Underflow)) 
                                                      << 4U)))));
    vlSelf->__Vcellout__M01__out = ((0x3fU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | ((0x80U & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result5 
                                                 & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Underflow)) 
                                                    << 7U))) 
                                       | (0x40U & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result5 
                                                   & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Underflow)) 
                                                      << 6U)))));
    vlSelf->__Vcellout__M02__out = ((0xfcU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | ((2U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result5 
                                               >> 8U) 
                                              & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Underflow)) 
                                                 << 1U))) 
                                       | (1U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result5 
                                                 >> 8U) 
                                                & (~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Underflow))))));
    vlSelf->__Vcellout__M02__out = ((0xf3U & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | ((8U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result5 
                                               >> 8U) 
                                              & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Underflow)) 
                                                 << 3U))) 
                                       | (4U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result5 
                                                 >> 8U) 
                                                & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Underflow)) 
                                                   << 2U)))));
    vlSelf->__Vcellout__M02__out = ((0xcfU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | ((0x20U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result5 
                                                  >> 8U) 
                                                 & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Underflow)) 
                                                    << 5U))) 
                                       | (0x10U & (
                                                   (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result5 
                                                    >> 8U) 
                                                   & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Underflow)) 
                                                      << 4U)))));
    vlSelf->__Vcellout__M02__out = ((0x3fU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | ((0x80U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result5 
                                                  >> 8U) 
                                                 & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Underflow)) 
                                                    << 7U))) 
                                       | (0x40U & (
                                                   (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result5 
                                                    >> 8U) 
                                                   & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Underflow)) 
                                                      << 6U)))));
    vlSelf->__Vcellout__M03__out = ((0xfcU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | ((2U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result5 
                                               >> 0x10U) 
                                              & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Underflow)) 
                                                 << 1U))) 
                                       | (1U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result5 
                                                 >> 0x10U) 
                                                & (~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Underflow))))));
    vlSelf->__Vcellout__M03__out = ((0xf3U & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | ((8U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result5 
                                               >> 0x10U) 
                                              & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Underflow)) 
                                                 << 3U))) 
                                       | (4U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result5 
                                                 >> 0x10U) 
                                                & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Underflow)) 
                                                   << 2U)))));
    vlSelf->__Vcellout__M03__out = ((0xcfU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | ((0x20U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result5 
                                                  >> 0x10U) 
                                                 & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Underflow)) 
                                                    << 5U))) 
                                       | (0x10U & (
                                                   (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result5 
                                                    >> 0x10U) 
                                                   & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Underflow)) 
                                                      << 4U)))));
    vlSelf->__Vcellout__M03__out = ((0x3fU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | ((0x80U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result5 
                                                  >> 0x10U) 
                                                 & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Underflow)) 
                                                    << 7U))) 
                                       | (0x40U & (
                                                   (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result5 
                                                    >> 0x10U) 
                                                   & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Underflow)) 
                                                      << 6U)))));
    vlSelf->__PVT__out = (((IData)(vlSelf->__Vcellout__M03__out) 
                           << 0x10U) | (((IData)(vlSelf->__Vcellout__M02__out) 
                                         << 8U) | (IData)(vlSelf->__Vcellout__M01__out)));
}

VL_INLINE_OPT void Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider__M011__DOT__M01__35(Vmips_machine_Mux_24Bit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider__M011__DOT__M01__35\n"); );
    // Body
    vlSelf->__Vcellout__M01__out = ((0xfcU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | ((2U & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result6 
                                              & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Overflow)) 
                                                 << 1U))) 
                                       | (1U & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result6 
                                                & (~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Overflow))))));
    vlSelf->__Vcellout__M01__out = ((0xf3U & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | ((8U & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result6 
                                              & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Overflow)) 
                                                 << 3U))) 
                                       | (4U & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result6 
                                                & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Overflow)) 
                                                   << 2U)))));
    vlSelf->__Vcellout__M01__out = ((0xcfU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | ((0x20U & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result6 
                                                 & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Overflow)) 
                                                    << 5U))) 
                                       | (0x10U & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result6 
                                                   & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Overflow)) 
                                                      << 4U)))));
    vlSelf->__Vcellout__M01__out = ((0x3fU & (IData)(vlSelf->__Vcellout__M01__out)) 
                                    | ((0x80U & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result6 
                                                 & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Overflow)) 
                                                    << 7U))) 
                                       | (0x40U & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result6 
                                                   & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Overflow)) 
                                                      << 6U)))));
    vlSelf->__Vcellout__M02__out = ((0xfcU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | ((2U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result6 
                                               >> 8U) 
                                              & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Overflow)) 
                                                 << 1U))) 
                                       | (1U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result6 
                                                 >> 8U) 
                                                & (~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Overflow))))));
    vlSelf->__Vcellout__M02__out = ((0xf3U & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | ((8U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result6 
                                               >> 8U) 
                                              & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Overflow)) 
                                                 << 3U))) 
                                       | (4U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result6 
                                                 >> 8U) 
                                                & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Overflow)) 
                                                   << 2U)))));
    vlSelf->__Vcellout__M02__out = ((0xcfU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | ((0x20U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result6 
                                                  >> 8U) 
                                                 & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Overflow)) 
                                                    << 5U))) 
                                       | (0x10U & (
                                                   (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result6 
                                                    >> 8U) 
                                                   & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Overflow)) 
                                                      << 4U)))));
    vlSelf->__Vcellout__M02__out = ((0x3fU & (IData)(vlSelf->__Vcellout__M02__out)) 
                                    | ((0x80U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result6 
                                                  >> 8U) 
                                                 & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Overflow)) 
                                                    << 7U))) 
                                       | (0x40U & (
                                                   (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result6 
                                                    >> 8U) 
                                                   & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Overflow)) 
                                                      << 6U)))));
    vlSelf->__Vcellout__M03__out = ((0xfcU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | ((2U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result6 
                                               >> 0x10U) 
                                              & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Overflow)) 
                                                 << 1U))) 
                                       | (1U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result6 
                                                 >> 0x10U) 
                                                & (~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Overflow))))));
    vlSelf->__Vcellout__M03__out = ((0xf3U & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | ((8U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result6 
                                               >> 0x10U) 
                                              & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Overflow)) 
                                                 << 3U))) 
                                       | (4U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result6 
                                                 >> 0x10U) 
                                                & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Overflow)) 
                                                   << 2U)))));
    vlSelf->__Vcellout__M03__out = ((0xcfU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | ((0x20U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result6 
                                                  >> 0x10U) 
                                                 & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Overflow)) 
                                                    << 5U))) 
                                       | (0x10U & (
                                                   (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result6 
                                                    >> 0x10U) 
                                                   & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Overflow)) 
                                                      << 4U)))));
    vlSelf->__Vcellout__M03__out = ((0x3fU & (IData)(vlSelf->__Vcellout__M03__out)) 
                                    | ((0x80U & ((0xff80U 
                                                  & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result6 
                                                     >> 0x10U)) 
                                                 | ((IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Overflow) 
                                                    << 7U))) 
                                       | (0x40U & (
                                                   (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.__PVT__result6 
                                                    >> 0x10U) 
                                                   & ((~ (IData)(vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__divider.Overflow)) 
                                                      << 6U)))));
    vlSelf->__PVT__out = (((IData)(vlSelf->__Vcellout__M03__out) 
                           << 0x10U) | (((IData)(vlSelf->__Vcellout__M02__out) 
                                         << 8U) | (IData)(vlSelf->__Vcellout__M01__out)));
}
