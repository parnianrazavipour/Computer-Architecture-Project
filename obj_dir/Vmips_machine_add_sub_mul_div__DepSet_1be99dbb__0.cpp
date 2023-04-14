// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmips_machine.h for the primary calling header

#include "verilated.h"

#include "Vmips_machine__Syms.h"
#include "Vmips_machine_add_sub_mul_div.h"

VL_INLINE_OPT void Vmips_machine_add_sub_mul_div___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__4(Vmips_machine_add_sub_mul_div* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmips_machine_add_sub_mul_div___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__4\n"); );
    // Init
    CData/*0:0*/ __PVT__AS__DOT__reduced_or_E1;
    CData/*0:0*/ __PVT__AS__DOT__reduced_or_E2;
    CData/*7:0*/ __PVT__AS__DOT__temp_exp_diff;
    CData/*7:0*/ __PVT__AS__DOT__complemented_temp_exp_diff;
    CData/*0:0*/ __PVT__AS__DOT__isE1GreaterThanE2;
    CData/*0:0*/ __PVT__AS__DOT__ADD01__DOT__ctemp;
    CData/*0:0*/ __PVT__AS__DOT__ADD01__DOT__ADD01__DOT__g0;
    CData/*0:0*/ __PVT__AS__DOT__ADD01__DOT__ADD01__DOT__g1;
    CData/*0:0*/ __PVT__AS__DOT__ADD01__DOT__ADD01__DOT__g2;
    CData/*0:0*/ __PVT__AS__DOT__ADD01__DOT__ADD01__DOT__p0;
    CData/*0:0*/ __PVT__AS__DOT__ADD01__DOT__ADD01__DOT__p1;
    CData/*0:0*/ __PVT__AS__DOT__ADD01__DOT__ADD01__DOT__p2;
    CData/*0:0*/ __PVT__AS__DOT__ADD01__DOT__ADD01__DOT__p3;
    CData/*0:0*/ __PVT__AS__DOT__ADD01__DOT__ADD02__DOT__g0;
    CData/*0:0*/ __PVT__AS__DOT__ADD01__DOT__ADD02__DOT__g1;
    CData/*0:0*/ __PVT__AS__DOT__ADD01__DOT__ADD02__DOT__g2;
    CData/*0:0*/ __PVT__AS__DOT__ADD01__DOT__ADD02__DOT__p0;
    CData/*0:0*/ __PVT__AS__DOT__ADD01__DOT__ADD02__DOT__p1;
    CData/*0:0*/ __PVT__AS__DOT__ADD01__DOT__ADD02__DOT__p2;
    CData/*0:0*/ __PVT__AS__DOT__ADD01__DOT__ADD02__DOT__p3;
    CData/*0:0*/ __PVT__AS__DOT__C023__DOT__ADD01__DOT__ctemp;
    CData/*0:0*/ __PVT__AS__DOT__ADD0212__DOT__ctemp;
    SData/*8:0*/ __PVT__M__DOT__sum_E;
    CData/*7:0*/ M__DOT____Vcellout__ADD01__sum;
    CData/*0:0*/ __PVT__M__DOT__M01__DOT__w1;
    CData/*0:0*/ __PVT__M__DOT__M01__DOT__w2;
    CData/*0:0*/ __PVT__M__DOT__ADD01__DOT__ctemp;
    CData/*0:0*/ __PVT__M__DOT__ADD01__DOT__ADD01__DOT__g0;
    CData/*0:0*/ __PVT__M__DOT__ADD01__DOT__ADD01__DOT__g1;
    CData/*0:0*/ __PVT__M__DOT__ADD01__DOT__ADD01__DOT__g2;
    CData/*0:0*/ __PVT__M__DOT__ADD01__DOT__ADD01__DOT__p1;
    CData/*0:0*/ __PVT__M__DOT__ADD01__DOT__ADD01__DOT__p2;
    CData/*0:0*/ __PVT__M__DOT__ADD01__DOT__ADD01__DOT__p3;
    CData/*0:0*/ __PVT__M__DOT__ADD01__DOT__ADD02__DOT__g0;
    CData/*0:0*/ __PVT__M__DOT__ADD01__DOT__ADD02__DOT__g1;
    CData/*0:0*/ __PVT__M__DOT__ADD01__DOT__ADD02__DOT__g2;
    CData/*0:0*/ __PVT__M__DOT__ADD01__DOT__ADD02__DOT__p0;
    CData/*0:0*/ __PVT__M__DOT__ADD01__DOT__ADD02__DOT__p1;
    CData/*0:0*/ __PVT__M__DOT__ADD01__DOT__ADD02__DOT__p2;
    CData/*0:0*/ __PVT__M__DOT__ADD01__DOT__ADD02__DOT__p3;
    CData/*0:0*/ __PVT__M__DOT__ADD02__DOT__ctemp;
    CData/*7:0*/ M__DOT__ADD02__DOT____Vcellout__ADD01__sum;
    CData/*0:0*/ __PVT__M__DOT__ADD02__DOT__ADD01__DOT__ctemp;
    CData/*7:0*/ __PVT__D__DOT__sub_E;
    CData/*7:0*/ __PVT__D__DOT__bias_added_E;
    CData/*4:0*/ __PVT__D__DOT__shift_E1;
    CData/*4:0*/ __PVT__D__DOT__shift_E2;
    IData/*23:0*/ D__DOT____Vcellinp__NM1__M_result;
    IData/*23:0*/ D__DOT____Vcellinp__NM2__M_result;
    CData/*7:0*/ D__DOT____Vcellout__ADD03__sum;
    CData/*7:0*/ D__DOT____Vcellout__ADD04__sum;
    CData/*7:0*/ D__DOT____Vcellout__ADD05__sum;
    CData/*0:0*/ __PVT__D__DOT__ADD01__DOT__ctemp;
    CData/*0:0*/ __PVT__D__DOT__ADD01__DOT__ADD01__DOT__g0;
    CData/*0:0*/ __PVT__D__DOT__ADD01__DOT__ADD01__DOT__g1;
    CData/*0:0*/ __PVT__D__DOT__ADD01__DOT__ADD01__DOT__g2;
    CData/*0:0*/ __PVT__D__DOT__ADD01__DOT__ADD01__DOT__p0;
    CData/*0:0*/ __PVT__D__DOT__ADD01__DOT__ADD01__DOT__p1;
    CData/*0:0*/ __PVT__D__DOT__ADD01__DOT__ADD01__DOT__p2;
    CData/*0:0*/ __PVT__D__DOT__ADD01__DOT__ADD01__DOT__p3;
    CData/*0:0*/ __PVT__D__DOT__ADD01__DOT__ADD02__DOT__g0;
    CData/*0:0*/ __PVT__D__DOT__ADD01__DOT__ADD02__DOT__g1;
    CData/*0:0*/ __PVT__D__DOT__ADD01__DOT__ADD02__DOT__p0;
    CData/*0:0*/ __PVT__D__DOT__ADD01__DOT__ADD02__DOT__p1;
    CData/*0:0*/ __PVT__D__DOT__ADD01__DOT__ADD02__DOT__p2;
    CData/*0:0*/ __PVT__D__DOT__ADD02__DOT__ctemp;
    CData/*0:0*/ __PVT__D__DOT__ADD03__DOT__ctemp;
    CData/*0:0*/ __PVT__D__DOT__ADD03__DOT__ADD01__DOT__g0;
    CData/*0:0*/ __PVT__D__DOT__ADD03__DOT__ADD01__DOT__g1;
    CData/*0:0*/ __PVT__D__DOT__ADD03__DOT__ADD01__DOT__g2;
    CData/*0:0*/ __PVT__D__DOT__ADD03__DOT__ADD01__DOT__p0;
    CData/*0:0*/ __PVT__D__DOT__ADD03__DOT__ADD01__DOT__p1;
    CData/*0:0*/ __PVT__D__DOT__ADD03__DOT__ADD01__DOT__p2;
    CData/*0:0*/ __PVT__D__DOT__ADD03__DOT__ADD01__DOT__p3;
    CData/*0:0*/ __PVT__D__DOT__ADD03__DOT__ADD02__DOT__g0;
    CData/*0:0*/ __PVT__D__DOT__ADD03__DOT__ADD02__DOT__g1;
    CData/*0:0*/ __PVT__D__DOT__ADD03__DOT__ADD02__DOT__g2;
    CData/*0:0*/ __PVT__D__DOT__ADD03__DOT__ADD02__DOT__p0;
    CData/*0:0*/ __PVT__D__DOT__ADD03__DOT__ADD02__DOT__p1;
    CData/*0:0*/ __PVT__D__DOT__ADD03__DOT__ADD02__DOT__p2;
    CData/*0:0*/ __PVT__D__DOT__ADD03__DOT__ADD02__DOT__p3;
    CData/*0:0*/ __PVT__D__DOT__ADD04__DOT__ctemp;
    CData/*0:0*/ __PVT__D__DOT__ADD04__DOT__ADD01__DOT__g0;
    CData/*0:0*/ __PVT__D__DOT__ADD04__DOT__ADD01__DOT__g1;
    CData/*0:0*/ __PVT__D__DOT__ADD04__DOT__ADD01__DOT__g2;
    CData/*0:0*/ __PVT__D__DOT__ADD04__DOT__ADD01__DOT__p1;
    CData/*0:0*/ __PVT__D__DOT__ADD04__DOT__ADD01__DOT__p2;
    CData/*0:0*/ __PVT__D__DOT__ADD04__DOT__ADD01__DOT__p3;
    CData/*0:0*/ __PVT__D__DOT__ADD04__DOT__ADD02__DOT__g0;
    CData/*0:0*/ __PVT__D__DOT__ADD04__DOT__ADD02__DOT__g1;
    CData/*0:0*/ __PVT__D__DOT__ADD04__DOT__ADD02__DOT__g2;
    CData/*0:0*/ __PVT__D__DOT__ADD04__DOT__ADD02__DOT__p0;
    CData/*0:0*/ __PVT__D__DOT__ADD04__DOT__ADD02__DOT__p1;
    CData/*0:0*/ __PVT__D__DOT__ADD04__DOT__ADD02__DOT__p2;
    CData/*0:0*/ __PVT__D__DOT__ADD04__DOT__ADD02__DOT__p3;
    CData/*0:0*/ __PVT__D__DOT__ADD05__DOT__ctemp;
    CData/*0:0*/ __PVT__M08__DOT__w1;
    CData/*0:0*/ __PVT__M08__DOT__w2;
    // Body
    D__DOT____Vcellinp__NM1__M_result = (((IData)((0U 
                                                   != 
                                                   (0x7f800000U 
                                                    & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1))) 
                                          << 0x17U) 
                                         | (0x7fffffU 
                                            & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1));
    __PVT__AS__DOT__reduced_or_E1 = (IData)((0U != 
                                             (0x7f800000U 
                                              & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1)));
    __PVT__AS__DOT__reduced_or_E2 = (IData)((0U != 
                                             (0x7f800000U 
                                              & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1)));
    __PVT__M08__DOT__w1 = (1U & (((((IData)((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1))) 
                                    | (IData)((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out)))) 
                                   & (~ ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                         >> 1U))) | 
                                  (((IData)((0x7f800000U 
                                             == (0x7f800000U 
                                                 & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1))) 
                                    | (IData)((0x7f800000U 
                                               == (0x7f800000U 
                                                   & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out)))) 
                                   & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                      >> 1U))) & (~ (IData)(
                                                            (3U 
                                                             == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))))));
    __PVT__M08__DOT__w2 = ((((IData)((0x7f800000U == 
                                      (0x7f800000U 
                                       & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1))) 
                             | (IData)((0x7f800000U 
                                        == (0x7f800000U 
                                            & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out)))) 
                            | (~ ((IData)((0U != (0xffffffU 
                                                  & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out))) 
                                  | ((1U & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                            >> 0x1eU)) 
                                     | ((3U & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                               >> 0x1dU)) 
                                        | ((7U & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                                  >> 0x1cU)) 
                                           | ((0xfU 
                                               & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                                  >> 0x1bU)) 
                                              | ((0x1fU 
                                                  & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                                     >> 0x1aU)) 
                                                 | ((0x3fU 
                                                     & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                                        >> 0x19U)) 
                                                    | (0x7fU 
                                                       & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                                          >> 0x18U))))))))))) 
                           & (3U == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)));
    __PVT__M__DOT__ADD01__DOT__ADD02__DOT__g2 = (1U 
                                                 & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                     & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out) 
                                                    >> 0x1dU));
    __PVT__M__DOT__ADD01__DOT__ADD02__DOT__p3 = (1U 
                                                 & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                     ^ vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out) 
                                                    >> 0x1eU));
    __PVT__M__DOT__ADD01__DOT__ADD02__DOT__g0 = (1U 
                                                 & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                     & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out) 
                                                    >> 0x1bU));
    __PVT__M__DOT__ADD01__DOT__ADD02__DOT__g1 = (1U 
                                                 & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                     & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out) 
                                                    >> 0x1cU));
    __PVT__M__DOT__ADD01__DOT__ADD02__DOT__p0 = (1U 
                                                 & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                     ^ vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out) 
                                                    >> 0x1bU));
    __PVT__M__DOT__ADD01__DOT__ADD02__DOT__p1 = (1U 
                                                 & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                     ^ vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out) 
                                                    >> 0x1cU));
    __PVT__M__DOT__ADD01__DOT__ADD02__DOT__p2 = (1U 
                                                 & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                     ^ vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out) 
                                                    >> 0x1dU));
    __PVT__M__DOT__ADD01__DOT__ADD01__DOT__g2 = (1U 
                                                 & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                     & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out) 
                                                    >> 0x19U));
    __PVT__M__DOT__ADD01__DOT__ADD01__DOT__p3 = (1U 
                                                 & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                     ^ vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out) 
                                                    >> 0x1aU));
    __PVT__M__DOT__ADD01__DOT__ADD01__DOT__g0 = (1U 
                                                 & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                     & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out) 
                                                    >> 0x17U));
    __PVT__M__DOT__ADD01__DOT__ADD01__DOT__g1 = (1U 
                                                 & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                     & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out) 
                                                    >> 0x18U));
    __PVT__M__DOT__ADD01__DOT__ADD01__DOT__p1 = (1U 
                                                 & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                     ^ vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out) 
                                                    >> 0x18U));
    __PVT__M__DOT__ADD01__DOT__ADD01__DOT__p2 = (1U 
                                                 & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                     ^ vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out) 
                                                    >> 0x19U));
    D__DOT____Vcellinp__NM2__M_result = (((IData)((0U 
                                                   != 
                                                   (0x7f800000U 
                                                    & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1))) 
                                          << 0x17U) 
                                         | (0x7fffffU 
                                            & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out));
    vlSelf->__PVT__M__DOT__M_mul_result = (0xffffffffffffULL 
                                           & ((QData)((IData)(
                                                              (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0x7f800000U 
                                                                          & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1))) 
                                                                << 0x17U) 
                                                               | (0x7fffffU 
                                                                  & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1)))) 
                                              * (QData)((IData)(
                                                                (((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x7f800000U 
                                                                            & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1))) 
                                                                  << 0x17U) 
                                                                 | (0x7fffffU 
                                                                    & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out))))));
    vlSelf->__PVT__D__DOT__complemented_E2 = ((0xfcU 
                                               & (IData)(vlSelf->__PVT__D__DOT__complemented_E2)) 
                                              | ((2U 
                                                  & ((~ 
                                                      (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                                       >> 0x18U)) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (~ 
                                                       (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                                        >> 0x17U)))));
    vlSelf->__PVT__D__DOT__complemented_E2 = ((0xf3U 
                                               & (IData)(vlSelf->__PVT__D__DOT__complemented_E2)) 
                                              | ((8U 
                                                  & ((~ 
                                                      (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                                       >> 0x1aU)) 
                                                     << 3U)) 
                                                 | (4U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                                         >> 0x19U)) 
                                                       << 2U))));
    vlSelf->__PVT__D__DOT__complemented_E2 = ((0xcfU 
                                               & (IData)(vlSelf->__PVT__D__DOT__complemented_E2)) 
                                              | ((0x20U 
                                                  & ((~ 
                                                      (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                                       >> 0x1cU)) 
                                                     << 5U)) 
                                                 | (0x10U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                                         >> 0x1bU)) 
                                                       << 4U))));
    vlSelf->__PVT__D__DOT__complemented_E2 = ((0x3fU 
                                               & (IData)(vlSelf->__PVT__D__DOT__complemented_E2)) 
                                              | ((0x80U 
                                                  & ((~ 
                                                      (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                                       >> 0x1eU)) 
                                                     << 7U)) 
                                                 | (0x40U 
                                                    & ((~ 
                                                        (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                                         >> 0x1dU)) 
                                                       << 6U))));
    vlSelf->__PVT__AS__DOT__real_oper = (1U & (((0U 
                                                 != (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)) 
                                                ^ (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                   >> 0x1fU)) 
                                               ^ (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                                  >> 0x1fU)));
    vlSelf->__PVT__AS__DOT__complemented_E2 = ((0xfcU 
                                                & (IData)(vlSelf->__PVT__AS__DOT__complemented_E2)) 
                                               | ((2U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                                        >> 0x18U)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (~ 
                                                        (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                                         >> 0x17U)))));
    vlSelf->__PVT__AS__DOT__complemented_E2 = ((0xf3U 
                                                & (IData)(vlSelf->__PVT__AS__DOT__complemented_E2)) 
                                               | ((8U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                                        >> 0x1aU)) 
                                                      << 3U)) 
                                                  | (4U 
                                                     & ((~ 
                                                         (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                                          >> 0x19U)) 
                                                        << 2U))));
    vlSelf->__PVT__AS__DOT__complemented_E2 = ((0xcfU 
                                                & (IData)(vlSelf->__PVT__AS__DOT__complemented_E2)) 
                                               | ((0x20U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                                        >> 0x1cU)) 
                                                      << 5U)) 
                                                  | (0x10U 
                                                     & ((~ 
                                                         (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                                          >> 0x1bU)) 
                                                        << 4U))));
    vlSelf->__PVT__AS__DOT__complemented_E2 = ((0x3fU 
                                                & (IData)(vlSelf->__PVT__AS__DOT__complemented_E2)) 
                                               | ((0x80U 
                                                   & ((~ 
                                                       (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                                        >> 0x1eU)) 
                                                      << 7U)) 
                                                  | (0x40U 
                                                     & ((~ 
                                                         (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                                          >> 0x1dU)) 
                                                        << 6U))));
    if (((((((((0x800000U == (0x800000U & D__DOT____Vcellinp__NM1__M_result)) 
               | (0x400000U == (0xc00000U & D__DOT____Vcellinp__NM1__M_result))) 
              | (0x200000U == (0xe00000U & D__DOT____Vcellinp__NM1__M_result))) 
             | (0x100000U == (0xf00000U & D__DOT____Vcellinp__NM1__M_result))) 
            | (0x80000U == (0xf80000U & D__DOT____Vcellinp__NM1__M_result))) 
           | (0x40000U == (0xfc0000U & D__DOT____Vcellinp__NM1__M_result))) 
          | (0x20000U == (0xfe0000U & D__DOT____Vcellinp__NM1__M_result))) 
         | (0x10000U == (0xff0000U & D__DOT____Vcellinp__NM1__M_result)))) {
        if ((0x800000U == (0x800000U & D__DOT____Vcellinp__NM1__M_result))) {
            vlSelf->__PVT__D__DOT__normalized_M1 = 
                (0x7fffffU & D__DOT____Vcellinp__NM1__M_result);
        } else if ((0x400000U == (0xc00000U & D__DOT____Vcellinp__NM1__M_result))) {
            vlSelf->__PVT__D__DOT__NM1__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM1__M_result 
                                << 1U));
            vlSelf->__PVT__D__DOT__normalized_M1 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM1__DOT__M_temp);
        } else if ((0x200000U == (0xe00000U & D__DOT____Vcellinp__NM1__M_result))) {
            vlSelf->__PVT__D__DOT__NM1__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM1__M_result 
                                << 2U));
            vlSelf->__PVT__D__DOT__normalized_M1 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM1__DOT__M_temp);
        } else if ((0x100000U == (0xf00000U & D__DOT____Vcellinp__NM1__M_result))) {
            vlSelf->__PVT__D__DOT__NM1__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM1__M_result 
                                << 3U));
            vlSelf->__PVT__D__DOT__normalized_M1 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM1__DOT__M_temp);
        } else if ((0x80000U == (0xf80000U & D__DOT____Vcellinp__NM1__M_result))) {
            vlSelf->__PVT__D__DOT__NM1__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM1__M_result 
                                << 4U));
            vlSelf->__PVT__D__DOT__normalized_M1 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM1__DOT__M_temp);
        } else if ((0x40000U == (0xfc0000U & D__DOT____Vcellinp__NM1__M_result))) {
            vlSelf->__PVT__D__DOT__NM1__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM1__M_result 
                                << 5U));
            vlSelf->__PVT__D__DOT__normalized_M1 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM1__DOT__M_temp);
        } else if ((0x20000U == (0xfe0000U & D__DOT____Vcellinp__NM1__M_result))) {
            vlSelf->__PVT__D__DOT__NM1__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM1__M_result 
                                << 6U));
            vlSelf->__PVT__D__DOT__normalized_M1 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM1__DOT__M_temp);
        } else {
            vlSelf->__PVT__D__DOT__NM1__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM1__M_result 
                                << 7U));
            vlSelf->__PVT__D__DOT__normalized_M1 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM1__DOT__M_temp);
        }
    } else if (((((((((0x8000U == (0xff8000U & D__DOT____Vcellinp__NM1__M_result)) 
                      | (0x4000U == (0xffc000U & D__DOT____Vcellinp__NM1__M_result))) 
                     | (0x2000U == (0xffe000U & D__DOT____Vcellinp__NM1__M_result))) 
                    | (0x1000U == (0xfff000U & D__DOT____Vcellinp__NM1__M_result))) 
                   | (0x800U == (0xfff800U & D__DOT____Vcellinp__NM1__M_result))) 
                  | (0x400U == (0xfffc00U & D__DOT____Vcellinp__NM1__M_result))) 
                 | (0x200U == (0xfffe00U & D__DOT____Vcellinp__NM1__M_result))) 
                | (0x100U == (0xffff00U & D__DOT____Vcellinp__NM1__M_result)))) {
        if ((0x8000U == (0xff8000U & D__DOT____Vcellinp__NM1__M_result))) {
            vlSelf->__PVT__D__DOT__NM1__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM1__M_result 
                                << 8U));
            vlSelf->__PVT__D__DOT__normalized_M1 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM1__DOT__M_temp);
        } else if ((0x4000U == (0xffc000U & D__DOT____Vcellinp__NM1__M_result))) {
            vlSelf->__PVT__D__DOT__NM1__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM1__M_result 
                                << 9U));
            vlSelf->__PVT__D__DOT__normalized_M1 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM1__DOT__M_temp);
        } else if ((0x2000U == (0xffe000U & D__DOT____Vcellinp__NM1__M_result))) {
            vlSelf->__PVT__D__DOT__NM1__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM1__M_result 
                                << 0xaU));
            vlSelf->__PVT__D__DOT__normalized_M1 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM1__DOT__M_temp);
        } else if ((0x1000U == (0xfff000U & D__DOT____Vcellinp__NM1__M_result))) {
            vlSelf->__PVT__D__DOT__NM1__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM1__M_result 
                                << 0xbU));
            vlSelf->__PVT__D__DOT__normalized_M1 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM1__DOT__M_temp);
        } else if ((0x800U == (0xfff800U & D__DOT____Vcellinp__NM1__M_result))) {
            vlSelf->__PVT__D__DOT__NM1__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM1__M_result 
                                << 0xcU));
            vlSelf->__PVT__D__DOT__normalized_M1 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM1__DOT__M_temp);
        } else if ((0x400U == (0xfffc00U & D__DOT____Vcellinp__NM1__M_result))) {
            vlSelf->__PVT__D__DOT__NM1__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM1__M_result 
                                << 0xdU));
            vlSelf->__PVT__D__DOT__normalized_M1 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM1__DOT__M_temp);
        } else if ((0x200U == (0xfffe00U & D__DOT____Vcellinp__NM1__M_result))) {
            vlSelf->__PVT__D__DOT__NM1__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM1__M_result 
                                << 0xeU));
            vlSelf->__PVT__D__DOT__normalized_M1 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM1__DOT__M_temp);
        } else {
            vlSelf->__PVT__D__DOT__NM1__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM1__M_result 
                                << 0xfU));
            vlSelf->__PVT__D__DOT__normalized_M1 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM1__DOT__M_temp);
        }
    } else if (((((((((0x80U == (0xffff80U & D__DOT____Vcellinp__NM1__M_result)) 
                      | (0x40U == (0xffffc0U & D__DOT____Vcellinp__NM1__M_result))) 
                     | (0x20U == (0xffffe0U & D__DOT____Vcellinp__NM1__M_result))) 
                    | (0x110U == (0xfffff0U & D__DOT____Vcellinp__NM1__M_result))) 
                   | (8U == (0xfffff8U & D__DOT____Vcellinp__NM1__M_result))) 
                  | (4U == (0xfffffcU & D__DOT____Vcellinp__NM1__M_result))) 
                 | (2U == (0xfffffeU & D__DOT____Vcellinp__NM1__M_result))) 
                | (1U == D__DOT____Vcellinp__NM1__M_result))) {
        if ((0x80U == (0xffff80U & D__DOT____Vcellinp__NM1__M_result))) {
            vlSelf->__PVT__D__DOT__NM1__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM1__M_result 
                                << 0x10U));
            vlSelf->__PVT__D__DOT__normalized_M1 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM1__DOT__M_temp);
        } else if ((0x40U == (0xffffc0U & D__DOT____Vcellinp__NM1__M_result))) {
            vlSelf->__PVT__D__DOT__NM1__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM1__M_result 
                                << 0x11U));
            vlSelf->__PVT__D__DOT__normalized_M1 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM1__DOT__M_temp);
        } else if ((0x20U == (0xffffe0U & D__DOT____Vcellinp__NM1__M_result))) {
            vlSelf->__PVT__D__DOT__NM1__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM1__M_result 
                                << 0x12U));
            vlSelf->__PVT__D__DOT__normalized_M1 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM1__DOT__M_temp);
        } else if ((0x110U == (0xfffff0U & D__DOT____Vcellinp__NM1__M_result))) {
            vlSelf->__PVT__D__DOT__NM1__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM1__M_result 
                                << 0x13U));
            vlSelf->__PVT__D__DOT__normalized_M1 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM1__DOT__M_temp);
        } else if ((8U == (0xfffff8U & D__DOT____Vcellinp__NM1__M_result))) {
            vlSelf->__PVT__D__DOT__NM1__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM1__M_result 
                                << 0x14U));
            vlSelf->__PVT__D__DOT__normalized_M1 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM1__DOT__M_temp);
        } else if ((4U == (0xfffffcU & D__DOT____Vcellinp__NM1__M_result))) {
            vlSelf->__PVT__D__DOT__NM1__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM1__M_result 
                                << 0x15U));
            vlSelf->__PVT__D__DOT__normalized_M1 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM1__DOT__M_temp);
        } else if ((2U == (0xfffffeU & D__DOT____Vcellinp__NM1__M_result))) {
            vlSelf->__PVT__D__DOT__NM1__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM1__M_result 
                                << 0x16U));
            vlSelf->__PVT__D__DOT__normalized_M1 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM1__DOT__M_temp);
        } else {
            vlSelf->__PVT__D__DOT__NM1__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM1__M_result 
                                << 0x17U));
            vlSelf->__PVT__D__DOT__normalized_M1 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM1__DOT__M_temp);
        }
    } else {
        vlSelf->__PVT__D__DOT__normalized_M1 = 0U;
    }
    __PVT__D__DOT__shift_E1 = (((((((((0x800000U == 
                                       (0x800000U & D__DOT____Vcellinp__NM1__M_result)) 
                                      | (0x400000U 
                                         == (0xc00000U 
                                             & D__DOT____Vcellinp__NM1__M_result))) 
                                     | (0x200000U == 
                                        (0xe00000U 
                                         & D__DOT____Vcellinp__NM1__M_result))) 
                                    | (0x100000U == 
                                       (0xf00000U & D__DOT____Vcellinp__NM1__M_result))) 
                                   | (0x80000U == (0xf80000U 
                                                   & D__DOT____Vcellinp__NM1__M_result))) 
                                  | (0x40000U == (0xfc0000U 
                                                  & D__DOT____Vcellinp__NM1__M_result))) 
                                 | (0x20000U == (0xfe0000U 
                                                 & D__DOT____Vcellinp__NM1__M_result))) 
                                | (0x10000U == (0xff0000U 
                                                & D__DOT____Vcellinp__NM1__M_result)))
                                ? ((0x800000U == (0x800000U 
                                                  & D__DOT____Vcellinp__NM1__M_result))
                                    ? 0U : ((0x400000U 
                                             == (0xc00000U 
                                                 & D__DOT____Vcellinp__NM1__M_result))
                                             ? 1U : 
                                            ((0x200000U 
                                              == (0xe00000U 
                                                  & D__DOT____Vcellinp__NM1__M_result))
                                              ? 2U : 
                                             ((0x100000U 
                                               == (0xf00000U 
                                                   & D__DOT____Vcellinp__NM1__M_result))
                                               ? 3U
                                               : ((0x80000U 
                                                   == 
                                                   (0xf80000U 
                                                    & D__DOT____Vcellinp__NM1__M_result))
                                                   ? 4U
                                                   : 
                                                  ((0x40000U 
                                                    == 
                                                    (0xfc0000U 
                                                     & D__DOT____Vcellinp__NM1__M_result))
                                                    ? 5U
                                                    : 
                                                   ((0x20000U 
                                                     == 
                                                     (0xfe0000U 
                                                      & D__DOT____Vcellinp__NM1__M_result))
                                                     ? 6U
                                                     : 7U)))))))
                                : (((((((((0x8000U 
                                           == (0xff8000U 
                                               & D__DOT____Vcellinp__NM1__M_result)) 
                                          | (0x4000U 
                                             == (0xffc000U 
                                                 & D__DOT____Vcellinp__NM1__M_result))) 
                                         | (0x2000U 
                                            == (0xffe000U 
                                                & D__DOT____Vcellinp__NM1__M_result))) 
                                        | (0x1000U 
                                           == (0xfff000U 
                                               & D__DOT____Vcellinp__NM1__M_result))) 
                                       | (0x800U == 
                                          (0xfff800U 
                                           & D__DOT____Vcellinp__NM1__M_result))) 
                                      | (0x400U == 
                                         (0xfffc00U 
                                          & D__DOT____Vcellinp__NM1__M_result))) 
                                     | (0x200U == (0xfffe00U 
                                                   & D__DOT____Vcellinp__NM1__M_result))) 
                                    | (0x100U == (0xffff00U 
                                                  & D__DOT____Vcellinp__NM1__M_result)))
                                    ? ((0x8000U == 
                                        (0xff8000U 
                                         & D__DOT____Vcellinp__NM1__M_result))
                                        ? 8U : ((0x4000U 
                                                 == 
                                                 (0xffc000U 
                                                  & D__DOT____Vcellinp__NM1__M_result))
                                                 ? 9U
                                                 : 
                                                ((0x2000U 
                                                  == 
                                                  (0xffe000U 
                                                   & D__DOT____Vcellinp__NM1__M_result))
                                                  ? 0xaU
                                                  : 
                                                 ((0x1000U 
                                                   == 
                                                   (0xfff000U 
                                                    & D__DOT____Vcellinp__NM1__M_result))
                                                   ? 0xbU
                                                   : 
                                                  ((0x800U 
                                                    == 
                                                    (0xfff800U 
                                                     & D__DOT____Vcellinp__NM1__M_result))
                                                    ? 0xcU
                                                    : 
                                                   ((0x400U 
                                                     == 
                                                     (0xfffc00U 
                                                      & D__DOT____Vcellinp__NM1__M_result))
                                                     ? 0xdU
                                                     : 
                                                    ((0x200U 
                                                      == 
                                                      (0xfffe00U 
                                                       & D__DOT____Vcellinp__NM1__M_result))
                                                      ? 0xeU
                                                      : 0xfU)))))))
                                    : (((((((((0x80U 
                                               == (0xffff80U 
                                                   & D__DOT____Vcellinp__NM1__M_result)) 
                                              | (0x40U 
                                                 == 
                                                 (0xffffc0U 
                                                  & D__DOT____Vcellinp__NM1__M_result))) 
                                             | (0x20U 
                                                == 
                                                (0xffffe0U 
                                                 & D__DOT____Vcellinp__NM1__M_result))) 
                                            | (0x110U 
                                               == (0xfffff0U 
                                                   & D__DOT____Vcellinp__NM1__M_result))) 
                                           | (8U == 
                                              (0xfffff8U 
                                               & D__DOT____Vcellinp__NM1__M_result))) 
                                          | (4U == 
                                             (0xfffffcU 
                                              & D__DOT____Vcellinp__NM1__M_result))) 
                                         | (2U == (0xfffffeU 
                                                   & D__DOT____Vcellinp__NM1__M_result))) 
                                        | (1U == D__DOT____Vcellinp__NM1__M_result))
                                        ? ((0x80U == 
                                            (0xffff80U 
                                             & D__DOT____Vcellinp__NM1__M_result))
                                            ? 0x10U
                                            : ((0x40U 
                                                == 
                                                (0xffffc0U 
                                                 & D__DOT____Vcellinp__NM1__M_result))
                                                ? 0x11U
                                                : (
                                                   (0x20U 
                                                    == 
                                                    (0xffffe0U 
                                                     & D__DOT____Vcellinp__NM1__M_result))
                                                    ? 0x12U
                                                    : 
                                                   ((0x110U 
                                                     == 
                                                     (0xfffff0U 
                                                      & D__DOT____Vcellinp__NM1__M_result))
                                                     ? 0x13U
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0xfffff8U 
                                                       & D__DOT____Vcellinp__NM1__M_result))
                                                      ? 0x14U
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (0xfffffcU 
                                                        & D__DOT____Vcellinp__NM1__M_result))
                                                       ? 0x15U
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (0xfffffeU 
                                                         & D__DOT____Vcellinp__NM1__M_result))
                                                        ? 0x16U
                                                        : 0x17U)))))))
                                        : 0U)));
    vlSelf->Exception = ((IData)(__PVT__M08__DOT__w1) 
                         | (IData)(__PVT__M08__DOT__w2));
    vlSelf->M__DOT__ADD01__DOT____Vcellout__ADD01__sum 
        = ((8U & (IData)(vlSelf->M__DOT__ADD01__DOT____Vcellout__ADD01__sum)) 
           | ((((IData)(__PVT__M__DOT__ADD01__DOT__ADD01__DOT__p2) 
                ^ ((IData)(__PVT__M__DOT__ADD01__DOT__ADD01__DOT__g1) 
                   | ((IData)(__PVT__M__DOT__ADD01__DOT__ADD01__DOT__p1) 
                      & (IData)(__PVT__M__DOT__ADD01__DOT__ADD01__DOT__g0)))) 
               << 2U) | ((((IData)(__PVT__M__DOT__ADD01__DOT__ADD01__DOT__p1) 
                           ^ (IData)(__PVT__M__DOT__ADD01__DOT__ADD01__DOT__g0)) 
                          << 1U) | (1U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                           ^ vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out) 
                                          >> 0x17U)))));
    vlSelf->M__DOT__ADD01__DOT____Vcellout__ADD01__sum 
        = ((7U & (IData)(vlSelf->M__DOT__ADD01__DOT____Vcellout__ADD01__sum)) 
           | (((IData)(__PVT__M__DOT__ADD01__DOT__ADD01__DOT__p3) 
               ^ (((IData)(__PVT__M__DOT__ADD01__DOT__ADD01__DOT__g2) 
                   | ((IData)(__PVT__M__DOT__ADD01__DOT__ADD01__DOT__p2) 
                      & (IData)(__PVT__M__DOT__ADD01__DOT__ADD01__DOT__g1))) 
                  | (((IData)(__PVT__M__DOT__ADD01__DOT__ADD01__DOT__p2) 
                      & (IData)(__PVT__M__DOT__ADD01__DOT__ADD01__DOT__p1)) 
                     & (IData)(__PVT__M__DOT__ADD01__DOT__ADD01__DOT__g0)))) 
              << 3U));
    __PVT__M__DOT__ADD01__DOT__ctemp = (1U & (((((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                  & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out) 
                                                 >> 0x1aU) 
                                                | ((IData)(__PVT__M__DOT__ADD01__DOT__ADD01__DOT__p3) 
                                                   & (IData)(__PVT__M__DOT__ADD01__DOT__ADD01__DOT__g2))) 
                                               | (((IData)(__PVT__M__DOT__ADD01__DOT__ADD01__DOT__p3) 
                                                   & (IData)(__PVT__M__DOT__ADD01__DOT__ADD01__DOT__p2)) 
                                                  & (IData)(__PVT__M__DOT__ADD01__DOT__ADD01__DOT__g1))) 
                                              | ((((IData)(__PVT__M__DOT__ADD01__DOT__ADD01__DOT__p3) 
                                                   & (IData)(__PVT__M__DOT__ADD01__DOT__ADD01__DOT__p2)) 
                                                  & (IData)(__PVT__M__DOT__ADD01__DOT__ADD01__DOT__p1)) 
                                                 & (IData)(__PVT__M__DOT__ADD01__DOT__ADD01__DOT__g0))));
    if (((((((((0x800000U == (0x800000U & D__DOT____Vcellinp__NM2__M_result)) 
               | (0x400000U == (0xc00000U & D__DOT____Vcellinp__NM2__M_result))) 
              | (0x200000U == (0xe00000U & D__DOT____Vcellinp__NM2__M_result))) 
             | (0x100000U == (0xf00000U & D__DOT____Vcellinp__NM2__M_result))) 
            | (0x80000U == (0xf80000U & D__DOT____Vcellinp__NM2__M_result))) 
           | (0x40000U == (0xfc0000U & D__DOT____Vcellinp__NM2__M_result))) 
          | (0x20000U == (0xfe0000U & D__DOT____Vcellinp__NM2__M_result))) 
         | (0x10000U == (0xff0000U & D__DOT____Vcellinp__NM2__M_result)))) {
        if ((0x800000U == (0x800000U & D__DOT____Vcellinp__NM2__M_result))) {
            vlSelf->__PVT__D__DOT__normalized_M2 = 
                (0x7fffffU & D__DOT____Vcellinp__NM2__M_result);
        } else if ((0x400000U == (0xc00000U & D__DOT____Vcellinp__NM2__M_result))) {
            vlSelf->__PVT__D__DOT__NM2__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM2__M_result 
                                << 1U));
            vlSelf->__PVT__D__DOT__normalized_M2 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM2__DOT__M_temp);
        } else if ((0x200000U == (0xe00000U & D__DOT____Vcellinp__NM2__M_result))) {
            vlSelf->__PVT__D__DOT__NM2__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM2__M_result 
                                << 2U));
            vlSelf->__PVT__D__DOT__normalized_M2 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM2__DOT__M_temp);
        } else if ((0x100000U == (0xf00000U & D__DOT____Vcellinp__NM2__M_result))) {
            vlSelf->__PVT__D__DOT__NM2__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM2__M_result 
                                << 3U));
            vlSelf->__PVT__D__DOT__normalized_M2 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM2__DOT__M_temp);
        } else if ((0x80000U == (0xf80000U & D__DOT____Vcellinp__NM2__M_result))) {
            vlSelf->__PVT__D__DOT__NM2__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM2__M_result 
                                << 4U));
            vlSelf->__PVT__D__DOT__normalized_M2 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM2__DOT__M_temp);
        } else if ((0x40000U == (0xfc0000U & D__DOT____Vcellinp__NM2__M_result))) {
            vlSelf->__PVT__D__DOT__NM2__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM2__M_result 
                                << 5U));
            vlSelf->__PVT__D__DOT__normalized_M2 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM2__DOT__M_temp);
        } else if ((0x20000U == (0xfe0000U & D__DOT____Vcellinp__NM2__M_result))) {
            vlSelf->__PVT__D__DOT__NM2__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM2__M_result 
                                << 6U));
            vlSelf->__PVT__D__DOT__normalized_M2 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM2__DOT__M_temp);
        } else {
            vlSelf->__PVT__D__DOT__NM2__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM2__M_result 
                                << 7U));
            vlSelf->__PVT__D__DOT__normalized_M2 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM2__DOT__M_temp);
        }
    } else if (((((((((0x8000U == (0xff8000U & D__DOT____Vcellinp__NM2__M_result)) 
                      | (0x4000U == (0xffc000U & D__DOT____Vcellinp__NM2__M_result))) 
                     | (0x2000U == (0xffe000U & D__DOT____Vcellinp__NM2__M_result))) 
                    | (0x1000U == (0xfff000U & D__DOT____Vcellinp__NM2__M_result))) 
                   | (0x800U == (0xfff800U & D__DOT____Vcellinp__NM2__M_result))) 
                  | (0x400U == (0xfffc00U & D__DOT____Vcellinp__NM2__M_result))) 
                 | (0x200U == (0xfffe00U & D__DOT____Vcellinp__NM2__M_result))) 
                | (0x100U == (0xffff00U & D__DOT____Vcellinp__NM2__M_result)))) {
        if ((0x8000U == (0xff8000U & D__DOT____Vcellinp__NM2__M_result))) {
            vlSelf->__PVT__D__DOT__NM2__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM2__M_result 
                                << 8U));
            vlSelf->__PVT__D__DOT__normalized_M2 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM2__DOT__M_temp);
        } else if ((0x4000U == (0xffc000U & D__DOT____Vcellinp__NM2__M_result))) {
            vlSelf->__PVT__D__DOT__NM2__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM2__M_result 
                                << 9U));
            vlSelf->__PVT__D__DOT__normalized_M2 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM2__DOT__M_temp);
        } else if ((0x2000U == (0xffe000U & D__DOT____Vcellinp__NM2__M_result))) {
            vlSelf->__PVT__D__DOT__NM2__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM2__M_result 
                                << 0xaU));
            vlSelf->__PVT__D__DOT__normalized_M2 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM2__DOT__M_temp);
        } else if ((0x1000U == (0xfff000U & D__DOT____Vcellinp__NM2__M_result))) {
            vlSelf->__PVT__D__DOT__NM2__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM2__M_result 
                                << 0xbU));
            vlSelf->__PVT__D__DOT__normalized_M2 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM2__DOT__M_temp);
        } else if ((0x800U == (0xfff800U & D__DOT____Vcellinp__NM2__M_result))) {
            vlSelf->__PVT__D__DOT__NM2__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM2__M_result 
                                << 0xcU));
            vlSelf->__PVT__D__DOT__normalized_M2 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM2__DOT__M_temp);
        } else if ((0x400U == (0xfffc00U & D__DOT____Vcellinp__NM2__M_result))) {
            vlSelf->__PVT__D__DOT__NM2__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM2__M_result 
                                << 0xdU));
            vlSelf->__PVT__D__DOT__normalized_M2 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM2__DOT__M_temp);
        } else if ((0x200U == (0xfffe00U & D__DOT____Vcellinp__NM2__M_result))) {
            vlSelf->__PVT__D__DOT__NM2__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM2__M_result 
                                << 0xeU));
            vlSelf->__PVT__D__DOT__normalized_M2 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM2__DOT__M_temp);
        } else {
            vlSelf->__PVT__D__DOT__NM2__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM2__M_result 
                                << 0xfU));
            vlSelf->__PVT__D__DOT__normalized_M2 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM2__DOT__M_temp);
        }
    } else if (((((((((0x80U == (0xffff80U & D__DOT____Vcellinp__NM2__M_result)) 
                      | (0x40U == (0xffffc0U & D__DOT____Vcellinp__NM2__M_result))) 
                     | (0x20U == (0xffffe0U & D__DOT____Vcellinp__NM2__M_result))) 
                    | (0x110U == (0xfffff0U & D__DOT____Vcellinp__NM2__M_result))) 
                   | (8U == (0xfffff8U & D__DOT____Vcellinp__NM2__M_result))) 
                  | (4U == (0xfffffcU & D__DOT____Vcellinp__NM2__M_result))) 
                 | (2U == (0xfffffeU & D__DOT____Vcellinp__NM2__M_result))) 
                | (1U == D__DOT____Vcellinp__NM2__M_result))) {
        if ((0x80U == (0xffff80U & D__DOT____Vcellinp__NM2__M_result))) {
            vlSelf->__PVT__D__DOT__NM2__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM2__M_result 
                                << 0x10U));
            vlSelf->__PVT__D__DOT__normalized_M2 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM2__DOT__M_temp);
        } else if ((0x40U == (0xffffc0U & D__DOT____Vcellinp__NM2__M_result))) {
            vlSelf->__PVT__D__DOT__NM2__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM2__M_result 
                                << 0x11U));
            vlSelf->__PVT__D__DOT__normalized_M2 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM2__DOT__M_temp);
        } else if ((0x20U == (0xffffe0U & D__DOT____Vcellinp__NM2__M_result))) {
            vlSelf->__PVT__D__DOT__NM2__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM2__M_result 
                                << 0x12U));
            vlSelf->__PVT__D__DOT__normalized_M2 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM2__DOT__M_temp);
        } else if ((0x110U == (0xfffff0U & D__DOT____Vcellinp__NM2__M_result))) {
            vlSelf->__PVT__D__DOT__NM2__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM2__M_result 
                                << 0x13U));
            vlSelf->__PVT__D__DOT__normalized_M2 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM2__DOT__M_temp);
        } else if ((8U == (0xfffff8U & D__DOT____Vcellinp__NM2__M_result))) {
            vlSelf->__PVT__D__DOT__NM2__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM2__M_result 
                                << 0x14U));
            vlSelf->__PVT__D__DOT__normalized_M2 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM2__DOT__M_temp);
        } else if ((4U == (0xfffffcU & D__DOT____Vcellinp__NM2__M_result))) {
            vlSelf->__PVT__D__DOT__NM2__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM2__M_result 
                                << 0x15U));
            vlSelf->__PVT__D__DOT__normalized_M2 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM2__DOT__M_temp);
        } else if ((2U == (0xfffffeU & D__DOT____Vcellinp__NM2__M_result))) {
            vlSelf->__PVT__D__DOT__NM2__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM2__M_result 
                                << 0x16U));
            vlSelf->__PVT__D__DOT__normalized_M2 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM2__DOT__M_temp);
        } else {
            vlSelf->__PVT__D__DOT__NM2__DOT__M_temp 
                = (0xffffffU & (D__DOT____Vcellinp__NM2__M_result 
                                << 0x17U));
            vlSelf->__PVT__D__DOT__normalized_M2 = 
                (0x7fffffU & vlSelf->__PVT__D__DOT__NM2__DOT__M_temp);
        }
    } else {
        vlSelf->__PVT__D__DOT__normalized_M2 = 0U;
    }
    __PVT__D__DOT__shift_E2 = (((((((((0x800000U == 
                                       (0x800000U & D__DOT____Vcellinp__NM2__M_result)) 
                                      | (0x400000U 
                                         == (0xc00000U 
                                             & D__DOT____Vcellinp__NM2__M_result))) 
                                     | (0x200000U == 
                                        (0xe00000U 
                                         & D__DOT____Vcellinp__NM2__M_result))) 
                                    | (0x100000U == 
                                       (0xf00000U & D__DOT____Vcellinp__NM2__M_result))) 
                                   | (0x80000U == (0xf80000U 
                                                   & D__DOT____Vcellinp__NM2__M_result))) 
                                  | (0x40000U == (0xfc0000U 
                                                  & D__DOT____Vcellinp__NM2__M_result))) 
                                 | (0x20000U == (0xfe0000U 
                                                 & D__DOT____Vcellinp__NM2__M_result))) 
                                | (0x10000U == (0xff0000U 
                                                & D__DOT____Vcellinp__NM2__M_result)))
                                ? ((0x800000U == (0x800000U 
                                                  & D__DOT____Vcellinp__NM2__M_result))
                                    ? 0U : ((0x400000U 
                                             == (0xc00000U 
                                                 & D__DOT____Vcellinp__NM2__M_result))
                                             ? 1U : 
                                            ((0x200000U 
                                              == (0xe00000U 
                                                  & D__DOT____Vcellinp__NM2__M_result))
                                              ? 2U : 
                                             ((0x100000U 
                                               == (0xf00000U 
                                                   & D__DOT____Vcellinp__NM2__M_result))
                                               ? 3U
                                               : ((0x80000U 
                                                   == 
                                                   (0xf80000U 
                                                    & D__DOT____Vcellinp__NM2__M_result))
                                                   ? 4U
                                                   : 
                                                  ((0x40000U 
                                                    == 
                                                    (0xfc0000U 
                                                     & D__DOT____Vcellinp__NM2__M_result))
                                                    ? 5U
                                                    : 
                                                   ((0x20000U 
                                                     == 
                                                     (0xfe0000U 
                                                      & D__DOT____Vcellinp__NM2__M_result))
                                                     ? 6U
                                                     : 7U)))))))
                                : (((((((((0x8000U 
                                           == (0xff8000U 
                                               & D__DOT____Vcellinp__NM2__M_result)) 
                                          | (0x4000U 
                                             == (0xffc000U 
                                                 & D__DOT____Vcellinp__NM2__M_result))) 
                                         | (0x2000U 
                                            == (0xffe000U 
                                                & D__DOT____Vcellinp__NM2__M_result))) 
                                        | (0x1000U 
                                           == (0xfff000U 
                                               & D__DOT____Vcellinp__NM2__M_result))) 
                                       | (0x800U == 
                                          (0xfff800U 
                                           & D__DOT____Vcellinp__NM2__M_result))) 
                                      | (0x400U == 
                                         (0xfffc00U 
                                          & D__DOT____Vcellinp__NM2__M_result))) 
                                     | (0x200U == (0xfffe00U 
                                                   & D__DOT____Vcellinp__NM2__M_result))) 
                                    | (0x100U == (0xffff00U 
                                                  & D__DOT____Vcellinp__NM2__M_result)))
                                    ? ((0x8000U == 
                                        (0xff8000U 
                                         & D__DOT____Vcellinp__NM2__M_result))
                                        ? 8U : ((0x4000U 
                                                 == 
                                                 (0xffc000U 
                                                  & D__DOT____Vcellinp__NM2__M_result))
                                                 ? 9U
                                                 : 
                                                ((0x2000U 
                                                  == 
                                                  (0xffe000U 
                                                   & D__DOT____Vcellinp__NM2__M_result))
                                                  ? 0xaU
                                                  : 
                                                 ((0x1000U 
                                                   == 
                                                   (0xfff000U 
                                                    & D__DOT____Vcellinp__NM2__M_result))
                                                   ? 0xbU
                                                   : 
                                                  ((0x800U 
                                                    == 
                                                    (0xfff800U 
                                                     & D__DOT____Vcellinp__NM2__M_result))
                                                    ? 0xcU
                                                    : 
                                                   ((0x400U 
                                                     == 
                                                     (0xfffc00U 
                                                      & D__DOT____Vcellinp__NM2__M_result))
                                                     ? 0xdU
                                                     : 
                                                    ((0x200U 
                                                      == 
                                                      (0xfffe00U 
                                                       & D__DOT____Vcellinp__NM2__M_result))
                                                      ? 0xeU
                                                      : 0xfU)))))))
                                    : (((((((((0x80U 
                                               == (0xffff80U 
                                                   & D__DOT____Vcellinp__NM2__M_result)) 
                                              | (0x40U 
                                                 == 
                                                 (0xffffc0U 
                                                  & D__DOT____Vcellinp__NM2__M_result))) 
                                             | (0x20U 
                                                == 
                                                (0xffffe0U 
                                                 & D__DOT____Vcellinp__NM2__M_result))) 
                                            | (0x110U 
                                               == (0xfffff0U 
                                                   & D__DOT____Vcellinp__NM2__M_result))) 
                                           | (8U == 
                                              (0xfffff8U 
                                               & D__DOT____Vcellinp__NM2__M_result))) 
                                          | (4U == 
                                             (0xfffffcU 
                                              & D__DOT____Vcellinp__NM2__M_result))) 
                                         | (2U == (0xfffffeU 
                                                   & D__DOT____Vcellinp__NM2__M_result))) 
                                        | (1U == D__DOT____Vcellinp__NM2__M_result))
                                        ? ((0x80U == 
                                            (0xffff80U 
                                             & D__DOT____Vcellinp__NM2__M_result))
                                            ? 0x10U
                                            : ((0x40U 
                                                == 
                                                (0xffffc0U 
                                                 & D__DOT____Vcellinp__NM2__M_result))
                                                ? 0x11U
                                                : (
                                                   (0x20U 
                                                    == 
                                                    (0xffffe0U 
                                                     & D__DOT____Vcellinp__NM2__M_result))
                                                    ? 0x12U
                                                    : 
                                                   ((0x110U 
                                                     == 
                                                     (0xfffff0U 
                                                      & D__DOT____Vcellinp__NM2__M_result))
                                                     ? 0x13U
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0xfffff8U 
                                                       & D__DOT____Vcellinp__NM2__M_result))
                                                      ? 0x14U
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (0xfffffcU 
                                                        & D__DOT____Vcellinp__NM2__M_result))
                                                       ? 0x15U
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (0xfffffeU 
                                                         & D__DOT____Vcellinp__NM2__M_result))
                                                        ? 0x16U
                                                        : 0x17U)))))))
                                        : 0U)));
    __PVT__M__DOT__M01__DOT__w1 = (1U & (((((0xffffU 
                                             & ((IData)(vlSelf->__PVT__M__DOT__M_mul_result) 
                                                >> 7U)) 
                                            | ((0x1ffffU 
                                                & ((IData)(vlSelf->__PVT__M__DOT__M_mul_result) 
                                                   >> 6U)) 
                                               | ((0x3ffffU 
                                                   & ((IData)(vlSelf->__PVT__M__DOT__M_mul_result) 
                                                      >> 5U)) 
                                                  | ((0x7ffffU 
                                                      & ((IData)(vlSelf->__PVT__M__DOT__M_mul_result) 
                                                         >> 4U)) 
                                                     | ((0xfffffU 
                                                         & ((IData)(vlSelf->__PVT__M__DOT__M_mul_result) 
                                                            >> 3U)) 
                                                        | ((0x1fffffU 
                                                            & ((IData)(vlSelf->__PVT__M__DOT__M_mul_result) 
                                                               >> 2U)) 
                                                           | ((0x3fffffU 
                                                               & ((IData)(vlSelf->__PVT__M__DOT__M_mul_result) 
                                                                  >> 1U)) 
                                                              | (0x7fffffU 
                                                                 & (IData)(vlSelf->__PVT__M__DOT__M_mul_result))))))))) 
                                           | ((0xffU 
                                               & ((IData)(vlSelf->__PVT__M__DOT__M_mul_result) 
                                                  >> 0xfU)) 
                                              | ((0x1ffU 
                                                  & ((IData)(vlSelf->__PVT__M__DOT__M_mul_result) 
                                                     >> 0xeU)) 
                                                 | ((0x3ffU 
                                                     & ((IData)(vlSelf->__PVT__M__DOT__M_mul_result) 
                                                        >> 0xdU)) 
                                                    | ((0x7ffU 
                                                        & ((IData)(vlSelf->__PVT__M__DOT__M_mul_result) 
                                                           >> 0xcU)) 
                                                       | ((0xfffU 
                                                           & ((IData)(vlSelf->__PVT__M__DOT__M_mul_result) 
                                                              >> 0xbU)) 
                                                          | ((0x1fffU 
                                                              & ((IData)(vlSelf->__PVT__M__DOT__M_mul_result) 
                                                                 >> 0xaU)) 
                                                             | ((0x3fffU 
                                                                 & ((IData)(vlSelf->__PVT__M__DOT__M_mul_result) 
                                                                    >> 9U)) 
                                                                | (0x7fffU 
                                                                   & ((IData)(vlSelf->__PVT__M__DOT__M_mul_result) 
                                                                      >> 8U)))))))))) 
                                          | ((1U & 
                                              ((IData)(vlSelf->__PVT__M__DOT__M_mul_result) 
                                               >> 0x16U)) 
                                             | ((3U 
                                                 & ((IData)(vlSelf->__PVT__M__DOT__M_mul_result) 
                                                    >> 0x15U)) 
                                                | ((7U 
                                                    & ((IData)(vlSelf->__PVT__M__DOT__M_mul_result) 
                                                       >> 0x14U)) 
                                                   | ((0xfU 
                                                       & ((IData)(vlSelf->__PVT__M__DOT__M_mul_result) 
                                                          >> 0x13U)) 
                                                      | ((0x1fU 
                                                          & ((IData)(vlSelf->__PVT__M__DOT__M_mul_result) 
                                                             >> 0x12U)) 
                                                         | ((0x3fU 
                                                             & ((IData)(vlSelf->__PVT__M__DOT__M_mul_result) 
                                                                >> 0x11U)) 
                                                            | (0x7fU 
                                                               & ((IData)(vlSelf->__PVT__M__DOT__M_mul_result) 
                                                                  >> 0x10U))))))))) 
                                         & (~ (IData)(
                                                      (vlSelf->__PVT__M__DOT__M_mul_result 
                                                       >> 0x2fU)))));
    __PVT__M__DOT__M01__DOT__w2 = (1U & ((IData)((0ULL 
                                                  != 
                                                  (0xffffffULL 
                                                   & vlSelf->__PVT__M__DOT__M_mul_result))) 
                                         & (IData)(
                                                   (vlSelf->__PVT__M__DOT__M_mul_result 
                                                    >> 0x2fU))));
    __PVT__D__DOT__ADD01__DOT__ADD02__DOT__g0 = (1U 
                                                 & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                     >> 0x1bU) 
                                                    & ((IData)(vlSelf->__PVT__D__DOT__complemented_E2) 
                                                       >> 4U)));
    __PVT__D__DOT__ADD01__DOT__ADD02__DOT__g1 = (1U 
                                                 & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                     >> 0x1cU) 
                                                    & ((IData)(vlSelf->__PVT__D__DOT__complemented_E2) 
                                                       >> 5U)));
    __PVT__D__DOT__ADD01__DOT__ADD02__DOT__p0 = (1U 
                                                 & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                     >> 0x1bU) 
                                                    ^ 
                                                    ((IData)(vlSelf->__PVT__D__DOT__complemented_E2) 
                                                     >> 4U)));
    __PVT__D__DOT__ADD01__DOT__ADD02__DOT__p1 = (1U 
                                                 & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                     >> 0x1cU) 
                                                    ^ 
                                                    ((IData)(vlSelf->__PVT__D__DOT__complemented_E2) 
                                                     >> 5U)));
    __PVT__D__DOT__ADD01__DOT__ADD02__DOT__p2 = (1U 
                                                 & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                     >> 0x1dU) 
                                                    ^ 
                                                    ((IData)(vlSelf->__PVT__D__DOT__complemented_E2) 
                                                     >> 6U)));
    __PVT__D__DOT__ADD01__DOT__ADD01__DOT__g2 = (1U 
                                                 & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                     >> 0x19U) 
                                                    & ((IData)(vlSelf->__PVT__D__DOT__complemented_E2) 
                                                       >> 2U)));
    __PVT__D__DOT__ADD01__DOT__ADD01__DOT__p3 = (1U 
                                                 & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                     >> 0x1aU) 
                                                    ^ 
                                                    ((IData)(vlSelf->__PVT__D__DOT__complemented_E2) 
                                                     >> 3U)));
    __PVT__D__DOT__ADD01__DOT__ADD01__DOT__g0 = (1U 
                                                 & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                     >> 0x17U) 
                                                    & (IData)(vlSelf->__PVT__D__DOT__complemented_E2)));
    __PVT__D__DOT__ADD01__DOT__ADD01__DOT__g1 = (1U 
                                                 & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                     >> 0x18U) 
                                                    & ((IData)(vlSelf->__PVT__D__DOT__complemented_E2) 
                                                       >> 1U)));
    __PVT__D__DOT__ADD01__DOT__ADD01__DOT__p0 = (1U 
                                                 & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                     >> 0x17U) 
                                                    ^ (IData)(vlSelf->__PVT__D__DOT__complemented_E2)));
    __PVT__D__DOT__ADD01__DOT__ADD01__DOT__p1 = (1U 
                                                 & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                     >> 0x18U) 
                                                    ^ 
                                                    ((IData)(vlSelf->__PVT__D__DOT__complemented_E2) 
                                                     >> 1U)));
    __PVT__D__DOT__ADD01__DOT__ADD01__DOT__p2 = (1U 
                                                 & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                     >> 0x19U) 
                                                    ^ 
                                                    ((IData)(vlSelf->__PVT__D__DOT__complemented_E2) 
                                                     >> 2U)));
    __PVT__AS__DOT__ADD01__DOT__ADD02__DOT__g2 = (1U 
                                                  & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                      >> 0x1dU) 
                                                     & ((IData)(vlSelf->__PVT__AS__DOT__complemented_E2) 
                                                        >> 6U)));
    __PVT__AS__DOT__ADD01__DOT__ADD02__DOT__p3 = (1U 
                                                  & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                      >> 0x1eU) 
                                                     ^ 
                                                     ((IData)(vlSelf->__PVT__AS__DOT__complemented_E2) 
                                                      >> 7U)));
    __PVT__AS__DOT__ADD01__DOT__ADD02__DOT__g0 = (1U 
                                                  & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                      >> 0x1bU) 
                                                     & ((IData)(vlSelf->__PVT__AS__DOT__complemented_E2) 
                                                        >> 4U)));
    __PVT__AS__DOT__ADD01__DOT__ADD02__DOT__g1 = (1U 
                                                  & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                      >> 0x1cU) 
                                                     & ((IData)(vlSelf->__PVT__AS__DOT__complemented_E2) 
                                                        >> 5U)));
    __PVT__AS__DOT__ADD01__DOT__ADD02__DOT__p0 = (1U 
                                                  & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                      >> 0x1bU) 
                                                     ^ 
                                                     ((IData)(vlSelf->__PVT__AS__DOT__complemented_E2) 
                                                      >> 4U)));
    __PVT__AS__DOT__ADD01__DOT__ADD02__DOT__p1 = (1U 
                                                  & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                      >> 0x1cU) 
                                                     ^ 
                                                     ((IData)(vlSelf->__PVT__AS__DOT__complemented_E2) 
                                                      >> 5U)));
    __PVT__AS__DOT__ADD01__DOT__ADD02__DOT__p2 = (1U 
                                                  & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                      >> 0x1dU) 
                                                     ^ 
                                                     ((IData)(vlSelf->__PVT__AS__DOT__complemented_E2) 
                                                      >> 6U)));
    __PVT__AS__DOT__ADD01__DOT__ADD01__DOT__g2 = (1U 
                                                  & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                      >> 0x19U) 
                                                     & ((IData)(vlSelf->__PVT__AS__DOT__complemented_E2) 
                                                        >> 2U)));
    __PVT__AS__DOT__ADD01__DOT__ADD01__DOT__p3 = (1U 
                                                  & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                      >> 0x1aU) 
                                                     ^ 
                                                     ((IData)(vlSelf->__PVT__AS__DOT__complemented_E2) 
                                                      >> 3U)));
    __PVT__AS__DOT__ADD01__DOT__ADD01__DOT__g0 = (1U 
                                                  & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                      >> 0x17U) 
                                                     & (IData)(vlSelf->__PVT__AS__DOT__complemented_E2)));
    __PVT__AS__DOT__ADD01__DOT__ADD01__DOT__g1 = (1U 
                                                  & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->__PVT__AS__DOT__complemented_E2) 
                                                        >> 1U)));
    __PVT__AS__DOT__ADD01__DOT__ADD01__DOT__p0 = (1U 
                                                  & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                      >> 0x17U) 
                                                     ^ (IData)(vlSelf->__PVT__AS__DOT__complemented_E2)));
    __PVT__AS__DOT__ADD01__DOT__ADD01__DOT__p1 = (1U 
                                                  & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                      >> 0x18U) 
                                                     ^ 
                                                     ((IData)(vlSelf->__PVT__AS__DOT__complemented_E2) 
                                                      >> 1U)));
    __PVT__AS__DOT__ADD01__DOT__ADD01__DOT__p2 = (1U 
                                                  & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                      >> 0x19U) 
                                                     ^ 
                                                     ((IData)(vlSelf->__PVT__AS__DOT__complemented_E2) 
                                                      >> 2U)));
    vlSelf->__PVT__D__DOT__complemented_shift_E1 = 
        ((0xfcU & (IData)(vlSelf->__PVT__D__DOT__complemented_shift_E1)) 
         | ((2U & ((~ ((IData)(__PVT__D__DOT__shift_E1) 
                       >> 1U)) << 1U)) | (1U & (~ (IData)(__PVT__D__DOT__shift_E1)))));
    vlSelf->__PVT__D__DOT__complemented_shift_E1 = 
        ((0xf3U & (IData)(vlSelf->__PVT__D__DOT__complemented_shift_E1)) 
         | ((8U & ((~ ((IData)(__PVT__D__DOT__shift_E1) 
                       >> 3U)) << 3U)) | (4U & ((~ 
                                                 ((IData)(__PVT__D__DOT__shift_E1) 
                                                  >> 2U)) 
                                                << 2U))));
    vlSelf->__PVT__D__DOT__complemented_shift_E1 = 
        ((0xcfU & (IData)(vlSelf->__PVT__D__DOT__complemented_shift_E1)) 
         | ((0x20U & ((~ ((IData)(__PVT__D__DOT__shift_E1) 
                          >> 5U)) << 5U)) | (0x10U 
                                             & ((~ 
                                                 ((IData)(__PVT__D__DOT__shift_E1) 
                                                  >> 4U)) 
                                                << 4U))));
    vlSelf->__PVT__D__DOT__complemented_shift_E1 = 
        ((0x3fU & (IData)(vlSelf->__PVT__D__DOT__complemented_shift_E1)) 
         | ((0x80U & ((~ ((IData)(__PVT__D__DOT__shift_E1) 
                          >> 7U)) << 7U)) | (0x40U 
                                             & ((~ 
                                                 ((IData)(__PVT__D__DOT__shift_E1) 
                                                  >> 6U)) 
                                                << 6U))));
    vlSelf->M__DOT__ADD01__DOT____Vcellout__ADD02__sum 
        = ((8U & (IData)(vlSelf->M__DOT__ADD01__DOT____Vcellout__ADD02__sum)) 
           | ((((IData)(__PVT__M__DOT__ADD01__DOT__ADD02__DOT__p2) 
                ^ (((IData)(__PVT__M__DOT__ADD01__DOT__ADD02__DOT__g1) 
                    | ((IData)(__PVT__M__DOT__ADD01__DOT__ADD02__DOT__p1) 
                       & (IData)(__PVT__M__DOT__ADD01__DOT__ADD02__DOT__g0))) 
                   | (((IData)(__PVT__M__DOT__ADD01__DOT__ADD02__DOT__p1) 
                       & (IData)(__PVT__M__DOT__ADD01__DOT__ADD02__DOT__p0)) 
                      & (IData)(__PVT__M__DOT__ADD01__DOT__ctemp)))) 
               << 2U) | ((((IData)(__PVT__M__DOT__ADD01__DOT__ADD02__DOT__p1) 
                           ^ ((IData)(__PVT__M__DOT__ADD01__DOT__ADD02__DOT__g0) 
                              | ((IData)(__PVT__M__DOT__ADD01__DOT__ADD02__DOT__p0) 
                                 & (IData)(__PVT__M__DOT__ADD01__DOT__ctemp)))) 
                          << 1U) | ((IData)(__PVT__M__DOT__ADD01__DOT__ADD02__DOT__p0) 
                                    ^ (IData)(__PVT__M__DOT__ADD01__DOT__ctemp)))));
    vlSelf->M__DOT__ADD01__DOT____Vcellout__ADD02__sum 
        = ((7U & (IData)(vlSelf->M__DOT__ADD01__DOT____Vcellout__ADD02__sum)) 
           | (((IData)(__PVT__M__DOT__ADD01__DOT__ADD02__DOT__p3) 
               ^ ((((IData)(__PVT__M__DOT__ADD01__DOT__ADD02__DOT__g2) 
                    | ((IData)(__PVT__M__DOT__ADD01__DOT__ADD02__DOT__p2) 
                       & (IData)(__PVT__M__DOT__ADD01__DOT__ADD02__DOT__g1))) 
                   | (((IData)(__PVT__M__DOT__ADD01__DOT__ADD02__DOT__p2) 
                       & (IData)(__PVT__M__DOT__ADD01__DOT__ADD02__DOT__p1)) 
                      & (IData)(__PVT__M__DOT__ADD01__DOT__ADD02__DOT__g0))) 
                  | ((((IData)(__PVT__M__DOT__ADD01__DOT__ADD02__DOT__p2) 
                       & (IData)(__PVT__M__DOT__ADD01__DOT__ADD02__DOT__p1)) 
                      & (IData)(__PVT__M__DOT__ADD01__DOT__ADD02__DOT__p0)) 
                     & (IData)(__PVT__M__DOT__ADD01__DOT__ctemp)))) 
              << 3U));
    vlSelf->__PVT__D__DOT__DIV01__DOT__div_temp = (0xffffffffffffULL 
                                                   & VL_DIV_QQQ(48, 
                                                                (0x800000000000ULL 
                                                                 | ((QData)((IData)(vlSelf->__PVT__D__DOT__normalized_M1)) 
                                                                    << 0x18U)), (QData)((IData)(
                                                                                (0x800000U 
                                                                                | vlSelf->__PVT__D__DOT__normalized_M2)))));
    vlSelf->__PVT__M__DOT__final_product_round = ((IData)(__PVT__M__DOT__M01__DOT__w1) 
                                                  | (IData)(__PVT__M__DOT__M01__DOT__w2));
    vlSelf->D__DOT__ADD01__DOT____Vcellout__ADD01__sum 
        = ((8U & (IData)(vlSelf->D__DOT__ADD01__DOT____Vcellout__ADD01__sum)) 
           | ((((IData)(__PVT__D__DOT__ADD01__DOT__ADD01__DOT__p2) 
                ^ (((IData)(__PVT__D__DOT__ADD01__DOT__ADD01__DOT__g1) 
                    | ((IData)(__PVT__D__DOT__ADD01__DOT__ADD01__DOT__p1) 
                       & (IData)(__PVT__D__DOT__ADD01__DOT__ADD01__DOT__g0))) 
                   | ((IData)(__PVT__D__DOT__ADD01__DOT__ADD01__DOT__p1) 
                      & (IData)(__PVT__D__DOT__ADD01__DOT__ADD01__DOT__p0)))) 
               << 2U) | ((((IData)(__PVT__D__DOT__ADD01__DOT__ADD01__DOT__p1) 
                           ^ ((IData)(__PVT__D__DOT__ADD01__DOT__ADD01__DOT__g0) 
                              | (IData)(__PVT__D__DOT__ADD01__DOT__ADD01__DOT__p0))) 
                          << 1U) | (1U & (~ (IData)(__PVT__D__DOT__ADD01__DOT__ADD01__DOT__p0))))));
    vlSelf->D__DOT__ADD01__DOT____Vcellout__ADD01__sum 
        = ((7U & (IData)(vlSelf->D__DOT__ADD01__DOT____Vcellout__ADD01__sum)) 
           | (((IData)(__PVT__D__DOT__ADD01__DOT__ADD01__DOT__p3) 
               ^ ((((IData)(__PVT__D__DOT__ADD01__DOT__ADD01__DOT__g2) 
                    | ((IData)(__PVT__D__DOT__ADD01__DOT__ADD01__DOT__p2) 
                       & (IData)(__PVT__D__DOT__ADD01__DOT__ADD01__DOT__g1))) 
                   | (((IData)(__PVT__D__DOT__ADD01__DOT__ADD01__DOT__p2) 
                       & (IData)(__PVT__D__DOT__ADD01__DOT__ADD01__DOT__p1)) 
                      & (IData)(__PVT__D__DOT__ADD01__DOT__ADD01__DOT__g0))) 
                  | (((IData)(__PVT__D__DOT__ADD01__DOT__ADD01__DOT__p2) 
                      & (IData)(__PVT__D__DOT__ADD01__DOT__ADD01__DOT__p1)) 
                     & (IData)(__PVT__D__DOT__ADD01__DOT__ADD01__DOT__p0)))) 
              << 3U));
    __PVT__D__DOT__ADD01__DOT__ctemp = (1U & ((((((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                   >> 0x1aU) 
                                                  & ((IData)(vlSelf->__PVT__D__DOT__complemented_E2) 
                                                     >> 3U)) 
                                                 | ((IData)(__PVT__D__DOT__ADD01__DOT__ADD01__DOT__p3) 
                                                    & (IData)(__PVT__D__DOT__ADD01__DOT__ADD01__DOT__g2))) 
                                                | (((IData)(__PVT__D__DOT__ADD01__DOT__ADD01__DOT__p3) 
                                                    & (IData)(__PVT__D__DOT__ADD01__DOT__ADD01__DOT__p2)) 
                                                   & (IData)(__PVT__D__DOT__ADD01__DOT__ADD01__DOT__g1))) 
                                               | ((((IData)(__PVT__D__DOT__ADD01__DOT__ADD01__DOT__p3) 
                                                    & (IData)(__PVT__D__DOT__ADD01__DOT__ADD01__DOT__p2)) 
                                                   & (IData)(__PVT__D__DOT__ADD01__DOT__ADD01__DOT__p1)) 
                                                  & (IData)(__PVT__D__DOT__ADD01__DOT__ADD01__DOT__g0))) 
                                              | ((((IData)(__PVT__D__DOT__ADD01__DOT__ADD01__DOT__p3) 
                                                   & (IData)(__PVT__D__DOT__ADD01__DOT__ADD01__DOT__p2)) 
                                                  & (IData)(__PVT__D__DOT__ADD01__DOT__ADD01__DOT__p1)) 
                                                 & (IData)(__PVT__D__DOT__ADD01__DOT__ADD01__DOT__p0))));
    vlSelf->AS__DOT__ADD01__DOT____Vcellout__ADD01__sum 
        = ((8U & (IData)(vlSelf->AS__DOT__ADD01__DOT____Vcellout__ADD01__sum)) 
           | ((((IData)(__PVT__AS__DOT__ADD01__DOT__ADD01__DOT__p2) 
                ^ (((IData)(__PVT__AS__DOT__ADD01__DOT__ADD01__DOT__g1) 
                    | ((IData)(__PVT__AS__DOT__ADD01__DOT__ADD01__DOT__p1) 
                       & (IData)(__PVT__AS__DOT__ADD01__DOT__ADD01__DOT__g0))) 
                   | ((IData)(__PVT__AS__DOT__ADD01__DOT__ADD01__DOT__p1) 
                      & (IData)(__PVT__AS__DOT__ADD01__DOT__ADD01__DOT__p0)))) 
               << 2U) | ((((IData)(__PVT__AS__DOT__ADD01__DOT__ADD01__DOT__p1) 
                           ^ ((IData)(__PVT__AS__DOT__ADD01__DOT__ADD01__DOT__g0) 
                              | (IData)(__PVT__AS__DOT__ADD01__DOT__ADD01__DOT__p0))) 
                          << 1U) | (1U & (~ (IData)(__PVT__AS__DOT__ADD01__DOT__ADD01__DOT__p0))))));
    vlSelf->AS__DOT__ADD01__DOT____Vcellout__ADD01__sum 
        = ((7U & (IData)(vlSelf->AS__DOT__ADD01__DOT____Vcellout__ADD01__sum)) 
           | (((IData)(__PVT__AS__DOT__ADD01__DOT__ADD01__DOT__p3) 
               ^ ((((IData)(__PVT__AS__DOT__ADD01__DOT__ADD01__DOT__g2) 
                    | ((IData)(__PVT__AS__DOT__ADD01__DOT__ADD01__DOT__p2) 
                       & (IData)(__PVT__AS__DOT__ADD01__DOT__ADD01__DOT__g1))) 
                   | (((IData)(__PVT__AS__DOT__ADD01__DOT__ADD01__DOT__p2) 
                       & (IData)(__PVT__AS__DOT__ADD01__DOT__ADD01__DOT__p1)) 
                      & (IData)(__PVT__AS__DOT__ADD01__DOT__ADD01__DOT__g0))) 
                  | (((IData)(__PVT__AS__DOT__ADD01__DOT__ADD01__DOT__p2) 
                      & (IData)(__PVT__AS__DOT__ADD01__DOT__ADD01__DOT__p1)) 
                     & (IData)(__PVT__AS__DOT__ADD01__DOT__ADD01__DOT__p0)))) 
              << 3U));
    __PVT__AS__DOT__ADD01__DOT__ctemp = (1U & (((((
                                                   (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                    >> 0x1aU) 
                                                   & ((IData)(vlSelf->__PVT__AS__DOT__complemented_E2) 
                                                      >> 3U)) 
                                                  | ((IData)(__PVT__AS__DOT__ADD01__DOT__ADD01__DOT__p3) 
                                                     & (IData)(__PVT__AS__DOT__ADD01__DOT__ADD01__DOT__g2))) 
                                                 | (((IData)(__PVT__AS__DOT__ADD01__DOT__ADD01__DOT__p3) 
                                                     & (IData)(__PVT__AS__DOT__ADD01__DOT__ADD01__DOT__p2)) 
                                                    & (IData)(__PVT__AS__DOT__ADD01__DOT__ADD01__DOT__g1))) 
                                                | ((((IData)(__PVT__AS__DOT__ADD01__DOT__ADD01__DOT__p3) 
                                                     & (IData)(__PVT__AS__DOT__ADD01__DOT__ADD01__DOT__p2)) 
                                                    & (IData)(__PVT__AS__DOT__ADD01__DOT__ADD01__DOT__p1)) 
                                                   & (IData)(__PVT__AS__DOT__ADD01__DOT__ADD01__DOT__g0))) 
                                               | ((((IData)(__PVT__AS__DOT__ADD01__DOT__ADD01__DOT__p3) 
                                                    & (IData)(__PVT__AS__DOT__ADD01__DOT__ADD01__DOT__p2)) 
                                                   & (IData)(__PVT__AS__DOT__ADD01__DOT__ADD01__DOT__p1)) 
                                                  & (IData)(__PVT__AS__DOT__ADD01__DOT__ADD01__DOT__p0))));
    M__DOT____Vcellout__ADD01__sum = (((IData)(vlSelf->M__DOT__ADD01__DOT____Vcellout__ADD02__sum) 
                                       << 4U) | (IData)(vlSelf->M__DOT__ADD01__DOT____Vcellout__ADD01__sum));
    vlSelf->D__DOT__ADD01__DOT____Vcellout__ADD02__sum 
        = ((8U & (IData)(vlSelf->D__DOT__ADD01__DOT____Vcellout__ADD02__sum)) 
           | ((((IData)(__PVT__D__DOT__ADD01__DOT__ADD02__DOT__p2) 
                ^ (((IData)(__PVT__D__DOT__ADD01__DOT__ADD02__DOT__g1) 
                    | ((IData)(__PVT__D__DOT__ADD01__DOT__ADD02__DOT__p1) 
                       & (IData)(__PVT__D__DOT__ADD01__DOT__ADD02__DOT__g0))) 
                   | (((IData)(__PVT__D__DOT__ADD01__DOT__ADD02__DOT__p1) 
                       & (IData)(__PVT__D__DOT__ADD01__DOT__ADD02__DOT__p0)) 
                      & (IData)(__PVT__D__DOT__ADD01__DOT__ctemp)))) 
               << 2U) | ((((IData)(__PVT__D__DOT__ADD01__DOT__ADD02__DOT__p1) 
                           ^ ((IData)(__PVT__D__DOT__ADD01__DOT__ADD02__DOT__g0) 
                              | ((IData)(__PVT__D__DOT__ADD01__DOT__ADD02__DOT__p0) 
                                 & (IData)(__PVT__D__DOT__ADD01__DOT__ctemp)))) 
                          << 1U) | ((IData)(__PVT__D__DOT__ADD01__DOT__ADD02__DOT__p0) 
                                    ^ (IData)(__PVT__D__DOT__ADD01__DOT__ctemp)))));
    vlSelf->D__DOT__ADD01__DOT____Vcellout__ADD02__sum 
        = ((7U & (IData)(vlSelf->D__DOT__ADD01__DOT____Vcellout__ADD02__sum)) 
           | (8U & (((0x18U & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                               >> 0x1bU)) ^ (0xffffff8U 
                                             & ((IData)(vlSelf->__PVT__D__DOT__complemented_E2) 
                                                >> 4U))) 
                    ^ ((((0x38U & ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                    >> 0x1aU) & ((IData)(vlSelf->__PVT__D__DOT__complemented_E2) 
                                                 >> 3U))) 
                         | (((IData)(__PVT__D__DOT__ADD01__DOT__ADD02__DOT__p2) 
                             & (IData)(__PVT__D__DOT__ADD01__DOT__ADD02__DOT__g1)) 
                            << 3U)) | ((((IData)(__PVT__D__DOT__ADD01__DOT__ADD02__DOT__p2) 
                                         & (IData)(__PVT__D__DOT__ADD01__DOT__ADD02__DOT__p1)) 
                                        & (IData)(__PVT__D__DOT__ADD01__DOT__ADD02__DOT__g0)) 
                                       << 3U)) | ((
                                                   (((IData)(__PVT__D__DOT__ADD01__DOT__ADD02__DOT__p2) 
                                                     & (IData)(__PVT__D__DOT__ADD01__DOT__ADD02__DOT__p1)) 
                                                    & (IData)(__PVT__D__DOT__ADD01__DOT__ADD02__DOT__p0)) 
                                                   & (IData)(__PVT__D__DOT__ADD01__DOT__ctemp)) 
                                                  << 3U)))));
    __PVT__AS__DOT__isE1GreaterThanE2 = (1U & (((((
                                                   (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                    >> 0x1eU) 
                                                   & ((IData)(vlSelf->__PVT__AS__DOT__complemented_E2) 
                                                      >> 7U)) 
                                                  | ((IData)(__PVT__AS__DOT__ADD01__DOT__ADD02__DOT__p3) 
                                                     & (IData)(__PVT__AS__DOT__ADD01__DOT__ADD02__DOT__g2))) 
                                                 | (((IData)(__PVT__AS__DOT__ADD01__DOT__ADD02__DOT__p3) 
                                                     & (IData)(__PVT__AS__DOT__ADD01__DOT__ADD02__DOT__p2)) 
                                                    & (IData)(__PVT__AS__DOT__ADD01__DOT__ADD02__DOT__g1))) 
                                                | ((((IData)(__PVT__AS__DOT__ADD01__DOT__ADD02__DOT__p3) 
                                                     & (IData)(__PVT__AS__DOT__ADD01__DOT__ADD02__DOT__p2)) 
                                                    & (IData)(__PVT__AS__DOT__ADD01__DOT__ADD02__DOT__p1)) 
                                                   & (IData)(__PVT__AS__DOT__ADD01__DOT__ADD02__DOT__g0))) 
                                               | (((((IData)(__PVT__AS__DOT__ADD01__DOT__ADD02__DOT__p3) 
                                                     & (IData)(__PVT__AS__DOT__ADD01__DOT__ADD02__DOT__p2)) 
                                                    & (IData)(__PVT__AS__DOT__ADD01__DOT__ADD02__DOT__p1)) 
                                                   & (IData)(__PVT__AS__DOT__ADD01__DOT__ADD02__DOT__p0)) 
                                                  & (IData)(__PVT__AS__DOT__ADD01__DOT__ctemp))));
    vlSelf->AS__DOT__ADD01__DOT____Vcellout__ADD02__sum 
        = ((8U & (IData)(vlSelf->AS__DOT__ADD01__DOT____Vcellout__ADD02__sum)) 
           | ((((IData)(__PVT__AS__DOT__ADD01__DOT__ADD02__DOT__p2) 
                ^ (((IData)(__PVT__AS__DOT__ADD01__DOT__ADD02__DOT__g1) 
                    | ((IData)(__PVT__AS__DOT__ADD01__DOT__ADD02__DOT__p1) 
                       & (IData)(__PVT__AS__DOT__ADD01__DOT__ADD02__DOT__g0))) 
                   | (((IData)(__PVT__AS__DOT__ADD01__DOT__ADD02__DOT__p1) 
                       & (IData)(__PVT__AS__DOT__ADD01__DOT__ADD02__DOT__p0)) 
                      & (IData)(__PVT__AS__DOT__ADD01__DOT__ctemp)))) 
               << 2U) | ((((IData)(__PVT__AS__DOT__ADD01__DOT__ADD02__DOT__p1) 
                           ^ ((IData)(__PVT__AS__DOT__ADD01__DOT__ADD02__DOT__g0) 
                              | ((IData)(__PVT__AS__DOT__ADD01__DOT__ADD02__DOT__p0) 
                                 & (IData)(__PVT__AS__DOT__ADD01__DOT__ctemp)))) 
                          << 1U) | ((IData)(__PVT__AS__DOT__ADD01__DOT__ADD02__DOT__p0) 
                                    ^ (IData)(__PVT__AS__DOT__ADD01__DOT__ctemp)))));
    vlSelf->AS__DOT__ADD01__DOT____Vcellout__ADD02__sum 
        = ((7U & (IData)(vlSelf->AS__DOT__ADD01__DOT____Vcellout__ADD02__sum)) 
           | (((IData)(__PVT__AS__DOT__ADD01__DOT__ADD02__DOT__p3) 
               ^ ((((IData)(__PVT__AS__DOT__ADD01__DOT__ADD02__DOT__g2) 
                    | ((IData)(__PVT__AS__DOT__ADD01__DOT__ADD02__DOT__p2) 
                       & (IData)(__PVT__AS__DOT__ADD01__DOT__ADD02__DOT__g1))) 
                   | (((IData)(__PVT__AS__DOT__ADD01__DOT__ADD02__DOT__p2) 
                       & (IData)(__PVT__AS__DOT__ADD01__DOT__ADD02__DOT__p1)) 
                      & (IData)(__PVT__AS__DOT__ADD01__DOT__ADD02__DOT__g0))) 
                  | ((((IData)(__PVT__AS__DOT__ADD01__DOT__ADD02__DOT__p2) 
                       & (IData)(__PVT__AS__DOT__ADD01__DOT__ADD02__DOT__p1)) 
                      & (IData)(__PVT__AS__DOT__ADD01__DOT__ADD02__DOT__p0)) 
                     & (IData)(__PVT__AS__DOT__ADD01__DOT__ctemp)))) 
              << 3U));
    __PVT__M__DOT__sum_E = ((0x100U & (((((0x300U & 
                                           ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                             & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out) 
                                            >> 0x16U)) 
                                          | (((IData)(__PVT__M__DOT__ADD01__DOT__ADD02__DOT__p3) 
                                              & (IData)(__PVT__M__DOT__ADD01__DOT__ADD02__DOT__g2)) 
                                             << 8U)) 
                                         | ((((IData)(__PVT__M__DOT__ADD01__DOT__ADD02__DOT__p3) 
                                              & (IData)(__PVT__M__DOT__ADD01__DOT__ADD02__DOT__p2)) 
                                             & (IData)(__PVT__M__DOT__ADD01__DOT__ADD02__DOT__g1)) 
                                            << 8U)) 
                                        | (((((IData)(__PVT__M__DOT__ADD01__DOT__ADD02__DOT__p3) 
                                              & (IData)(__PVT__M__DOT__ADD01__DOT__ADD02__DOT__p2)) 
                                             & (IData)(__PVT__M__DOT__ADD01__DOT__ADD02__DOT__p1)) 
                                            & (IData)(__PVT__M__DOT__ADD01__DOT__ADD02__DOT__g0)) 
                                           << 8U)) 
                                       | ((((((IData)(__PVT__M__DOT__ADD01__DOT__ADD02__DOT__p3) 
                                              & (IData)(__PVT__M__DOT__ADD01__DOT__ADD02__DOT__p2)) 
                                             & (IData)(__PVT__M__DOT__ADD01__DOT__ADD02__DOT__p1)) 
                                            & (IData)(__PVT__M__DOT__ADD01__DOT__ADD02__DOT__p0)) 
                                           & (IData)(__PVT__M__DOT__ADD01__DOT__ctemp)) 
                                          << 8U))) 
                            | (IData)(M__DOT____Vcellout__ADD01__sum));
    __PVT__D__DOT__sub_E = (((IData)(vlSelf->D__DOT__ADD01__DOT____Vcellout__ADD02__sum) 
                             << 4U) | (IData)(vlSelf->D__DOT__ADD01__DOT____Vcellout__ADD01__sum));
    vlSelf->__PVT__AS__DOT__E = ((0xfeU & (IData)(vlSelf->__PVT__AS__DOT__E)) 
                                 | (1U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                            >> 0x17U) 
                                           & (~ (IData)(__PVT__AS__DOT__isE1GreaterThanE2))) 
                                          | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                              >> 0x17U) 
                                             & (IData)(__PVT__AS__DOT__isE1GreaterThanE2)))));
    vlSelf->__PVT__AS__DOT__E = ((0xfdU & (IData)(vlSelf->__PVT__AS__DOT__E)) 
                                 | (2U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                            >> 0x17U) 
                                           & ((~ (IData)(__PVT__AS__DOT__isE1GreaterThanE2)) 
                                              << 1U)) 
                                          | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                              >> 0x17U) 
                                             & ((IData)(__PVT__AS__DOT__isE1GreaterThanE2) 
                                                << 1U)))));
    vlSelf->__PVT__AS__DOT__E = ((0xfbU & (IData)(vlSelf->__PVT__AS__DOT__E)) 
                                 | (4U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                            >> 0x17U) 
                                           & ((~ (IData)(__PVT__AS__DOT__isE1GreaterThanE2)) 
                                              << 2U)) 
                                          | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                              >> 0x17U) 
                                             & ((IData)(__PVT__AS__DOT__isE1GreaterThanE2) 
                                                << 2U)))));
    vlSelf->__PVT__AS__DOT__E = ((0xf7U & (IData)(vlSelf->__PVT__AS__DOT__E)) 
                                 | (8U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                            >> 0x17U) 
                                           & ((~ (IData)(__PVT__AS__DOT__isE1GreaterThanE2)) 
                                              << 3U)) 
                                          | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                              >> 0x17U) 
                                             & ((IData)(__PVT__AS__DOT__isE1GreaterThanE2) 
                                                << 3U)))));
    vlSelf->__PVT__AS__DOT__E = ((0xefU & (IData)(vlSelf->__PVT__AS__DOT__E)) 
                                 | (0x10U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                               >> 0x17U) 
                                              & ((~ (IData)(__PVT__AS__DOT__isE1GreaterThanE2)) 
                                                 << 4U)) 
                                             | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                 >> 0x17U) 
                                                & ((IData)(__PVT__AS__DOT__isE1GreaterThanE2) 
                                                   << 4U)))));
    vlSelf->__PVT__AS__DOT__E = ((0xdfU & (IData)(vlSelf->__PVT__AS__DOT__E)) 
                                 | (0x20U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                               >> 0x17U) 
                                              & ((~ (IData)(__PVT__AS__DOT__isE1GreaterThanE2)) 
                                                 << 5U)) 
                                             | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                 >> 0x17U) 
                                                & ((IData)(__PVT__AS__DOT__isE1GreaterThanE2) 
                                                   << 5U)))));
    vlSelf->__PVT__AS__DOT__E = ((0xbfU & (IData)(vlSelf->__PVT__AS__DOT__E)) 
                                 | (0x40U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                               >> 0x17U) 
                                              & ((~ (IData)(__PVT__AS__DOT__isE1GreaterThanE2)) 
                                                 << 6U)) 
                                             | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                 >> 0x17U) 
                                                & ((IData)(__PVT__AS__DOT__isE1GreaterThanE2) 
                                                   << 6U)))));
    vlSelf->__PVT__AS__DOT__E = ((0x7fU & (IData)(vlSelf->__PVT__AS__DOT__E)) 
                                 | (0x80U & (((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                               >> 0x17U) 
                                              & ((~ (IData)(__PVT__AS__DOT__isE1GreaterThanE2)) 
                                                 << 7U)) 
                                             | ((vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                 >> 0x17U) 
                                                & ((IData)(__PVT__AS__DOT__isE1GreaterThanE2) 
                                                   << 7U)))));
    __PVT__AS__DOT__temp_exp_diff = (((IData)(vlSelf->AS__DOT__ADD01__DOT____Vcellout__ADD02__sum) 
                                      << 4U) | (IData)(vlSelf->AS__DOT__ADD01__DOT____Vcellout__ADD01__sum));
    vlSelf->M__DOT__ADD02__DOT__ADD01__DOT____Vcellout__ADD01__sum 
        = ((8U & (IData)(vlSelf->M__DOT__ADD02__DOT__ADD01__DOT____Vcellout__ADD01__sum)) 
           | ((4U & ((0xfffffffcU & (IData)(__PVT__M__DOT__sum_E)) 
                     ^ ((0xfffffffcU & (((IData)(__PVT__M__DOT__sum_E) 
                                         << 1U) & ((IData)(__PVT__M__DOT__sum_E) 
                                                   << 2U))) 
                        | (((IData)((2U == (3U & (IData)(__PVT__M__DOT__sum_E)))) 
                            & (IData)((vlSelf->__PVT__M__DOT__M_mul_result 
                                       >> 0x2fU))) 
                           << 2U)))) | ((2U & ((0xfffffffeU 
                                                & (IData)(__PVT__M__DOT__sum_E)) 
                                               ^ (((IData)(__PVT__M__DOT__sum_E) 
                                                   | (IData)(
                                                             (vlSelf->__PVT__M__DOT__M_mul_result 
                                                              >> 0x2fU))) 
                                                  << 1U))) 
                                        | (1U & ((~ (IData)(__PVT__M__DOT__sum_E)) 
                                                 ^ (IData)(
                                                           (vlSelf->__PVT__M__DOT__M_mul_result 
                                                            >> 0x2fU)))))));
    vlSelf->M__DOT__ADD02__DOT__ADD01__DOT____Vcellout__ADD01__sum 
        = ((7U & (IData)(vlSelf->M__DOT__ADD02__DOT__ADD01__DOT____Vcellout__ADD01__sum)) 
           | (8U & ((0xfffffff8U & (IData)(__PVT__M__DOT__sum_E)) 
                    ^ (((IData)((7U == (7U & (IData)(__PVT__M__DOT__sum_E)))) 
                        | ((IData)((6U == (7U & (IData)(__PVT__M__DOT__sum_E)))) 
                           & (IData)((vlSelf->__PVT__M__DOT__M_mul_result 
                                      >> 0x2fU)))) 
                       << 3U))));
    __PVT__M__DOT__ADD02__DOT__ADD01__DOT__ctemp = 
        (1U & ((IData)((0xfU == (0xfU & (IData)(__PVT__M__DOT__sum_E)))) 
               | ((IData)((0xeU == (0xfU & (IData)(__PVT__M__DOT__sum_E)))) 
                  & (IData)((vlSelf->__PVT__M__DOT__M_mul_result 
                             >> 0x2fU)))));
    vlSelf->D__DOT__ADD02__DOT____Vcellout__ADD01__sum 
        = ((8U & (IData)(vlSelf->D__DOT__ADD02__DOT____Vcellout__ADD01__sum)) 
           | ((4U & (((~ ((IData)(__PVT__D__DOT__sub_E) 
                          >> 2U)) << 2U) ^ ((0xfffffffcU 
                                             & ((IData)(__PVT__D__DOT__sub_E) 
                                                << 1U)) 
                                            | ((IData)(
                                                       (1U 
                                                        == 
                                                        (3U 
                                                         & (IData)(__PVT__D__DOT__sub_E)))) 
                                               << 2U)))) 
              | ((2U & (((~ ((IData)(__PVT__D__DOT__sub_E) 
                             >> 1U)) ^ (IData)(__PVT__D__DOT__sub_E)) 
                        << 1U)) | (1U & (~ (IData)(__PVT__D__DOT__sub_E))))));
    vlSelf->D__DOT__ADD02__DOT____Vcellout__ADD01__sum 
        = ((7U & (IData)(vlSelf->D__DOT__ADD02__DOT____Vcellout__ADD01__sum)) 
           | (8U & (((~ ((IData)(__PVT__D__DOT__sub_E) 
                         >> 3U)) << 3U) ^ (((0xfffffff8U 
                                             & ((IData)(__PVT__D__DOT__sub_E) 
                                                << 1U)) 
                                            | ((IData)(
                                                       (2U 
                                                        == 
                                                        (6U 
                                                         & (IData)(__PVT__D__DOT__sub_E)))) 
                                               << 3U)) 
                                           | ((IData)(
                                                      (1U 
                                                       == 
                                                       (7U 
                                                        & (IData)(__PVT__D__DOT__sub_E)))) 
                                              << 3U)))));
    __PVT__D__DOT__ADD02__DOT__ctemp = (1U & (((((IData)(__PVT__D__DOT__sub_E) 
                                                 >> 3U) 
                                                | (IData)(
                                                          (4U 
                                                           == 
                                                           (0xcU 
                                                            & (IData)(__PVT__D__DOT__sub_E))))) 
                                               | (IData)(
                                                         (2U 
                                                          == 
                                                          (0xeU 
                                                           & (IData)(__PVT__D__DOT__sub_E))))) 
                                              | (IData)(
                                                        (1U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(__PVT__D__DOT__sub_E))))));
    vlSelf->AS__DOT__ADD0212__DOT____Vcellout__ADD01__sum 
        = ((8U & (IData)(vlSelf->AS__DOT__ADD0212__DOT____Vcellout__ADD01__sum)) 
           | ((4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__AS__DOT__E)) 
                     ^ (0xfffffffcU & (((IData)(vlSelf->__PVT__AS__DOT__E) 
                                        << 1U) & ((IData)(vlSelf->__PVT__AS__DOT__E) 
                                                  << 2U))))) 
              | ((2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__AS__DOT__E)) 
                        ^ ((IData)(vlSelf->__PVT__AS__DOT__E) 
                           << 1U))) | (1U & (~ (IData)(vlSelf->__PVT__AS__DOT__E))))));
    vlSelf->AS__DOT__ADD0212__DOT____Vcellout__ADD01__sum 
        = ((7U & (IData)(vlSelf->AS__DOT__ADD0212__DOT____Vcellout__ADD01__sum)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__AS__DOT__E)) 
                    ^ ((IData)((7U == (7U & (IData)(vlSelf->__PVT__AS__DOT__E)))) 
                       << 3U))));
    __PVT__AS__DOT__ADD0212__DOT__ctemp = (IData)((0xfU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelf->__PVT__AS__DOT__E))));
    vlSelf->__PVT__AS__DOT__C023__DOT__outtemp = ((0xfcU 
                                                   & (IData)(vlSelf->__PVT__AS__DOT__C023__DOT__outtemp)) 
                                                  | ((2U 
                                                      & ((~ 
                                                          ((IData)(__PVT__AS__DOT__temp_exp_diff) 
                                                           >> 1U)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (~ (IData)(__PVT__AS__DOT__temp_exp_diff)))));
    vlSelf->__PVT__AS__DOT__C023__DOT__outtemp = ((0xf3U 
                                                   & (IData)(vlSelf->__PVT__AS__DOT__C023__DOT__outtemp)) 
                                                  | ((8U 
                                                      & ((~ 
                                                          ((IData)(__PVT__AS__DOT__temp_exp_diff) 
                                                           >> 3U)) 
                                                         << 3U)) 
                                                     | (4U 
                                                        & ((~ 
                                                            ((IData)(__PVT__AS__DOT__temp_exp_diff) 
                                                             >> 2U)) 
                                                           << 2U))));
    vlSelf->__PVT__AS__DOT__C023__DOT__outtemp = ((0xcfU 
                                                   & (IData)(vlSelf->__PVT__AS__DOT__C023__DOT__outtemp)) 
                                                  | ((0x20U 
                                                      & ((~ 
                                                          ((IData)(__PVT__AS__DOT__temp_exp_diff) 
                                                           >> 5U)) 
                                                         << 5U)) 
                                                     | (0x10U 
                                                        & ((~ 
                                                            ((IData)(__PVT__AS__DOT__temp_exp_diff) 
                                                             >> 4U)) 
                                                           << 4U))));
    vlSelf->__PVT__AS__DOT__C023__DOT__outtemp = ((0x3fU 
                                                   & (IData)(vlSelf->__PVT__AS__DOT__C023__DOT__outtemp)) 
                                                  | ((0x80U 
                                                      & ((~ 
                                                          ((IData)(__PVT__AS__DOT__temp_exp_diff) 
                                                           >> 7U)) 
                                                         << 7U)) 
                                                     | (0x40U 
                                                        & ((~ 
                                                            ((IData)(__PVT__AS__DOT__temp_exp_diff) 
                                                             >> 6U)) 
                                                           << 6U))));
    __PVT__M__DOT__ADD02__DOT__ctemp = (1U & (((IData)(__PVT__M__DOT__sum_E) 
                                               >> 7U) 
                                              | ((IData)(
                                                         (0x70U 
                                                          == 
                                                          (0xf0U 
                                                           & (IData)(__PVT__M__DOT__sum_E)))) 
                                                 & (IData)(__PVT__M__DOT__ADD02__DOT__ADD01__DOT__ctemp))));
    vlSelf->M__DOT__ADD02__DOT__ADD01__DOT____Vcellout__ADD02__sum 
        = ((8U & (IData)(vlSelf->M__DOT__ADD02__DOT__ADD01__DOT____Vcellout__ADD02__sum)) 
           | ((4U & ((0xffffffcU & ((IData)(__PVT__M__DOT__sum_E) 
                                    >> 4U)) ^ (((IData)(
                                                        (0x30U 
                                                         == 
                                                         (0x30U 
                                                          & (IData)(__PVT__M__DOT__sum_E)))) 
                                                & (IData)(__PVT__M__DOT__ADD02__DOT__ADD01__DOT__ctemp)) 
                                               << 2U))) 
              | ((2U & ((0xffffffeU & ((IData)(__PVT__M__DOT__sum_E) 
                                       >> 4U)) ^ (0x1ffffffeU 
                                                  & (((IData)(__PVT__M__DOT__sum_E) 
                                                      >> 3U) 
                                                     & ((IData)(__PVT__M__DOT__ADD02__DOT__ADD01__DOT__ctemp) 
                                                        << 1U))))) 
                 | (1U & (((IData)(__PVT__M__DOT__sum_E) 
                           >> 4U) ^ (IData)(__PVT__M__DOT__ADD02__DOT__ADD01__DOT__ctemp))))));
    vlSelf->M__DOT__ADD02__DOT__ADD01__DOT____Vcellout__ADD02__sum 
        = ((7U & (IData)(vlSelf->M__DOT__ADD02__DOT__ADD01__DOT____Vcellout__ADD02__sum)) 
           | (8U & (((~ ((IData)(__PVT__M__DOT__sum_E) 
                         >> 7U)) ^ ((IData)((0x70U 
                                             == (0x70U 
                                                 & (IData)(__PVT__M__DOT__sum_E)))) 
                                    & (IData)(__PVT__M__DOT__ADD02__DOT__ADD01__DOT__ctemp))) 
                    << 3U)));
    vlSelf->D__DOT__ADD02__DOT____Vcellout__ADD02__sum 
        = ((8U & (IData)(vlSelf->D__DOT__ADD02__DOT____Vcellout__ADD02__sum)) 
           | ((4U & (((~ ((IData)(__PVT__D__DOT__sub_E) 
                          >> 6U)) << 2U) ^ (((0x1ffffffcU 
                                              & ((IData)(__PVT__D__DOT__sub_E) 
                                                 >> 3U)) 
                                             | ((IData)(
                                                        (0x10U 
                                                         == 
                                                         (0x30U 
                                                          & (IData)(__PVT__D__DOT__sub_E)))) 
                                                << 2U)) 
                                            | (((IData)(
                                                        (0U 
                                                         == 
                                                         (0x30U 
                                                          & (IData)(__PVT__D__DOT__sub_E)))) 
                                                & (IData)(__PVT__D__DOT__ADD02__DOT__ctemp)) 
                                               << 2U)))) 
              | ((2U & (((~ ((IData)(__PVT__D__DOT__sub_E) 
                             >> 5U)) << 1U) ^ ((0x1ffffffeU 
                                                & ((IData)(__PVT__D__DOT__sub_E) 
                                                   >> 3U)) 
                                               | (((~ 
                                                    ((IData)(__PVT__D__DOT__sub_E) 
                                                     >> 4U)) 
                                                   & (IData)(__PVT__D__DOT__ADD02__DOT__ctemp)) 
                                                  << 1U)))) 
                 | (1U & ((~ ((IData)(__PVT__D__DOT__sub_E) 
                              >> 4U)) ^ (IData)(__PVT__D__DOT__ADD02__DOT__ctemp))))));
    vlSelf->D__DOT__ADD02__DOT____Vcellout__ADD02__sum 
        = ((7U & (IData)(vlSelf->D__DOT__ADD02__DOT____Vcellout__ADD02__sum)) 
           | (8U & ((0xffffff8U & ((IData)(__PVT__D__DOT__sub_E) 
                                   >> 4U)) ^ ((((0x1ffffff8U 
                                                 & ((IData)(__PVT__D__DOT__sub_E) 
                                                    >> 3U)) 
                                                | ((IData)(
                                                           (0x20U 
                                                            == 
                                                            (0x60U 
                                                             & (IData)(__PVT__D__DOT__sub_E)))) 
                                                   << 3U)) 
                                               | ((IData)(
                                                          (0x10U 
                                                           == 
                                                           (0x70U 
                                                            & (IData)(__PVT__D__DOT__sub_E)))) 
                                                  << 3U)) 
                                              | (((IData)(
                                                          (0U 
                                                           == 
                                                           (0x70U 
                                                            & (IData)(__PVT__D__DOT__sub_E)))) 
                                                  & (IData)(__PVT__D__DOT__ADD02__DOT__ctemp)) 
                                                 << 3U)))));
    vlSelf->AS__DOT__ADD0212__DOT____Vcellout__ADD02__sum 
        = ((8U & (IData)(vlSelf->AS__DOT__ADD0212__DOT____Vcellout__ADD02__sum)) 
           | ((4U & ((0xffffffcU & ((IData)(vlSelf->__PVT__AS__DOT__E) 
                                    >> 4U)) ^ (((IData)(
                                                        (0x30U 
                                                         == 
                                                         (0x30U 
                                                          & (IData)(vlSelf->__PVT__AS__DOT__E)))) 
                                                & (IData)(__PVT__AS__DOT__ADD0212__DOT__ctemp)) 
                                               << 2U))) 
              | ((2U & ((0xffffffeU & ((IData)(vlSelf->__PVT__AS__DOT__E) 
                                       >> 4U)) ^ (0x1ffffffeU 
                                                  & (((IData)(vlSelf->__PVT__AS__DOT__E) 
                                                      >> 3U) 
                                                     & ((IData)(__PVT__AS__DOT__ADD0212__DOT__ctemp) 
                                                        << 1U))))) 
                 | (1U & (((IData)(vlSelf->__PVT__AS__DOT__E) 
                           >> 4U) ^ (IData)(__PVT__AS__DOT__ADD0212__DOT__ctemp))))));
    vlSelf->AS__DOT__ADD0212__DOT____Vcellout__ADD02__sum 
        = ((7U & (IData)(vlSelf->AS__DOT__ADD0212__DOT____Vcellout__ADD02__sum)) 
           | (8U & ((0xffffff8U & ((IData)(vlSelf->__PVT__AS__DOT__E) 
                                   >> 4U)) ^ (((IData)(
                                                       (0x70U 
                                                        == 
                                                        (0x70U 
                                                         & (IData)(vlSelf->__PVT__AS__DOT__E)))) 
                                               & (IData)(__PVT__AS__DOT__ADD0212__DOT__ctemp)) 
                                              << 3U))));
    vlSelf->AS__DOT__C023__DOT__ADD01__DOT____Vcellout__ADD01__sum 
        = ((8U & (IData)(vlSelf->AS__DOT__C023__DOT__ADD01__DOT____Vcellout__ADD01__sum)) 
           | ((4U & ((0xfffffffcU & (IData)(vlSelf->__PVT__AS__DOT__C023__DOT__outtemp)) 
                     ^ (0xfffffffcU & (((IData)(vlSelf->__PVT__AS__DOT__C023__DOT__outtemp) 
                                        << 1U) & ((IData)(vlSelf->__PVT__AS__DOT__C023__DOT__outtemp) 
                                                  << 2U))))) 
              | ((2U & ((0xfffffffeU & (IData)(vlSelf->__PVT__AS__DOT__C023__DOT__outtemp)) 
                        ^ ((IData)(vlSelf->__PVT__AS__DOT__C023__DOT__outtemp) 
                           << 1U))) | (1U & (~ (IData)(vlSelf->__PVT__AS__DOT__C023__DOT__outtemp))))));
    vlSelf->AS__DOT__C023__DOT__ADD01__DOT____Vcellout__ADD01__sum 
        = ((7U & (IData)(vlSelf->AS__DOT__C023__DOT__ADD01__DOT____Vcellout__ADD01__sum)) 
           | (8U & ((0xfffffff8U & (IData)(vlSelf->__PVT__AS__DOT__C023__DOT__outtemp)) 
                    ^ ((IData)((7U == (7U & (IData)(vlSelf->__PVT__AS__DOT__C023__DOT__outtemp)))) 
                       << 3U))));
    __PVT__AS__DOT__C023__DOT__ADD01__DOT__ctemp = (IData)(
                                                           (0xfU 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(vlSelf->__PVT__AS__DOT__C023__DOT__outtemp))));
    vlSelf->__PVT__M__DOT__carry_E = (1U & ((((IData)(__PVT__M__DOT__sum_E) 
                                              >> 8U) 
                                             | (((IData)(__PVT__M__DOT__sum_E) 
                                                 >> 8U) 
                                                & (IData)(__PVT__M__DOT__ADD02__DOT__ctemp))) 
                                            | (IData)(__PVT__M__DOT__ADD02__DOT__ctemp)));
    vlSelf->__PVT__M__DOT__final_E = ((0xffU & (IData)(vlSelf->__PVT__M__DOT__final_E)) 
                                      | (0x100U & (
                                                   ((~ 
                                                     ((IData)(__PVT__M__DOT__sum_E) 
                                                      >> 8U)) 
                                                    ^ (IData)(__PVT__M__DOT__ADD02__DOT__ctemp)) 
                                                   << 8U)));
    M__DOT__ADD02__DOT____Vcellout__ADD01__sum = (((IData)(vlSelf->M__DOT__ADD02__DOT__ADD01__DOT____Vcellout__ADD02__sum) 
                                                   << 4U) 
                                                  | (IData)(vlSelf->M__DOT__ADD02__DOT__ADD01__DOT____Vcellout__ADD01__sum));
    __PVT__D__DOT__bias_added_E = (((IData)(vlSelf->D__DOT__ADD02__DOT____Vcellout__ADD02__sum) 
                                    << 4U) | (IData)(vlSelf->D__DOT__ADD02__DOT____Vcellout__ADD01__sum));
    vlSelf->__PVT__AS__DOT__One_Added_E = (((IData)(vlSelf->AS__DOT__ADD0212__DOT____Vcellout__ADD02__sum) 
                                            << 4U) 
                                           | (IData)(vlSelf->AS__DOT__ADD0212__DOT____Vcellout__ADD01__sum));
    vlSelf->AS__DOT__C023__DOT__ADD01__DOT____Vcellout__ADD02__sum 
        = ((8U & (IData)(vlSelf->AS__DOT__C023__DOT__ADD01__DOT____Vcellout__ADD02__sum)) 
           | ((4U & ((0xffffffcU & ((IData)(vlSelf->__PVT__AS__DOT__C023__DOT__outtemp) 
                                    >> 4U)) ^ (((IData)(
                                                        (0x30U 
                                                         == 
                                                         (0x30U 
                                                          & (IData)(vlSelf->__PVT__AS__DOT__C023__DOT__outtemp)))) 
                                                & (IData)(__PVT__AS__DOT__C023__DOT__ADD01__DOT__ctemp)) 
                                               << 2U))) 
              | ((2U & ((0xffffffeU & ((IData)(vlSelf->__PVT__AS__DOT__C023__DOT__outtemp) 
                                       >> 4U)) ^ (0x1ffffffeU 
                                                  & (((IData)(vlSelf->__PVT__AS__DOT__C023__DOT__outtemp) 
                                                      >> 3U) 
                                                     & ((IData)(__PVT__AS__DOT__C023__DOT__ADD01__DOT__ctemp) 
                                                        << 1U))))) 
                 | (1U & (((IData)(vlSelf->__PVT__AS__DOT__C023__DOT__outtemp) 
                           >> 4U) ^ (IData)(__PVT__AS__DOT__C023__DOT__ADD01__DOT__ctemp))))));
    vlSelf->AS__DOT__C023__DOT__ADD01__DOT____Vcellout__ADD02__sum 
        = ((7U & (IData)(vlSelf->AS__DOT__C023__DOT__ADD01__DOT____Vcellout__ADD02__sum)) 
           | (8U & ((0xffffff8U & ((IData)(vlSelf->__PVT__AS__DOT__C023__DOT__outtemp) 
                                   >> 4U)) ^ (((IData)(
                                                       (0x70U 
                                                        == 
                                                        (0x70U 
                                                         & (IData)(vlSelf->__PVT__AS__DOT__C023__DOT__outtemp)))) 
                                               & (IData)(__PVT__AS__DOT__C023__DOT__ADD01__DOT__ctemp)) 
                                              << 3U))));
    vlSelf->__PVT__M__DOT__final_E = ((0x100U & (IData)(vlSelf->__PVT__M__DOT__final_E)) 
                                      | (IData)(M__DOT__ADD02__DOT____Vcellout__ADD01__sum));
    __PVT__D__DOT__ADD03__DOT__ADD02__DOT__g2 = (1U 
                                                 & (((IData)(__PVT__D__DOT__bias_added_E) 
                                                     & (IData)(vlSelf->__PVT__D__DOT__complemented_shift_E1)) 
                                                    >> 6U));
    __PVT__D__DOT__ADD03__DOT__ADD02__DOT__p3 = (1U 
                                                 & (((IData)(__PVT__D__DOT__bias_added_E) 
                                                     ^ (IData)(vlSelf->__PVT__D__DOT__complemented_shift_E1)) 
                                                    >> 7U));
    __PVT__D__DOT__ADD03__DOT__ADD02__DOT__g0 = (1U 
                                                 & (((IData)(__PVT__D__DOT__bias_added_E) 
                                                     & (IData)(vlSelf->__PVT__D__DOT__complemented_shift_E1)) 
                                                    >> 4U));
    __PVT__D__DOT__ADD03__DOT__ADD02__DOT__g1 = (1U 
                                                 & (((IData)(__PVT__D__DOT__bias_added_E) 
                                                     & (IData)(vlSelf->__PVT__D__DOT__complemented_shift_E1)) 
                                                    >> 5U));
    __PVT__D__DOT__ADD03__DOT__ADD02__DOT__p0 = (1U 
                                                 & (((IData)(__PVT__D__DOT__bias_added_E) 
                                                     ^ (IData)(vlSelf->__PVT__D__DOT__complemented_shift_E1)) 
                                                    >> 4U));
    __PVT__D__DOT__ADD03__DOT__ADD02__DOT__p1 = (1U 
                                                 & (((IData)(__PVT__D__DOT__bias_added_E) 
                                                     ^ (IData)(vlSelf->__PVT__D__DOT__complemented_shift_E1)) 
                                                    >> 5U));
    __PVT__D__DOT__ADD03__DOT__ADD02__DOT__p2 = (1U 
                                                 & (((IData)(__PVT__D__DOT__bias_added_E) 
                                                     ^ (IData)(vlSelf->__PVT__D__DOT__complemented_shift_E1)) 
                                                    >> 6U));
    __PVT__D__DOT__ADD03__DOT__ADD01__DOT__g2 = (1U 
                                                 & (((IData)(__PVT__D__DOT__bias_added_E) 
                                                     & (IData)(vlSelf->__PVT__D__DOT__complemented_shift_E1)) 
                                                    >> 2U));
    __PVT__D__DOT__ADD03__DOT__ADD01__DOT__p3 = (1U 
                                                 & (((IData)(__PVT__D__DOT__bias_added_E) 
                                                     ^ (IData)(vlSelf->__PVT__D__DOT__complemented_shift_E1)) 
                                                    >> 3U));
    __PVT__D__DOT__ADD03__DOT__ADD01__DOT__g0 = (1U 
                                                 & ((IData)(__PVT__D__DOT__bias_added_E) 
                                                    & (IData)(vlSelf->__PVT__D__DOT__complemented_shift_E1)));
    __PVT__D__DOT__ADD03__DOT__ADD01__DOT__g1 = (1U 
                                                 & (((IData)(__PVT__D__DOT__bias_added_E) 
                                                     & (IData)(vlSelf->__PVT__D__DOT__complemented_shift_E1)) 
                                                    >> 1U));
    __PVT__D__DOT__ADD03__DOT__ADD01__DOT__p0 = (1U 
                                                 & ((IData)(__PVT__D__DOT__bias_added_E) 
                                                    ^ (IData)(vlSelf->__PVT__D__DOT__complemented_shift_E1)));
    __PVT__D__DOT__ADD03__DOT__ADD01__DOT__p1 = (1U 
                                                 & (((IData)(__PVT__D__DOT__bias_added_E) 
                                                     ^ (IData)(vlSelf->__PVT__D__DOT__complemented_shift_E1)) 
                                                    >> 1U));
    __PVT__D__DOT__ADD03__DOT__ADD01__DOT__p2 = (1U 
                                                 & (((IData)(__PVT__D__DOT__bias_added_E) 
                                                     ^ (IData)(vlSelf->__PVT__D__DOT__complemented_shift_E1)) 
                                                    >> 2U));
    __PVT__AS__DOT__complemented_temp_exp_diff = (((IData)(vlSelf->AS__DOT__C023__DOT__ADD01__DOT____Vcellout__ADD02__sum) 
                                                   << 4U) 
                                                  | (IData)(vlSelf->AS__DOT__C023__DOT__ADD01__DOT____Vcellout__ADD01__sum));
    vlSelf->D__DOT__ADD03__DOT____Vcellout__ADD01__sum 
        = ((8U & (IData)(vlSelf->D__DOT__ADD03__DOT____Vcellout__ADD01__sum)) 
           | ((((IData)(__PVT__D__DOT__ADD03__DOT__ADD01__DOT__p2) 
                ^ (((IData)(__PVT__D__DOT__ADD03__DOT__ADD01__DOT__g1) 
                    | ((IData)(__PVT__D__DOT__ADD03__DOT__ADD01__DOT__p1) 
                       & (IData)(__PVT__D__DOT__ADD03__DOT__ADD01__DOT__g0))) 
                   | ((IData)(__PVT__D__DOT__ADD03__DOT__ADD01__DOT__p1) 
                      & (IData)(__PVT__D__DOT__ADD03__DOT__ADD01__DOT__p0)))) 
               << 2U) | ((((IData)(__PVT__D__DOT__ADD03__DOT__ADD01__DOT__p1) 
                           ^ ((IData)(__PVT__D__DOT__ADD03__DOT__ADD01__DOT__g0) 
                              | (IData)(__PVT__D__DOT__ADD03__DOT__ADD01__DOT__p0))) 
                          << 1U) | (1U & (~ (IData)(__PVT__D__DOT__ADD03__DOT__ADD01__DOT__p0))))));
    vlSelf->D__DOT__ADD03__DOT____Vcellout__ADD01__sum 
        = ((7U & (IData)(vlSelf->D__DOT__ADD03__DOT____Vcellout__ADD01__sum)) 
           | (((IData)(__PVT__D__DOT__ADD03__DOT__ADD01__DOT__p3) 
               ^ ((((IData)(__PVT__D__DOT__ADD03__DOT__ADD01__DOT__g2) 
                    | ((IData)(__PVT__D__DOT__ADD03__DOT__ADD01__DOT__p2) 
                       & (IData)(__PVT__D__DOT__ADD03__DOT__ADD01__DOT__g1))) 
                   | (((IData)(__PVT__D__DOT__ADD03__DOT__ADD01__DOT__p2) 
                       & (IData)(__PVT__D__DOT__ADD03__DOT__ADD01__DOT__p1)) 
                      & (IData)(__PVT__D__DOT__ADD03__DOT__ADD01__DOT__g0))) 
                  | (((IData)(__PVT__D__DOT__ADD03__DOT__ADD01__DOT__p2) 
                      & (IData)(__PVT__D__DOT__ADD03__DOT__ADD01__DOT__p1)) 
                     & (IData)(__PVT__D__DOT__ADD03__DOT__ADD01__DOT__p0)))) 
              << 3U));
    __PVT__D__DOT__ADD03__DOT__ctemp = (1U & (((((((IData)(__PVT__D__DOT__bias_added_E) 
                                                   & (IData)(vlSelf->__PVT__D__DOT__complemented_shift_E1)) 
                                                  >> 3U) 
                                                 | ((IData)(__PVT__D__DOT__ADD03__DOT__ADD01__DOT__p3) 
                                                    & (IData)(__PVT__D__DOT__ADD03__DOT__ADD01__DOT__g2))) 
                                                | (((IData)(__PVT__D__DOT__ADD03__DOT__ADD01__DOT__p3) 
                                                    & (IData)(__PVT__D__DOT__ADD03__DOT__ADD01__DOT__p2)) 
                                                   & (IData)(__PVT__D__DOT__ADD03__DOT__ADD01__DOT__g1))) 
                                               | ((((IData)(__PVT__D__DOT__ADD03__DOT__ADD01__DOT__p3) 
                                                    & (IData)(__PVT__D__DOT__ADD03__DOT__ADD01__DOT__p2)) 
                                                   & (IData)(__PVT__D__DOT__ADD03__DOT__ADD01__DOT__p1)) 
                                                  & (IData)(__PVT__D__DOT__ADD03__DOT__ADD01__DOT__g0))) 
                                              | ((((IData)(__PVT__D__DOT__ADD03__DOT__ADD01__DOT__p3) 
                                                   & (IData)(__PVT__D__DOT__ADD03__DOT__ADD01__DOT__p2)) 
                                                  & (IData)(__PVT__D__DOT__ADD03__DOT__ADD01__DOT__p1)) 
                                                 & (IData)(__PVT__D__DOT__ADD03__DOT__ADD01__DOT__p0))));
    vlSelf->__PVT__AS__DOT__exp_diff = ((0xfeU & (IData)(vlSelf->__PVT__AS__DOT__exp_diff)) 
                                        | (1U & (((IData)(__PVT__AS__DOT__complemented_temp_exp_diff) 
                                                  & (~ (IData)(__PVT__AS__DOT__isE1GreaterThanE2))) 
                                                 | ((IData)(__PVT__AS__DOT__temp_exp_diff) 
                                                    & (IData)(__PVT__AS__DOT__isE1GreaterThanE2)))));
    vlSelf->__PVT__AS__DOT__exp_diff = ((0xfdU & (IData)(vlSelf->__PVT__AS__DOT__exp_diff)) 
                                        | (2U & (((IData)(__PVT__AS__DOT__complemented_temp_exp_diff) 
                                                  & ((~ (IData)(__PVT__AS__DOT__isE1GreaterThanE2)) 
                                                     << 1U)) 
                                                 | ((IData)(__PVT__AS__DOT__temp_exp_diff) 
                                                    & ((IData)(__PVT__AS__DOT__isE1GreaterThanE2) 
                                                       << 1U)))));
    vlSelf->__PVT__AS__DOT__exp_diff = ((0xfbU & (IData)(vlSelf->__PVT__AS__DOT__exp_diff)) 
                                        | (4U & (((IData)(__PVT__AS__DOT__complemented_temp_exp_diff) 
                                                  & ((~ (IData)(__PVT__AS__DOT__isE1GreaterThanE2)) 
                                                     << 2U)) 
                                                 | ((IData)(__PVT__AS__DOT__temp_exp_diff) 
                                                    & ((IData)(__PVT__AS__DOT__isE1GreaterThanE2) 
                                                       << 2U)))));
    vlSelf->__PVT__AS__DOT__exp_diff = ((0xf7U & (IData)(vlSelf->__PVT__AS__DOT__exp_diff)) 
                                        | (8U & (((IData)(__PVT__AS__DOT__complemented_temp_exp_diff) 
                                                  & ((~ (IData)(__PVT__AS__DOT__isE1GreaterThanE2)) 
                                                     << 3U)) 
                                                 | ((IData)(__PVT__AS__DOT__temp_exp_diff) 
                                                    & ((IData)(__PVT__AS__DOT__isE1GreaterThanE2) 
                                                       << 3U)))));
    vlSelf->__PVT__AS__DOT__exp_diff = ((0xefU & (IData)(vlSelf->__PVT__AS__DOT__exp_diff)) 
                                        | (0x10U & 
                                           (((IData)(__PVT__AS__DOT__complemented_temp_exp_diff) 
                                             & ((~ (IData)(__PVT__AS__DOT__isE1GreaterThanE2)) 
                                                << 4U)) 
                                            | ((IData)(__PVT__AS__DOT__temp_exp_diff) 
                                               & ((IData)(__PVT__AS__DOT__isE1GreaterThanE2) 
                                                  << 4U)))));
    vlSelf->__PVT__AS__DOT__exp_diff = ((0xdfU & (IData)(vlSelf->__PVT__AS__DOT__exp_diff)) 
                                        | (0x20U & 
                                           (((IData)(__PVT__AS__DOT__complemented_temp_exp_diff) 
                                             & ((~ (IData)(__PVT__AS__DOT__isE1GreaterThanE2)) 
                                                << 5U)) 
                                            | ((IData)(__PVT__AS__DOT__temp_exp_diff) 
                                               & ((IData)(__PVT__AS__DOT__isE1GreaterThanE2) 
                                                  << 5U)))));
    vlSelf->__PVT__AS__DOT__exp_diff = ((0xbfU & (IData)(vlSelf->__PVT__AS__DOT__exp_diff)) 
                                        | (0x40U & 
                                           (((IData)(__PVT__AS__DOT__complemented_temp_exp_diff) 
                                             & ((~ (IData)(__PVT__AS__DOT__isE1GreaterThanE2)) 
                                                << 6U)) 
                                            | ((IData)(__PVT__AS__DOT__temp_exp_diff) 
                                               & ((IData)(__PVT__AS__DOT__isE1GreaterThanE2) 
                                                  << 6U)))));
    vlSelf->__PVT__AS__DOT__exp_diff = ((0x7fU & (IData)(vlSelf->__PVT__AS__DOT__exp_diff)) 
                                        | (0x80U & 
                                           (((IData)(__PVT__AS__DOT__complemented_temp_exp_diff) 
                                             & ((~ (IData)(__PVT__AS__DOT__isE1GreaterThanE2)) 
                                                << 7U)) 
                                            | ((IData)(__PVT__AS__DOT__temp_exp_diff) 
                                               & ((IData)(__PVT__AS__DOT__isE1GreaterThanE2) 
                                                  << 7U)))));
    vlSelf->D__DOT__ADD03__DOT____Vcellout__ADD02__sum 
        = ((8U & (IData)(vlSelf->D__DOT__ADD03__DOT____Vcellout__ADD02__sum)) 
           | ((((IData)(__PVT__D__DOT__ADD03__DOT__ADD02__DOT__p2) 
                ^ (((IData)(__PVT__D__DOT__ADD03__DOT__ADD02__DOT__g1) 
                    | ((IData)(__PVT__D__DOT__ADD03__DOT__ADD02__DOT__p1) 
                       & (IData)(__PVT__D__DOT__ADD03__DOT__ADD02__DOT__g0))) 
                   | (((IData)(__PVT__D__DOT__ADD03__DOT__ADD02__DOT__p1) 
                       & (IData)(__PVT__D__DOT__ADD03__DOT__ADD02__DOT__p0)) 
                      & (IData)(__PVT__D__DOT__ADD03__DOT__ctemp)))) 
               << 2U) | ((((IData)(__PVT__D__DOT__ADD03__DOT__ADD02__DOT__p1) 
                           ^ ((IData)(__PVT__D__DOT__ADD03__DOT__ADD02__DOT__g0) 
                              | ((IData)(__PVT__D__DOT__ADD03__DOT__ADD02__DOT__p0) 
                                 & (IData)(__PVT__D__DOT__ADD03__DOT__ctemp)))) 
                          << 1U) | ((IData)(__PVT__D__DOT__ADD03__DOT__ADD02__DOT__p0) 
                                    ^ (IData)(__PVT__D__DOT__ADD03__DOT__ctemp)))));
    vlSelf->D__DOT__ADD03__DOT____Vcellout__ADD02__sum 
        = ((7U & (IData)(vlSelf->D__DOT__ADD03__DOT____Vcellout__ADD02__sum)) 
           | (((IData)(__PVT__D__DOT__ADD03__DOT__ADD02__DOT__p3) 
               ^ ((((IData)(__PVT__D__DOT__ADD03__DOT__ADD02__DOT__g2) 
                    | ((IData)(__PVT__D__DOT__ADD03__DOT__ADD02__DOT__p2) 
                       & (IData)(__PVT__D__DOT__ADD03__DOT__ADD02__DOT__g1))) 
                   | (((IData)(__PVT__D__DOT__ADD03__DOT__ADD02__DOT__p2) 
                       & (IData)(__PVT__D__DOT__ADD03__DOT__ADD02__DOT__p1)) 
                      & (IData)(__PVT__D__DOT__ADD03__DOT__ADD02__DOT__g0))) 
                  | ((((IData)(__PVT__D__DOT__ADD03__DOT__ADD02__DOT__p2) 
                       & (IData)(__PVT__D__DOT__ADD03__DOT__ADD02__DOT__p1)) 
                      & (IData)(__PVT__D__DOT__ADD03__DOT__ADD02__DOT__p0)) 
                     & (IData)(__PVT__D__DOT__ADD03__DOT__ctemp)))) 
              << 3U));
    if (__PVT__AS__DOT__isE1GreaterThanE2) {
        vlSelf->__PVT__AS__DOT__M1 = (0xffffffU & (
                                                   ((IData)(__PVT__AS__DOT__reduced_or_E1) 
                                                    << 0x17U) 
                                                   | (0x7fffffU 
                                                      & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1)));
        vlSelf->__PVT__AS__DOT__M2 = (0xffffffU & (
                                                   (0x17U 
                                                    >= (IData)(vlSelf->__PVT__AS__DOT__exp_diff))
                                                    ? 
                                                   ((((IData)(__PVT__AS__DOT__reduced_or_E2) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out)) 
                                                    >> (IData)(vlSelf->__PVT__AS__DOT__exp_diff))
                                                    : 0U));
    } else {
        vlSelf->__PVT__AS__DOT__M1 = (0xffffffU & (
                                                   (0x17U 
                                                    >= (IData)(vlSelf->__PVT__AS__DOT__exp_diff))
                                                    ? 
                                                   ((((IData)(__PVT__AS__DOT__reduced_or_E1) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) 
                                                    >> (IData)(vlSelf->__PVT__AS__DOT__exp_diff))
                                                    : 0U));
        vlSelf->__PVT__AS__DOT__M2 = (0xffffffU & (
                                                   ((IData)(__PVT__AS__DOT__reduced_or_E2) 
                                                    << 0x17U) 
                                                   | (0x7fffffU 
                                                      & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out)));
    }
    D__DOT____Vcellout__ADD03__sum = (((IData)(vlSelf->D__DOT__ADD03__DOT____Vcellout__ADD02__sum) 
                                       << 4U) | (IData)(vlSelf->D__DOT__ADD03__DOT____Vcellout__ADD01__sum));
    vlSelf->AS__DOT__C02__DOT____Vcellout__C01__out 
        = ((0xfcU & (IData)(vlSelf->AS__DOT__C02__DOT____Vcellout__C01__out)) 
           | ((2U & ((~ (vlSelf->__PVT__AS__DOT__M2 
                         >> 1U)) << 1U)) | (1U & (~ vlSelf->__PVT__AS__DOT__M2))));
    vlSelf->AS__DOT__C02__DOT____Vcellout__C01__out 
        = ((0xf3U & (IData)(vlSelf->AS__DOT__C02__DOT____Vcellout__C01__out)) 
           | ((8U & ((~ (vlSelf->__PVT__AS__DOT__M2 
                         >> 3U)) << 3U)) | (4U & ((~ 
                                                   (vlSelf->__PVT__AS__DOT__M2 
                                                    >> 2U)) 
                                                  << 2U))));
    vlSelf->AS__DOT__C02__DOT____Vcellout__C01__out 
        = ((0xcfU & (IData)(vlSelf->AS__DOT__C02__DOT____Vcellout__C01__out)) 
           | ((0x20U & ((~ (vlSelf->__PVT__AS__DOT__M2 
                            >> 5U)) << 5U)) | (0x10U 
                                               & ((~ 
                                                   (vlSelf->__PVT__AS__DOT__M2 
                                                    >> 4U)) 
                                                  << 4U))));
    vlSelf->AS__DOT__C02__DOT____Vcellout__C01__out 
        = ((0x3fU & (IData)(vlSelf->AS__DOT__C02__DOT____Vcellout__C01__out)) 
           | ((0x80U & ((~ (vlSelf->__PVT__AS__DOT__M2 
                            >> 7U)) << 7U)) | (0x40U 
                                               & ((~ 
                                                   (vlSelf->__PVT__AS__DOT__M2 
                                                    >> 6U)) 
                                                  << 6U))));
    vlSelf->AS__DOT__C02__DOT____Vcellout__C02__out 
        = ((0xfcU & (IData)(vlSelf->AS__DOT__C02__DOT____Vcellout__C02__out)) 
           | ((2U & ((~ (vlSelf->__PVT__AS__DOT__M2 
                         >> 9U)) << 1U)) | (1U & (~ 
                                                  (vlSelf->__PVT__AS__DOT__M2 
                                                   >> 8U)))));
    vlSelf->AS__DOT__C02__DOT____Vcellout__C02__out 
        = ((0xf3U & (IData)(vlSelf->AS__DOT__C02__DOT____Vcellout__C02__out)) 
           | ((8U & ((~ (vlSelf->__PVT__AS__DOT__M2 
                         >> 0xbU)) << 3U)) | (4U & 
                                              ((~ (vlSelf->__PVT__AS__DOT__M2 
                                                   >> 0xaU)) 
                                               << 2U))));
    vlSelf->AS__DOT__C02__DOT____Vcellout__C02__out 
        = ((0xcfU & (IData)(vlSelf->AS__DOT__C02__DOT____Vcellout__C02__out)) 
           | ((0x20U & ((~ (vlSelf->__PVT__AS__DOT__M2 
                            >> 0xdU)) << 5U)) | (0x10U 
                                                 & ((~ 
                                                     (vlSelf->__PVT__AS__DOT__M2 
                                                      >> 0xcU)) 
                                                    << 4U))));
    vlSelf->AS__DOT__C02__DOT____Vcellout__C02__out 
        = ((0x3fU & (IData)(vlSelf->AS__DOT__C02__DOT____Vcellout__C02__out)) 
           | ((0x80U & ((~ (vlSelf->__PVT__AS__DOT__M2 
                            >> 0xfU)) << 7U)) | (0x40U 
                                                 & ((~ 
                                                     (vlSelf->__PVT__AS__DOT__M2 
                                                      >> 0xeU)) 
                                                    << 6U))));
    vlSelf->AS__DOT__C02__DOT____Vcellout__C03__out 
        = ((0xfcU & (IData)(vlSelf->AS__DOT__C02__DOT____Vcellout__C03__out)) 
           | ((2U & ((~ (vlSelf->__PVT__AS__DOT__M2 
                         >> 0x11U)) << 1U)) | (1U & 
                                               (~ (vlSelf->__PVT__AS__DOT__M2 
                                                   >> 0x10U)))));
    vlSelf->AS__DOT__C02__DOT____Vcellout__C03__out 
        = ((0xf3U & (IData)(vlSelf->AS__DOT__C02__DOT____Vcellout__C03__out)) 
           | ((8U & ((~ (vlSelf->__PVT__AS__DOT__M2 
                         >> 0x13U)) << 3U)) | (4U & 
                                               ((~ 
                                                 (vlSelf->__PVT__AS__DOT__M2 
                                                  >> 0x12U)) 
                                                << 2U))));
    vlSelf->AS__DOT__C02__DOT____Vcellout__C03__out 
        = ((0xcfU & (IData)(vlSelf->AS__DOT__C02__DOT____Vcellout__C03__out)) 
           | ((0x20U & ((~ (vlSelf->__PVT__AS__DOT__M2 
                            >> 0x15U)) << 5U)) | (0x10U 
                                                  & ((~ 
                                                      (vlSelf->__PVT__AS__DOT__M2 
                                                       >> 0x14U)) 
                                                     << 4U))));
    vlSelf->AS__DOT__C02__DOT____Vcellout__C03__out 
        = ((0x3fU & (IData)(vlSelf->AS__DOT__C02__DOT____Vcellout__C03__out)) 
           | ((0x80U & ((~ (vlSelf->__PVT__AS__DOT__M2 
                            >> 0x17U)) << 7U)) | (0x40U 
                                                  & ((~ 
                                                      (vlSelf->__PVT__AS__DOT__M2 
                                                       >> 0x16U)) 
                                                     << 6U))));
    vlSelf->__PVT__D__DOT__temp_E1 = ((0x100U & (((
                                                   ((0xffffff00U 
                                                     & (((IData)(__PVT__D__DOT__bias_added_E) 
                                                         & (IData)(vlSelf->__PVT__D__DOT__complemented_shift_E1)) 
                                                        << 1U)) 
                                                    | (((IData)(__PVT__D__DOT__ADD03__DOT__ADD02__DOT__p3) 
                                                        & (IData)(__PVT__D__DOT__ADD03__DOT__ADD02__DOT__g2)) 
                                                       << 8U)) 
                                                   | ((((IData)(__PVT__D__DOT__ADD03__DOT__ADD02__DOT__p3) 
                                                        & (IData)(__PVT__D__DOT__ADD03__DOT__ADD02__DOT__p2)) 
                                                       & (IData)(__PVT__D__DOT__ADD03__DOT__ADD02__DOT__g1)) 
                                                      << 8U)) 
                                                  | (((((IData)(__PVT__D__DOT__ADD03__DOT__ADD02__DOT__p3) 
                                                        & (IData)(__PVT__D__DOT__ADD03__DOT__ADD02__DOT__p2)) 
                                                       & (IData)(__PVT__D__DOT__ADD03__DOT__ADD02__DOT__p1)) 
                                                      & (IData)(__PVT__D__DOT__ADD03__DOT__ADD02__DOT__g0)) 
                                                     << 8U)) 
                                                 | ((((((IData)(__PVT__D__DOT__ADD03__DOT__ADD02__DOT__p3) 
                                                        & (IData)(__PVT__D__DOT__ADD03__DOT__ADD02__DOT__p2)) 
                                                       & (IData)(__PVT__D__DOT__ADD03__DOT__ADD02__DOT__p1)) 
                                                      & (IData)(__PVT__D__DOT__ADD03__DOT__ADD02__DOT__p0)) 
                                                     & (IData)(__PVT__D__DOT__ADD03__DOT__ctemp)) 
                                                    << 8U))) 
                                      | (IData)(D__DOT____Vcellout__ADD03__sum));
    vlSelf->__PVT__AS__DOT__complemented_M2 = (((IData)(vlSelf->AS__DOT__C02__DOT____Vcellout__C03__out) 
                                                << 0x10U) 
                                               | (((IData)(vlSelf->AS__DOT__C02__DOT____Vcellout__C02__out) 
                                                   << 8U) 
                                                  | (IData)(vlSelf->AS__DOT__C02__DOT____Vcellout__C01__out)));
    __PVT__D__DOT__ADD04__DOT__ADD02__DOT__g2 = (1U 
                                                 & (((IData)(vlSelf->__PVT__D__DOT__temp_E1) 
                                                     & (IData)(__PVT__D__DOT__shift_E2)) 
                                                    >> 6U));
    __PVT__D__DOT__ADD04__DOT__ADD02__DOT__p3 = (1U 
                                                 & (((IData)(vlSelf->__PVT__D__DOT__temp_E1) 
                                                     ^ (IData)(__PVT__D__DOT__shift_E2)) 
                                                    >> 7U));
    __PVT__D__DOT__ADD04__DOT__ADD02__DOT__g0 = (1U 
                                                 & (((IData)(vlSelf->__PVT__D__DOT__temp_E1) 
                                                     & (IData)(__PVT__D__DOT__shift_E2)) 
                                                    >> 4U));
    __PVT__D__DOT__ADD04__DOT__ADD02__DOT__g1 = (1U 
                                                 & (((IData)(vlSelf->__PVT__D__DOT__temp_E1) 
                                                     & (IData)(__PVT__D__DOT__shift_E2)) 
                                                    >> 5U));
    __PVT__D__DOT__ADD04__DOT__ADD02__DOT__p0 = (1U 
                                                 & (((IData)(vlSelf->__PVT__D__DOT__temp_E1) 
                                                     ^ (IData)(__PVT__D__DOT__shift_E2)) 
                                                    >> 4U));
    __PVT__D__DOT__ADD04__DOT__ADD02__DOT__p1 = (1U 
                                                 & (((IData)(vlSelf->__PVT__D__DOT__temp_E1) 
                                                     ^ (IData)(__PVT__D__DOT__shift_E2)) 
                                                    >> 5U));
    __PVT__D__DOT__ADD04__DOT__ADD02__DOT__p2 = (1U 
                                                 & (((IData)(vlSelf->__PVT__D__DOT__temp_E1) 
                                                     ^ (IData)(__PVT__D__DOT__shift_E2)) 
                                                    >> 6U));
    __PVT__D__DOT__ADD04__DOT__ADD01__DOT__g2 = (1U 
                                                 & (((IData)(vlSelf->__PVT__D__DOT__temp_E1) 
                                                     & (IData)(__PVT__D__DOT__shift_E2)) 
                                                    >> 2U));
    __PVT__D__DOT__ADD04__DOT__ADD01__DOT__p3 = (1U 
                                                 & (((IData)(vlSelf->__PVT__D__DOT__temp_E1) 
                                                     ^ (IData)(__PVT__D__DOT__shift_E2)) 
                                                    >> 3U));
    __PVT__D__DOT__ADD04__DOT__ADD01__DOT__g0 = (1U 
                                                 & ((IData)(vlSelf->__PVT__D__DOT__temp_E1) 
                                                    & (IData)(__PVT__D__DOT__shift_E2)));
    __PVT__D__DOT__ADD04__DOT__ADD01__DOT__g1 = (1U 
                                                 & (((IData)(vlSelf->__PVT__D__DOT__temp_E1) 
                                                     & (IData)(__PVT__D__DOT__shift_E2)) 
                                                    >> 1U));
    __PVT__D__DOT__ADD04__DOT__ADD01__DOT__p1 = (1U 
                                                 & (((IData)(vlSelf->__PVT__D__DOT__temp_E1) 
                                                     ^ (IData)(__PVT__D__DOT__shift_E2)) 
                                                    >> 1U));
    __PVT__D__DOT__ADD04__DOT__ADD01__DOT__p2 = (1U 
                                                 & (((IData)(vlSelf->__PVT__D__DOT__temp_E1) 
                                                     ^ (IData)(__PVT__D__DOT__shift_E2)) 
                                                    >> 2U));
    vlSelf->D__DOT__ADD04__DOT____Vcellout__ADD01__sum 
        = ((8U & (IData)(vlSelf->D__DOT__ADD04__DOT____Vcellout__ADD01__sum)) 
           | ((((IData)(__PVT__D__DOT__ADD04__DOT__ADD01__DOT__p2) 
                ^ ((IData)(__PVT__D__DOT__ADD04__DOT__ADD01__DOT__g1) 
                   | ((IData)(__PVT__D__DOT__ADD04__DOT__ADD01__DOT__p1) 
                      & (IData)(__PVT__D__DOT__ADD04__DOT__ADD01__DOT__g0)))) 
               << 2U) | ((((IData)(__PVT__D__DOT__ADD04__DOT__ADD01__DOT__p1) 
                           ^ (IData)(__PVT__D__DOT__ADD04__DOT__ADD01__DOT__g0)) 
                          << 1U) | (1U & ((IData)(vlSelf->__PVT__D__DOT__temp_E1) 
                                          ^ (IData)(__PVT__D__DOT__shift_E2))))));
    vlSelf->D__DOT__ADD04__DOT____Vcellout__ADD01__sum 
        = ((7U & (IData)(vlSelf->D__DOT__ADD04__DOT____Vcellout__ADD01__sum)) 
           | (((IData)(__PVT__D__DOT__ADD04__DOT__ADD01__DOT__p3) 
               ^ (((IData)(__PVT__D__DOT__ADD04__DOT__ADD01__DOT__g2) 
                   | ((IData)(__PVT__D__DOT__ADD04__DOT__ADD01__DOT__p2) 
                      & (IData)(__PVT__D__DOT__ADD04__DOT__ADD01__DOT__g1))) 
                  | (((IData)(__PVT__D__DOT__ADD04__DOT__ADD01__DOT__p2) 
                      & (IData)(__PVT__D__DOT__ADD04__DOT__ADD01__DOT__p1)) 
                     & (IData)(__PVT__D__DOT__ADD04__DOT__ADD01__DOT__g0)))) 
              << 3U));
    __PVT__D__DOT__ADD04__DOT__ctemp = (1U & ((((((IData)(vlSelf->__PVT__D__DOT__temp_E1) 
                                                  & (IData)(__PVT__D__DOT__shift_E2)) 
                                                 >> 3U) 
                                                | ((IData)(__PVT__D__DOT__ADD04__DOT__ADD01__DOT__p3) 
                                                   & (IData)(__PVT__D__DOT__ADD04__DOT__ADD01__DOT__g2))) 
                                               | (((IData)(__PVT__D__DOT__ADD04__DOT__ADD01__DOT__p3) 
                                                   & (IData)(__PVT__D__DOT__ADD04__DOT__ADD01__DOT__p2)) 
                                                  & (IData)(__PVT__D__DOT__ADD04__DOT__ADD01__DOT__g1))) 
                                              | ((((IData)(__PVT__D__DOT__ADD04__DOT__ADD01__DOT__p3) 
                                                   & (IData)(__PVT__D__DOT__ADD04__DOT__ADD01__DOT__p2)) 
                                                  & (IData)(__PVT__D__DOT__ADD04__DOT__ADD01__DOT__p1)) 
                                                 & (IData)(__PVT__D__DOT__ADD04__DOT__ADD01__DOT__g0))));
    vlSelf->D__DOT__ADD04__DOT____Vcellout__ADD02__sum 
        = ((8U & (IData)(vlSelf->D__DOT__ADD04__DOT____Vcellout__ADD02__sum)) 
           | ((((IData)(__PVT__D__DOT__ADD04__DOT__ADD02__DOT__p2) 
                ^ (((IData)(__PVT__D__DOT__ADD04__DOT__ADD02__DOT__g1) 
                    | ((IData)(__PVT__D__DOT__ADD04__DOT__ADD02__DOT__p1) 
                       & (IData)(__PVT__D__DOT__ADD04__DOT__ADD02__DOT__g0))) 
                   | (((IData)(__PVT__D__DOT__ADD04__DOT__ADD02__DOT__p1) 
                       & (IData)(__PVT__D__DOT__ADD04__DOT__ADD02__DOT__p0)) 
                      & (IData)(__PVT__D__DOT__ADD04__DOT__ctemp)))) 
               << 2U) | ((((IData)(__PVT__D__DOT__ADD04__DOT__ADD02__DOT__p1) 
                           ^ ((IData)(__PVT__D__DOT__ADD04__DOT__ADD02__DOT__g0) 
                              | ((IData)(__PVT__D__DOT__ADD04__DOT__ADD02__DOT__p0) 
                                 & (IData)(__PVT__D__DOT__ADD04__DOT__ctemp)))) 
                          << 1U) | ((IData)(__PVT__D__DOT__ADD04__DOT__ADD02__DOT__p0) 
                                    ^ (IData)(__PVT__D__DOT__ADD04__DOT__ctemp)))));
    vlSelf->D__DOT__ADD04__DOT____Vcellout__ADD02__sum 
        = ((7U & (IData)(vlSelf->D__DOT__ADD04__DOT____Vcellout__ADD02__sum)) 
           | (((IData)(__PVT__D__DOT__ADD04__DOT__ADD02__DOT__p3) 
               ^ ((((IData)(__PVT__D__DOT__ADD04__DOT__ADD02__DOT__g2) 
                    | ((IData)(__PVT__D__DOT__ADD04__DOT__ADD02__DOT__p2) 
                       & (IData)(__PVT__D__DOT__ADD04__DOT__ADD02__DOT__g1))) 
                   | (((IData)(__PVT__D__DOT__ADD04__DOT__ADD02__DOT__p2) 
                       & (IData)(__PVT__D__DOT__ADD04__DOT__ADD02__DOT__p1)) 
                      & (IData)(__PVT__D__DOT__ADD04__DOT__ADD02__DOT__g0))) 
                  | ((((IData)(__PVT__D__DOT__ADD04__DOT__ADD02__DOT__p2) 
                       & (IData)(__PVT__D__DOT__ADD04__DOT__ADD02__DOT__p1)) 
                      & (IData)(__PVT__D__DOT__ADD04__DOT__ADD02__DOT__p0)) 
                     & (IData)(__PVT__D__DOT__ADD04__DOT__ctemp)))) 
              << 3U));
    D__DOT____Vcellout__ADD04__sum = (((IData)(vlSelf->D__DOT__ADD04__DOT____Vcellout__ADD02__sum) 
                                       << 4U) | (IData)(vlSelf->D__DOT__ADD04__DOT____Vcellout__ADD01__sum));
    vlSelf->__PVT__D__DOT__temp_E2 = ((0x100U & (((
                                                   ((0xffffff00U 
                                                     & (((IData)(vlSelf->__PVT__D__DOT__temp_E1) 
                                                         & (IData)(__PVT__D__DOT__shift_E2)) 
                                                        << 1U)) 
                                                    | (((IData)(__PVT__D__DOT__ADD04__DOT__ADD02__DOT__p3) 
                                                        & (IData)(__PVT__D__DOT__ADD04__DOT__ADD02__DOT__g2)) 
                                                       << 8U)) 
                                                   | ((((IData)(__PVT__D__DOT__ADD04__DOT__ADD02__DOT__p3) 
                                                        & (IData)(__PVT__D__DOT__ADD04__DOT__ADD02__DOT__p2)) 
                                                       & (IData)(__PVT__D__DOT__ADD04__DOT__ADD02__DOT__g1)) 
                                                      << 8U)) 
                                                  | (((((IData)(__PVT__D__DOT__ADD04__DOT__ADD02__DOT__p3) 
                                                        & (IData)(__PVT__D__DOT__ADD04__DOT__ADD02__DOT__p2)) 
                                                       & (IData)(__PVT__D__DOT__ADD04__DOT__ADD02__DOT__p1)) 
                                                      & (IData)(__PVT__D__DOT__ADD04__DOT__ADD02__DOT__g0)) 
                                                     << 8U)) 
                                                 | ((((((IData)(__PVT__D__DOT__ADD04__DOT__ADD02__DOT__p3) 
                                                        & (IData)(__PVT__D__DOT__ADD04__DOT__ADD02__DOT__p2)) 
                                                       & (IData)(__PVT__D__DOT__ADD04__DOT__ADD02__DOT__p1)) 
                                                      & (IData)(__PVT__D__DOT__ADD04__DOT__ADD02__DOT__p0)) 
                                                     & (IData)(__PVT__D__DOT__ADD04__DOT__ctemp)) 
                                                    << 8U))) 
                                      | (IData)(D__DOT____Vcellout__ADD04__sum));
    vlSelf->D__DOT__ADD05__DOT____Vcellout__ADD01__sum 
        = ((8U & (IData)(vlSelf->D__DOT__ADD05__DOT____Vcellout__ADD01__sum)) 
           | ((4U & (((~ ((IData)(vlSelf->__PVT__D__DOT__temp_E2) 
                          >> 2U)) << 2U) ^ ((0xfffffffcU 
                                             & ((IData)(vlSelf->__PVT__D__DOT__temp_E2) 
                                                << 1U)) 
                                            | ((IData)(
                                                       (1U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->__PVT__D__DOT__temp_E2)))) 
                                               << 2U)))) 
              | ((2U & (((~ ((IData)(vlSelf->__PVT__D__DOT__temp_E2) 
                             >> 1U)) ^ (IData)(vlSelf->__PVT__D__DOT__temp_E2)) 
                        << 1U)) | (1U & (~ (IData)(vlSelf->__PVT__D__DOT__temp_E2))))));
    vlSelf->D__DOT__ADD05__DOT____Vcellout__ADD01__sum 
        = ((7U & (IData)(vlSelf->D__DOT__ADD05__DOT____Vcellout__ADD01__sum)) 
           | (8U & (((~ ((IData)(vlSelf->__PVT__D__DOT__temp_E2) 
                         >> 3U)) << 3U) ^ (((0xfffffff8U 
                                             & ((IData)(vlSelf->__PVT__D__DOT__temp_E2) 
                                                << 1U)) 
                                            | ((IData)(
                                                       (2U 
                                                        == 
                                                        (6U 
                                                         & (IData)(vlSelf->__PVT__D__DOT__temp_E2)))) 
                                               << 3U)) 
                                           | ((IData)(
                                                      (1U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->__PVT__D__DOT__temp_E2)))) 
                                              << 3U)))));
    __PVT__D__DOT__ADD05__DOT__ctemp = (1U & (((((IData)(vlSelf->__PVT__D__DOT__temp_E2) 
                                                 >> 3U) 
                                                | (IData)(
                                                          (4U 
                                                           == 
                                                           (0xcU 
                                                            & (IData)(vlSelf->__PVT__D__DOT__temp_E2))))) 
                                               | (IData)(
                                                         (2U 
                                                          == 
                                                          (0xeU 
                                                           & (IData)(vlSelf->__PVT__D__DOT__temp_E2))))) 
                                              | (IData)(
                                                        (1U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->__PVT__D__DOT__temp_E2))))));
    vlSelf->D__DOT__ADD05__DOT____Vcellout__ADD02__sum 
        = ((8U & (IData)(vlSelf->D__DOT__ADD05__DOT____Vcellout__ADD02__sum)) 
           | ((4U & (((~ ((IData)(vlSelf->__PVT__D__DOT__temp_E2) 
                          >> 6U)) << 2U) ^ (((0x1ffffffcU 
                                              & ((IData)(vlSelf->__PVT__D__DOT__temp_E2) 
                                                 >> 3U)) 
                                             | ((IData)(
                                                        (0x10U 
                                                         == 
                                                         (0x30U 
                                                          & (IData)(vlSelf->__PVT__D__DOT__temp_E2)))) 
                                                << 2U)) 
                                            | (((IData)(
                                                        (0U 
                                                         == 
                                                         (0x30U 
                                                          & (IData)(vlSelf->__PVT__D__DOT__temp_E2)))) 
                                                & (IData)(__PVT__D__DOT__ADD05__DOT__ctemp)) 
                                               << 2U)))) 
              | ((2U & (((~ ((IData)(vlSelf->__PVT__D__DOT__temp_E2) 
                             >> 5U)) << 1U) ^ ((0x1ffffffeU 
                                                & ((IData)(vlSelf->__PVT__D__DOT__temp_E2) 
                                                   >> 3U)) 
                                               | (((~ 
                                                    ((IData)(vlSelf->__PVT__D__DOT__temp_E2) 
                                                     >> 4U)) 
                                                   & (IData)(__PVT__D__DOT__ADD05__DOT__ctemp)) 
                                                  << 1U)))) 
                 | (1U & ((~ ((IData)(vlSelf->__PVT__D__DOT__temp_E2) 
                              >> 4U)) ^ (IData)(__PVT__D__DOT__ADD05__DOT__ctemp))))));
    vlSelf->D__DOT__ADD05__DOT____Vcellout__ADD02__sum 
        = ((7U & (IData)(vlSelf->D__DOT__ADD05__DOT____Vcellout__ADD02__sum)) 
           | (8U & (((~ ((IData)(vlSelf->__PVT__D__DOT__temp_E2) 
                         >> 7U)) << 3U) ^ ((((0x1ffffff8U 
                                              & ((IData)(vlSelf->__PVT__D__DOT__temp_E2) 
                                                 >> 3U)) 
                                             | ((IData)(
                                                        (0x20U 
                                                         == 
                                                         (0x60U 
                                                          & (IData)(vlSelf->__PVT__D__DOT__temp_E2)))) 
                                                << 3U)) 
                                            | ((IData)(
                                                       (0x10U 
                                                        == 
                                                        (0x70U 
                                                         & (IData)(vlSelf->__PVT__D__DOT__temp_E2)))) 
                                               << 3U)) 
                                           | (((IData)(
                                                       (0U 
                                                        == 
                                                        (0x70U 
                                                         & (IData)(vlSelf->__PVT__D__DOT__temp_E2)))) 
                                               & (IData)(__PVT__D__DOT__ADD05__DOT__ctemp)) 
                                              << 3U)))));
    D__DOT____Vcellout__ADD05__sum = (((IData)(vlSelf->D__DOT__ADD05__DOT____Vcellout__ADD02__sum) 
                                       << 4U) | (IData)(vlSelf->D__DOT__ADD05__DOT____Vcellout__ADD01__sum));
    vlSelf->__PVT__D__DOT__temp_E3 = ((0x100U & (((
                                                   ((0xffffff00U 
                                                     & ((IData)(vlSelf->__PVT__D__DOT__temp_E2) 
                                                        << 1U)) 
                                                    | ((IData)(
                                                               (0x40U 
                                                                == 
                                                                (0xc0U 
                                                                 & (IData)(vlSelf->__PVT__D__DOT__temp_E2)))) 
                                                       << 8U)) 
                                                   | ((IData)(
                                                              (0x20U 
                                                               == 
                                                               (0xe0U 
                                                                & (IData)(vlSelf->__PVT__D__DOT__temp_E2)))) 
                                                      << 8U)) 
                                                  | ((IData)(
                                                             (0x10U 
                                                              == 
                                                              (0xf0U 
                                                               & (IData)(vlSelf->__PVT__D__DOT__temp_E2)))) 
                                                     << 8U)) 
                                                 | (((IData)(
                                                             (0U 
                                                              == 
                                                              (0xf0U 
                                                               & (IData)(vlSelf->__PVT__D__DOT__temp_E2)))) 
                                                     & (IData)(__PVT__D__DOT__ADD05__DOT__ctemp)) 
                                                    << 8U))) 
                                      | (IData)(D__DOT____Vcellout__ADD05__sum));
    vlSelf->__PVT__D__DOT__final_E = ((0xfeU & (IData)(vlSelf->__PVT__D__DOT__final_E)) 
                                      | (1U & (((IData)(vlSelf->__PVT__D__DOT__temp_E3) 
                                                & (~ (IData)(
                                                             (vlSelf->__PVT__D__DOT__DIV01__DOT__div_temp 
                                                              >> 0x18U)))) 
                                               | ((IData)(vlSelf->__PVT__D__DOT__temp_E2) 
                                                  & (IData)(
                                                            (vlSelf->__PVT__D__DOT__DIV01__DOT__div_temp 
                                                             >> 0x18U))))));
    vlSelf->__PVT__D__DOT__final_E = ((0xfdU & (IData)(vlSelf->__PVT__D__DOT__final_E)) 
                                      | (2U & (((IData)(vlSelf->__PVT__D__DOT__temp_E3) 
                                                & ((~ (IData)(
                                                              (vlSelf->__PVT__D__DOT__DIV01__DOT__div_temp 
                                                               >> 0x18U))) 
                                                   << 1U)) 
                                               | ((IData)(vlSelf->__PVT__D__DOT__temp_E2) 
                                                  & ((IData)(
                                                             (vlSelf->__PVT__D__DOT__DIV01__DOT__div_temp 
                                                              >> 0x18U)) 
                                                     << 1U)))));
    vlSelf->__PVT__D__DOT__final_E = ((0xfbU & (IData)(vlSelf->__PVT__D__DOT__final_E)) 
                                      | (4U & (((IData)(vlSelf->__PVT__D__DOT__temp_E3) 
                                                & ((~ (IData)(
                                                              (vlSelf->__PVT__D__DOT__DIV01__DOT__div_temp 
                                                               >> 0x18U))) 
                                                   << 2U)) 
                                               | ((IData)(vlSelf->__PVT__D__DOT__temp_E2) 
                                                  & ((IData)(
                                                             (vlSelf->__PVT__D__DOT__DIV01__DOT__div_temp 
                                                              >> 0x18U)) 
                                                     << 2U)))));
    vlSelf->__PVT__D__DOT__final_E = ((0xf7U & (IData)(vlSelf->__PVT__D__DOT__final_E)) 
                                      | (8U & (((IData)(vlSelf->__PVT__D__DOT__temp_E3) 
                                                & ((~ (IData)(
                                                              (vlSelf->__PVT__D__DOT__DIV01__DOT__div_temp 
                                                               >> 0x18U))) 
                                                   << 3U)) 
                                               | ((IData)(vlSelf->__PVT__D__DOT__temp_E2) 
                                                  & ((IData)(
                                                             (vlSelf->__PVT__D__DOT__DIV01__DOT__div_temp 
                                                              >> 0x18U)) 
                                                     << 3U)))));
    vlSelf->__PVT__D__DOT__final_E = ((0xefU & (IData)(vlSelf->__PVT__D__DOT__final_E)) 
                                      | (0x10U & (((IData)(vlSelf->__PVT__D__DOT__temp_E3) 
                                                   & ((~ (IData)(
                                                                 (vlSelf->__PVT__D__DOT__DIV01__DOT__div_temp 
                                                                  >> 0x18U))) 
                                                      << 4U)) 
                                                  | ((IData)(vlSelf->__PVT__D__DOT__temp_E2) 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__D__DOT__DIV01__DOT__div_temp 
                                                                 >> 0x18U)) 
                                                        << 4U)))));
    vlSelf->__PVT__D__DOT__final_E = ((0xdfU & (IData)(vlSelf->__PVT__D__DOT__final_E)) 
                                      | (0x20U & (((IData)(vlSelf->__PVT__D__DOT__temp_E3) 
                                                   & ((~ (IData)(
                                                                 (vlSelf->__PVT__D__DOT__DIV01__DOT__div_temp 
                                                                  >> 0x18U))) 
                                                      << 5U)) 
                                                  | ((IData)(vlSelf->__PVT__D__DOT__temp_E2) 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__D__DOT__DIV01__DOT__div_temp 
                                                                 >> 0x18U)) 
                                                        << 5U)))));
    vlSelf->__PVT__D__DOT__final_E = ((0xbfU & (IData)(vlSelf->__PVT__D__DOT__final_E)) 
                                      | (0x40U & (((IData)(vlSelf->__PVT__D__DOT__temp_E3) 
                                                   & ((~ (IData)(
                                                                 (vlSelf->__PVT__D__DOT__DIV01__DOT__div_temp 
                                                                  >> 0x18U))) 
                                                      << 6U)) 
                                                  | ((IData)(vlSelf->__PVT__D__DOT__temp_E2) 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__D__DOT__DIV01__DOT__div_temp 
                                                                 >> 0x18U)) 
                                                        << 6U)))));
    vlSelf->__PVT__D__DOT__final_E = ((0x7fU & (IData)(vlSelf->__PVT__D__DOT__final_E)) 
                                      | (0x80U & (((IData)(vlSelf->__PVT__D__DOT__temp_E3) 
                                                   & ((~ (IData)(
                                                                 (vlSelf->__PVT__D__DOT__DIV01__DOT__div_temp 
                                                                  >> 0x18U))) 
                                                      << 7U)) 
                                                  | ((IData)(vlSelf->__PVT__D__DOT__temp_E2) 
                                                     & ((IData)(
                                                                (vlSelf->__PVT__D__DOT__DIV01__DOT__div_temp 
                                                                 >> 0x18U)) 
                                                        << 7U)))));
}
