// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmips_machine.h for the primary calling header

#include "verilated.h"

#include "Vmips_machine_Mux_24Bit.h"
#include "Vmips_machine_add_sub_mul_div.h"

VL_INLINE_OPT void Vmips_machine_add_sub_mul_div___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__20(Vmips_machine_add_sub_mul_div* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmips_machine_add_sub_mul_div___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__20\n"); );
    // Body
    vlSelf->__PVT__result4 = (((IData)(vlSelf->M02__DOT____Vcellout__M02__out) 
                               << 0x18U) | vlSelf->__PVT__M02__DOT__M01->__PVT__out);
    vlSelf->M09__DOT____Vcellout__M02__out = ((0xf8U 
                                               & (IData)(vlSelf->M09__DOT____Vcellout__M02__out)) 
                                              | ((4U 
                                                  & ((0xfcU 
                                                      & (vlSelf->__PVT__result4 
                                                         >> 0x18U)) 
                                                     | ((IData)(vlSelf->Exception) 
                                                        << 2U))) 
                                                 | (3U 
                                                    & ((vlSelf->__PVT__result4 
                                                        >> 0x18U) 
                                                       | (- (IData)((IData)(vlSelf->Exception)))))));
    vlSelf->M09__DOT____Vcellout__M02__out = ((0xc7U 
                                               & (IData)(vlSelf->M09__DOT____Vcellout__M02__out)) 
                                              | ((0x20U 
                                                  & ((0xe0U 
                                                      & (vlSelf->__PVT__result4 
                                                         >> 0x18U)) 
                                                     | ((IData)(vlSelf->Exception) 
                                                        << 5U))) 
                                                 | (0x18U 
                                                    & ((0xf8U 
                                                        & (vlSelf->__PVT__result4 
                                                           >> 0x18U)) 
                                                       | ((- (IData)((IData)(vlSelf->Exception))) 
                                                          << 3U)))));
    vlSelf->M09__DOT____Vcellout__M02__out = ((0x3fU 
                                               & (IData)(vlSelf->M09__DOT____Vcellout__M02__out)) 
                                              | (0xc0U 
                                                 & ((0xc0U 
                                                     & (vlSelf->__PVT__result4 
                                                        >> 0x18U)) 
                                                    | ((- (IData)((IData)(vlSelf->Exception))) 
                                                       << 6U))));
}

VL_INLINE_OPT void Vmips_machine_add_sub_mul_div___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__24(Vmips_machine_add_sub_mul_div* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmips_machine_add_sub_mul_div___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__24\n"); );
    // Body
    vlSelf->__PVT__result5 = (((IData)(vlSelf->M09__DOT____Vcellout__M02__out) 
                               << 0x18U) | vlSelf->__PVT__M09__DOT__M01->__PVT__out);
    vlSelf->M010__DOT____Vcellout__M02__out = ((0xfcU 
                                                & (IData)(vlSelf->M010__DOT____Vcellout__M02__out)) 
                                               | ((2U 
                                                   & ((vlSelf->__PVT__result5 
                                                       >> 0x18U) 
                                                      & ((~ (IData)(vlSelf->Underflow)) 
                                                         << 1U))) 
                                                  | (1U 
                                                     & ((vlSelf->__PVT__result5 
                                                         >> 0x18U) 
                                                        & (~ (IData)(vlSelf->Underflow))))));
    vlSelf->M010__DOT____Vcellout__M02__out = ((0xf3U 
                                                & (IData)(vlSelf->M010__DOT____Vcellout__M02__out)) 
                                               | ((8U 
                                                   & ((vlSelf->__PVT__result5 
                                                       >> 0x18U) 
                                                      & ((~ (IData)(vlSelf->Underflow)) 
                                                         << 3U))) 
                                                  | (4U 
                                                     & ((vlSelf->__PVT__result5 
                                                         >> 0x18U) 
                                                        & ((~ (IData)(vlSelf->Underflow)) 
                                                           << 2U)))));
    vlSelf->M010__DOT____Vcellout__M02__out = ((0xcfU 
                                                & (IData)(vlSelf->M010__DOT____Vcellout__M02__out)) 
                                               | ((0x20U 
                                                   & ((vlSelf->__PVT__result5 
                                                       >> 0x18U) 
                                                      & ((~ (IData)(vlSelf->Underflow)) 
                                                         << 5U))) 
                                                  | (0x10U 
                                                     & ((vlSelf->__PVT__result5 
                                                         >> 0x18U) 
                                                        & ((~ (IData)(vlSelf->Underflow)) 
                                                           << 4U)))));
    vlSelf->M010__DOT____Vcellout__M02__out = ((0xbfU 
                                                & (IData)(vlSelf->M010__DOT____Vcellout__M02__out)) 
                                               | (0x40U 
                                                  & ((vlSelf->__PVT__result5 
                                                      >> 0x18U) 
                                                     & ((~ (IData)(vlSelf->Underflow)) 
                                                        << 6U))));
    vlSelf->M010__DOT____Vcellout__M02__out = ((0x7fU 
                                                & (IData)(vlSelf->M010__DOT____Vcellout__M02__out)) 
                                               | (0x80U 
                                                  & (((vlSelf->__PVT__result5 
                                                       >> 0x18U) 
                                                      & ((~ (IData)(vlSelf->Underflow)) 
                                                         << 7U)) 
                                                     | ((vlSelf->__PVT__result4 
                                                         >> 0x18U) 
                                                        & ((IData)(vlSelf->Underflow) 
                                                           << 7U)))));
}

VL_INLINE_OPT void Vmips_machine_add_sub_mul_div___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__28(Vmips_machine_add_sub_mul_div* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmips_machine_add_sub_mul_div___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__28\n"); );
    // Body
    vlSelf->__PVT__result6 = (((IData)(vlSelf->M010__DOT____Vcellout__M02__out) 
                               << 0x18U) | vlSelf->__PVT__M010__DOT__M01->__PVT__out);
    vlSelf->M011__DOT____Vcellout__M02__out = ((0xf8U 
                                                & (IData)(vlSelf->M011__DOT____Vcellout__M02__out)) 
                                               | ((4U 
                                                   & ((0xfcU 
                                                       & (vlSelf->__PVT__result6 
                                                          >> 0x18U)) 
                                                      | ((IData)(vlSelf->Overflow) 
                                                         << 2U))) 
                                                  | (3U 
                                                     & ((vlSelf->__PVT__result6 
                                                         >> 0x18U) 
                                                        | (- (IData)((IData)(vlSelf->Overflow)))))));
    vlSelf->M011__DOT____Vcellout__M02__out = ((0xc7U 
                                                & (IData)(vlSelf->M011__DOT____Vcellout__M02__out)) 
                                               | ((0x20U 
                                                   & ((0xe0U 
                                                       & (vlSelf->__PVT__result6 
                                                          >> 0x18U)) 
                                                      | ((IData)(vlSelf->Overflow) 
                                                         << 5U))) 
                                                  | (0x18U 
                                                     & ((0xf8U 
                                                         & (vlSelf->__PVT__result6 
                                                            >> 0x18U)) 
                                                        | ((- (IData)((IData)(vlSelf->Overflow))) 
                                                           << 3U)))));
    vlSelf->M011__DOT____Vcellout__M02__out = ((0xbfU 
                                                & (IData)(vlSelf->M011__DOT____Vcellout__M02__out)) 
                                               | (0x40U 
                                                  & ((0xc0U 
                                                      & (vlSelf->__PVT__result6 
                                                         >> 0x18U)) 
                                                     | ((IData)(vlSelf->Overflow) 
                                                        << 6U))));
    vlSelf->M011__DOT____Vcellout__M02__out = ((0x7fU 
                                                & (IData)(vlSelf->M011__DOT____Vcellout__M02__out)) 
                                               | (0x80U 
                                                  & (((vlSelf->__PVT__result6 
                                                       >> 0x18U) 
                                                      & ((~ (IData)(vlSelf->Overflow)) 
                                                         << 7U)) 
                                                     | ((vlSelf->__PVT__result4 
                                                         >> 0x18U) 
                                                        & ((IData)(vlSelf->Overflow) 
                                                           << 7U)))));
}

VL_INLINE_OPT void Vmips_machine_add_sub_mul_div___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__32(Vmips_machine_add_sub_mul_div* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmips_machine_add_sub_mul_div___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__32\n"); );
    // Body
    vlSelf->result = (((IData)(vlSelf->M011__DOT____Vcellout__M02__out) 
                       << 0x18U) | vlSelf->__PVT__M011__DOT__M01->__PVT__out);
}
