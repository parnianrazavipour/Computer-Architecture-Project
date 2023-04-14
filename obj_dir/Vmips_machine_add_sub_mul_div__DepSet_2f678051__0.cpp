// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmips_machine.h for the primary calling header

#include "verilated.h"

#include "Vmips_machine_Mux_24Bit.h"
#include "Vmips_machine__Syms.h"
#include "Vmips_machine_add_sub_mul_div.h"

VL_INLINE_OPT void Vmips_machine_add_sub_mul_div___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__8(Vmips_machine_add_sub_mul_div* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmips_machine_add_sub_mul_div___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__8\n"); );
    // Init
    CData/*0:0*/ AS__DOT____Vcellinp__M031__sl;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ctemp1;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ctemp2;
    CData/*7:0*/ AS__DOT__ADD02__DOT____Vcellout__ADD01__sum;
    CData/*7:0*/ AS__DOT__ADD02__DOT____Vcellout__ADD02__sum;
    CData/*7:0*/ AS__DOT__ADD02__DOT____Vcellout__ADD03__sum;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ctemp;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__g0;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__g1;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__g2;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p0;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p1;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p2;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p3;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__g0;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__g1;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__g2;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p0;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p1;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p2;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p3;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ctemp;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__g0;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__g1;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__g2;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p0;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p1;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p2;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p3;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__g0;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__g1;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__g2;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p0;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p1;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p2;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p3;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ctemp;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__g0;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__g1;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__g2;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p0;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p1;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p2;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p3;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__g0;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__g1;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__g2;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p0;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p1;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p2;
    CData/*0:0*/ __PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p3;
    IData/*23:0*/ __PVT__AS__DOT__C03__DOT__outtemp;
    CData/*0:0*/ __PVT__AS__DOT__C03__DOT__ADD01__DOT__ctemp1;
    CData/*0:0*/ __PVT__AS__DOT__C03__DOT__ADD01__DOT__ctemp2;
    CData/*7:0*/ AS__DOT__C03__DOT__ADD01__DOT____Vcellout__ADD01__sum;
    CData/*7:0*/ AS__DOT__C03__DOT__ADD01__DOT____Vcellout__ADD02__sum;
    CData/*7:0*/ AS__DOT__C03__DOT__ADD01__DOT____Vcellout__ADD03__sum;
    CData/*0:0*/ __PVT__AS__DOT__C03__DOT__ADD01__DOT__ADD01__DOT__ctemp;
    CData/*0:0*/ __PVT__AS__DOT__C03__DOT__ADD01__DOT__ADD02__DOT__ctemp;
    CData/*0:0*/ __PVT__AS__DOT__C03__DOT__ADD01__DOT__ADD03__DOT__ctemp;
    IData/*23:0*/ M__DOT____Vcellout__ADD23__sum;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ctemp1;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ctemp2;
    CData/*7:0*/ M__DOT__ADD23__DOT____Vcellout__ADD01__sum;
    CData/*7:0*/ M__DOT__ADD23__DOT____Vcellout__ADD02__sum;
    CData/*7:0*/ M__DOT__ADD23__DOT____Vcellout__ADD03__sum;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD01__DOT__ctemp;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__g0;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__g1;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__g2;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__p1;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__p2;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__p3;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__g0;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__g1;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__g2;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p0;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p1;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p2;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p3;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD02__DOT__ctemp;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__g0;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__g1;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__g2;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p0;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p1;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p2;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p3;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__g0;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__g1;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__g2;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p0;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p1;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p2;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p3;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD03__DOT__ctemp;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__g0;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__g1;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__g2;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p0;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p1;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p2;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p3;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__g0;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__g1;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__p0;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__p1;
    CData/*0:0*/ __PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__p2;
    // Body
    __PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__g0 
        = (1U & ((vlSelf->__PVT__M__DOT__M02->__PVT__out 
                  & (IData)(vlSelf->__PVT__M__DOT__final_product_round)) 
                 >> 0x14U));
    __PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__g1 
        = (1U & ((vlSelf->__PVT__M__DOT__M02->__PVT__out 
                  & (IData)(vlSelf->__PVT__M__DOT__final_product_round)) 
                 >> 0x15U));
    __PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__p0 
        = (1U & ((7U & (vlSelf->__PVT__M__DOT__M02->__PVT__out 
                        >> 0x14U)) ^ ((IData)(vlSelf->__PVT__M__DOT__final_product_round) 
                                      >> 0x14U)));
    __PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__p1 
        = (1U & ((3U & (vlSelf->__PVT__M__DOT__M02->__PVT__out 
                        >> 0x15U)) ^ ((IData)(vlSelf->__PVT__M__DOT__final_product_round) 
                                      >> 0x15U)));
    __PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__p2 
        = (1U & ((1U & (vlSelf->__PVT__M__DOT__M02->__PVT__out 
                        >> 0x16U)) ^ ((IData)(vlSelf->__PVT__M__DOT__final_product_round) 
                                      >> 0x16U)));
    __PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__g2 
        = (1U & ((vlSelf->__PVT__M__DOT__M02->__PVT__out 
                  & (IData)(vlSelf->__PVT__M__DOT__final_product_round)) 
                 >> 0x12U));
    __PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p3 
        = (1U & ((0xfU & (vlSelf->__PVT__M__DOT__M02->__PVT__out 
                          >> 0x13U)) ^ ((IData)(vlSelf->__PVT__M__DOT__final_product_round) 
                                        >> 0x13U)));
    __PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__g0 
        = (1U & ((vlSelf->__PVT__M__DOT__M02->__PVT__out 
                  & (IData)(vlSelf->__PVT__M__DOT__final_product_round)) 
                 >> 0x10U));
    __PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__g1 
        = (1U & ((vlSelf->__PVT__M__DOT__M02->__PVT__out 
                  & (IData)(vlSelf->__PVT__M__DOT__final_product_round)) 
                 >> 0x11U));
    __PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p0 
        = (1U & ((0x7fU & (vlSelf->__PVT__M__DOT__M02->__PVT__out 
                           >> 0x10U)) ^ ((IData)(vlSelf->__PVT__M__DOT__final_product_round) 
                                         >> 0x10U)));
    __PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p1 
        = (1U & ((0x3fU & (vlSelf->__PVT__M__DOT__M02->__PVT__out 
                           >> 0x11U)) ^ ((IData)(vlSelf->__PVT__M__DOT__final_product_round) 
                                         >> 0x11U)));
    __PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p2 
        = (1U & ((0x1fU & (vlSelf->__PVT__M__DOT__M02->__PVT__out 
                           >> 0x12U)) ^ ((IData)(vlSelf->__PVT__M__DOT__final_product_round) 
                                         >> 0x12U)));
    __PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__g2 
        = (1U & ((vlSelf->__PVT__M__DOT__M02->__PVT__out 
                  & (IData)(vlSelf->__PVT__M__DOT__final_product_round)) 
                 >> 0xeU));
    __PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p3 
        = (1U & ((0xffU & (vlSelf->__PVT__M__DOT__M02->__PVT__out 
                           >> 0xfU)) ^ ((IData)(vlSelf->__PVT__M__DOT__final_product_round) 
                                        >> 0xfU)));
    __PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__g0 
        = (1U & ((vlSelf->__PVT__M__DOT__M02->__PVT__out 
                  & (IData)(vlSelf->__PVT__M__DOT__final_product_round)) 
                 >> 0xcU));
    __PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__g1 
        = (1U & ((vlSelf->__PVT__M__DOT__M02->__PVT__out 
                  & (IData)(vlSelf->__PVT__M__DOT__final_product_round)) 
                 >> 0xdU));
    __PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p0 
        = (1U & ((0x7ffU & (vlSelf->__PVT__M__DOT__M02->__PVT__out 
                            >> 0xcU)) ^ ((IData)(vlSelf->__PVT__M__DOT__final_product_round) 
                                         >> 0xcU)));
    __PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p1 
        = (1U & ((0x3ffU & (vlSelf->__PVT__M__DOT__M02->__PVT__out 
                            >> 0xdU)) ^ ((IData)(vlSelf->__PVT__M__DOT__final_product_round) 
                                         >> 0xdU)));
    __PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p2 
        = (1U & ((0x1ffU & (vlSelf->__PVT__M__DOT__M02->__PVT__out 
                            >> 0xeU)) ^ ((IData)(vlSelf->__PVT__M__DOT__final_product_round) 
                                         >> 0xeU)));
    __PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__g2 
        = (1U & ((vlSelf->__PVT__M__DOT__M02->__PVT__out 
                  & (IData)(vlSelf->__PVT__M__DOT__final_product_round)) 
                 >> 0xaU));
    __PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p3 
        = (1U & ((0xfffU & (vlSelf->__PVT__M__DOT__M02->__PVT__out 
                            >> 0xbU)) ^ ((IData)(vlSelf->__PVT__M__DOT__final_product_round) 
                                         >> 0xbU)));
    __PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__g0 
        = (1U & ((vlSelf->__PVT__M__DOT__M02->__PVT__out 
                  & (IData)(vlSelf->__PVT__M__DOT__final_product_round)) 
                 >> 8U));
    __PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__g1 
        = (1U & ((vlSelf->__PVT__M__DOT__M02->__PVT__out 
                  & (IData)(vlSelf->__PVT__M__DOT__final_product_round)) 
                 >> 9U));
    __PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p0 
        = (1U & ((0x7fffU & (vlSelf->__PVT__M__DOT__M02->__PVT__out 
                             >> 8U)) ^ ((IData)(vlSelf->__PVT__M__DOT__final_product_round) 
                                        >> 8U)));
    __PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p1 
        = (1U & ((0x3fffU & (vlSelf->__PVT__M__DOT__M02->__PVT__out 
                             >> 9U)) ^ ((IData)(vlSelf->__PVT__M__DOT__final_product_round) 
                                        >> 9U)));
    __PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p2 
        = (1U & ((0x1fffU & (vlSelf->__PVT__M__DOT__M02->__PVT__out 
                             >> 0xaU)) ^ ((IData)(vlSelf->__PVT__M__DOT__final_product_round) 
                                          >> 0xaU)));
    __PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__g2 
        = (1U & ((vlSelf->__PVT__M__DOT__M02->__PVT__out 
                  & (IData)(vlSelf->__PVT__M__DOT__final_product_round)) 
                 >> 6U));
    __PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p3 
        = (1U & ((0xffffU & (vlSelf->__PVT__M__DOT__M02->__PVT__out 
                             >> 7U)) ^ ((IData)(vlSelf->__PVT__M__DOT__final_product_round) 
                                        >> 7U)));
    __PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__g0 
        = (1U & ((vlSelf->__PVT__M__DOT__M02->__PVT__out 
                  & (IData)(vlSelf->__PVT__M__DOT__final_product_round)) 
                 >> 4U));
    __PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__g1 
        = (1U & ((vlSelf->__PVT__M__DOT__M02->__PVT__out 
                  & (IData)(vlSelf->__PVT__M__DOT__final_product_round)) 
                 >> 5U));
    __PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p0 
        = (1U & ((0x7ffffU & (vlSelf->__PVT__M__DOT__M02->__PVT__out 
                              >> 4U)) ^ ((IData)(vlSelf->__PVT__M__DOT__final_product_round) 
                                         >> 4U)));
    __PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p1 
        = (1U & ((0x3ffffU & (vlSelf->__PVT__M__DOT__M02->__PVT__out 
                              >> 5U)) ^ ((IData)(vlSelf->__PVT__M__DOT__final_product_round) 
                                         >> 5U)));
    __PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p2 
        = (1U & ((0x1ffffU & (vlSelf->__PVT__M__DOT__M02->__PVT__out 
                              >> 6U)) ^ ((IData)(vlSelf->__PVT__M__DOT__final_product_round) 
                                         >> 6U)));
    __PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__g2 
        = (1U & ((vlSelf->__PVT__M__DOT__M02->__PVT__out 
                  & (IData)(vlSelf->__PVT__M__DOT__final_product_round)) 
                 >> 2U));
    __PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__p3 
        = (1U & ((0xfffffU & (vlSelf->__PVT__M__DOT__M02->__PVT__out 
                              >> 3U)) ^ ((IData)(vlSelf->__PVT__M__DOT__final_product_round) 
                                         >> 3U)));
    __PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__g0 
        = (0x7fffffU & (vlSelf->__PVT__M__DOT__M02->__PVT__out 
                        & (IData)(vlSelf->__PVT__M__DOT__final_product_round)));
    __PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__g1 
        = (1U & ((vlSelf->__PVT__M__DOT__M02->__PVT__out 
                  & (IData)(vlSelf->__PVT__M__DOT__final_product_round)) 
                 >> 1U));
    __PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__p1 
        = (1U & ((0x3fffffU & (vlSelf->__PVT__M__DOT__M02->__PVT__out 
                               >> 1U)) ^ ((IData)(vlSelf->__PVT__M__DOT__final_product_round) 
                                          >> 1U)));
    __PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__p2 
        = (1U & ((0x1fffffU & (vlSelf->__PVT__M__DOT__M02->__PVT__out 
                               >> 2U)) ^ ((IData)(vlSelf->__PVT__M__DOT__final_product_round) 
                                          >> 2U)));
    vlSelf->__PVT__result3 = ((0x80000000U & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                              ^ vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out)) 
                              | (((IData)(vlSelf->__PVT__D__DOT__final_E) 
                                  << 0x17U) | (0x7fffffU 
                                               & vlSelf->__PVT__D__DOT__M02->__PVT__out)));
    __PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__g2 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 & vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 0x16U));
    __PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p3 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 ^ vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 0x17U));
    __PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__g0 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 & vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 0x14U));
    __PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__g1 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 & vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 0x15U));
    __PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p0 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 ^ vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 0x14U));
    __PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p1 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 ^ vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 0x15U));
    __PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p2 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 ^ vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 0x16U));
    __PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__g2 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 & vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 0x12U));
    __PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p3 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 ^ vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 0x13U));
    __PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__g0 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 & vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 0x10U));
    __PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__g1 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 & vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 0x11U));
    __PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p0 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 ^ vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 0x10U));
    __PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p1 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 ^ vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 0x11U));
    __PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p2 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 ^ vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 0x12U));
    __PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__g2 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 & vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 0xeU));
    __PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p3 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 ^ vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 0xfU));
    __PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__g0 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 & vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 0xcU));
    __PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__g1 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 & vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 0xdU));
    __PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p0 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 ^ vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 0xcU));
    __PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p1 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 ^ vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 0xdU));
    __PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p2 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 ^ vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 0xeU));
    __PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__g2 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 & vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 0xaU));
    __PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p3 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 ^ vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 0xbU));
    __PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__g0 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 & vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 8U));
    __PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__g1 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 & vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 9U));
    __PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p0 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 ^ vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 8U));
    __PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p1 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 ^ vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 9U));
    __PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p2 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 ^ vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 0xaU));
    __PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__g2 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 & vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 6U));
    __PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p3 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 ^ vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 7U));
    __PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__g0 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 & vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 4U));
    __PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__g1 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 & vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 5U));
    __PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p0 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 ^ vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 4U));
    __PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p1 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 ^ vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 5U));
    __PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p2 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 ^ vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 6U));
    __PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__g2 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 & vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 2U));
    __PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p3 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 ^ vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 3U));
    __PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__g0 
        = (1U & (vlSelf->__PVT__AS__DOT__M1 & vlSelf->__PVT__AS__DOT__M04->__PVT__out));
    __PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__g1 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 & vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 1U));
    __PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p0 
        = (1U & (vlSelf->__PVT__AS__DOT__M1 ^ vlSelf->__PVT__AS__DOT__M04->__PVT__out));
    __PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p1 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 ^ vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 1U));
    __PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p2 
        = (1U & ((vlSelf->__PVT__AS__DOT__M1 ^ vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                 >> 2U));
    vlSelf->M__DOT__ADD23__DOT__ADD01__DOT____Vcellout__ADD01__sum 
        = ((8U & (IData)(vlSelf->M__DOT__ADD23__DOT__ADD01__DOT____Vcellout__ADD01__sum)) 
           | ((((IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__p2) 
                ^ ((IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__g1) 
                   | ((IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__p1) 
                      & (IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__g0)))) 
               << 2U) | ((((IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__p1) 
                           ^ (IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__g0)) 
                          << 1U) | (1U & ((0x7fffffU 
                                           & vlSelf->__PVT__M__DOT__M02->__PVT__out) 
                                          ^ (IData)(vlSelf->__PVT__M__DOT__final_product_round))))));
    vlSelf->M__DOT__ADD23__DOT__ADD01__DOT____Vcellout__ADD01__sum 
        = ((7U & (IData)(vlSelf->M__DOT__ADD23__DOT__ADD01__DOT____Vcellout__ADD01__sum)) 
           | (((IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__p3) 
               ^ (((IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__g2) 
                   | ((IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__p2) 
                      & (IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__g1))) 
                  | (((IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__p2) 
                      & (IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__p1)) 
                     & (IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__g0)))) 
              << 3U));
    __PVT__M__DOT__ADD23__DOT__ADD01__DOT__ctemp = 
        (1U & ((((0xfffffU & ((vlSelf->__PVT__M__DOT__M02->__PVT__out 
                               & (IData)(vlSelf->__PVT__M__DOT__final_product_round)) 
                              >> 3U)) | ((IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__p3) 
                                         & (IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__g2))) 
                | (((IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__p3) 
                    & (IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__p2)) 
                   & (IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__g1))) 
               | ((((IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__p3) 
                    & (IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__p2)) 
                   & (IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__p1)) 
                  & (IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__g0))));
    vlSelf->AS__DOT__ADD02__DOT__ADD01__DOT____Vcellout__ADD01__sum 
        = ((8U & (IData)(vlSelf->AS__DOT__ADD02__DOT__ADD01__DOT____Vcellout__ADD01__sum)) 
           | ((((IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p2) 
                ^ (((IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__g1) 
                    | ((IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p1) 
                       & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__g0))) 
                   | (((IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p1) 
                       & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p0)) 
                      & (IData)(vlSelf->__PVT__AS__DOT__real_oper)))) 
               << 2U) | ((((IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p1) 
                           ^ ((IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__g0) 
                              | ((IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p0) 
                                 & (IData)(vlSelf->__PVT__AS__DOT__real_oper)))) 
                          << 1U) | ((IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p0) 
                                    ^ (IData)(vlSelf->__PVT__AS__DOT__real_oper)))));
    vlSelf->AS__DOT__ADD02__DOT__ADD01__DOT____Vcellout__ADD01__sum 
        = ((7U & (IData)(vlSelf->AS__DOT__ADD02__DOT__ADD01__DOT____Vcellout__ADD01__sum)) 
           | (((IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p3) 
               ^ ((((IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__g2) 
                    | ((IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p2) 
                       & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__g1))) 
                   | (((IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p2) 
                       & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p1)) 
                      & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__g0))) 
                  | ((((IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p2) 
                       & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p1)) 
                      & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p0)) 
                     & (IData)(vlSelf->__PVT__AS__DOT__real_oper)))) 
              << 3U));
    __PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ctemp = 
        (1U & ((((((vlSelf->__PVT__AS__DOT__M1 & vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                   >> 3U) | ((IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p3) 
                             & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__g2))) 
                 | (((IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p3) 
                     & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p2)) 
                    & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__g1))) 
                | ((((IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p3) 
                     & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p2)) 
                    & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p1)) 
                   & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__g0))) 
               | (((((IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p3) 
                     & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p2)) 
                    & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p1)) 
                   & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p0)) 
                  & (IData)(vlSelf->__PVT__AS__DOT__real_oper))));
    vlSelf->M__DOT__ADD23__DOT__ADD01__DOT____Vcellout__ADD02__sum 
        = ((8U & (IData)(vlSelf->M__DOT__ADD23__DOT__ADD01__DOT____Vcellout__ADD02__sum)) 
           | ((((IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p2) 
                ^ (((IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__g1) 
                    | ((IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p1) 
                       & (IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__g0))) 
                   | (((IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p1) 
                       & (IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p0)) 
                      & (IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ctemp)))) 
               << 2U) | ((((IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p1) 
                           ^ ((IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__g0) 
                              | ((IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p0) 
                                 & (IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ctemp)))) 
                          << 1U) | ((IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p0) 
                                    ^ (IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ctemp)))));
    vlSelf->M__DOT__ADD23__DOT__ADD01__DOT____Vcellout__ADD02__sum 
        = ((7U & (IData)(vlSelf->M__DOT__ADD23__DOT__ADD01__DOT____Vcellout__ADD02__sum)) 
           | (((IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p3) 
               ^ ((((IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__g2) 
                    | ((IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p2) 
                       & (IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__g1))) 
                   | (((IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p2) 
                       & (IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p1)) 
                      & (IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__g0))) 
                  | ((((IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p2) 
                       & (IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p1)) 
                      & (IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p0)) 
                     & (IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ctemp)))) 
              << 3U));
    __PVT__M__DOT__ADD23__DOT__ctemp1 = (1U & (((((0xffffU 
                                                   & ((vlSelf->__PVT__M__DOT__M02->__PVT__out 
                                                       & (IData)(vlSelf->__PVT__M__DOT__final_product_round)) 
                                                      >> 7U)) 
                                                  | ((IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p3) 
                                                     & (IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__g2))) 
                                                 | (((IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p3) 
                                                     & (IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p2)) 
                                                    & (IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__g1))) 
                                                | ((((IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p3) 
                                                     & (IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p2)) 
                                                    & (IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p1)) 
                                                   & (IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__g0))) 
                                               | (((((IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p3) 
                                                     & (IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p2)) 
                                                    & (IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p1)) 
                                                   & (IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p0)) 
                                                  & (IData)(__PVT__M__DOT__ADD23__DOT__ADD01__DOT__ctemp))));
    vlSelf->AS__DOT__ADD02__DOT__ADD01__DOT____Vcellout__ADD02__sum 
        = ((8U & (IData)(vlSelf->AS__DOT__ADD02__DOT__ADD01__DOT____Vcellout__ADD02__sum)) 
           | ((((IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p2) 
                ^ (((IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__g1) 
                    | ((IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p1) 
                       & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__g0))) 
                   | (((IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p1) 
                       & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p0)) 
                      & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ctemp)))) 
               << 2U) | ((((IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p1) 
                           ^ ((IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__g0) 
                              | ((IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p0) 
                                 & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ctemp)))) 
                          << 1U) | ((IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p0) 
                                    ^ (IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ctemp)))));
    vlSelf->AS__DOT__ADD02__DOT__ADD01__DOT____Vcellout__ADD02__sum 
        = ((7U & (IData)(vlSelf->AS__DOT__ADD02__DOT__ADD01__DOT____Vcellout__ADD02__sum)) 
           | (((IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p3) 
               ^ ((((IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__g2) 
                    | ((IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p2) 
                       & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__g1))) 
                   | (((IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p2) 
                       & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p1)) 
                      & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__g0))) 
                  | ((((IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p2) 
                       & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p1)) 
                      & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p0)) 
                     & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ctemp)))) 
              << 3U));
    __PVT__AS__DOT__ADD02__DOT__ctemp1 = (1U & ((((
                                                   ((vlSelf->__PVT__AS__DOT__M1 
                                                     & vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                                                    >> 7U) 
                                                   | ((IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p3) 
                                                      & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__g2))) 
                                                  | (((IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p3) 
                                                      & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p2)) 
                                                     & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__g1))) 
                                                 | ((((IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p3) 
                                                      & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p2)) 
                                                     & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p1)) 
                                                    & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__g0))) 
                                                | (((((IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p3) 
                                                      & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p2)) 
                                                     & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p1)) 
                                                    & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p0)) 
                                                   & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD01__DOT__ctemp))));
    M__DOT__ADD23__DOT____Vcellout__ADD01__sum = (((IData)(vlSelf->M__DOT__ADD23__DOT__ADD01__DOT____Vcellout__ADD02__sum) 
                                                   << 4U) 
                                                  | (IData)(vlSelf->M__DOT__ADD23__DOT__ADD01__DOT____Vcellout__ADD01__sum));
    vlSelf->M__DOT__ADD23__DOT__ADD02__DOT____Vcellout__ADD01__sum 
        = ((8U & (IData)(vlSelf->M__DOT__ADD23__DOT__ADD02__DOT____Vcellout__ADD01__sum)) 
           | ((((IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p2) 
                ^ (((IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__g1) 
                    | ((IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p1) 
                       & (IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__g0))) 
                   | (((IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p1) 
                       & (IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p0)) 
                      & (IData)(__PVT__M__DOT__ADD23__DOT__ctemp1)))) 
               << 2U) | ((((IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p1) 
                           ^ ((IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__g0) 
                              | ((IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p0) 
                                 & (IData)(__PVT__M__DOT__ADD23__DOT__ctemp1)))) 
                          << 1U) | ((IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p0) 
                                    ^ (IData)(__PVT__M__DOT__ADD23__DOT__ctemp1)))));
    vlSelf->M__DOT__ADD23__DOT__ADD02__DOT____Vcellout__ADD01__sum 
        = ((7U & (IData)(vlSelf->M__DOT__ADD23__DOT__ADD02__DOT____Vcellout__ADD01__sum)) 
           | (((IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p3) 
               ^ ((((IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__g2) 
                    | ((IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p2) 
                       & (IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__g1))) 
                   | (((IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p2) 
                       & (IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p1)) 
                      & (IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__g0))) 
                  | ((((IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p2) 
                       & (IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p1)) 
                      & (IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p0)) 
                     & (IData)(__PVT__M__DOT__ADD23__DOT__ctemp1)))) 
              << 3U));
    __PVT__M__DOT__ADD23__DOT__ADD02__DOT__ctemp = 
        (1U & (((((0xfffU & ((vlSelf->__PVT__M__DOT__M02->__PVT__out 
                              & (IData)(vlSelf->__PVT__M__DOT__final_product_round)) 
                             >> 0xbU)) | ((IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p3) 
                                          & (IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__g2))) 
                 | (((IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p3) 
                     & (IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p2)) 
                    & (IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__g1))) 
                | ((((IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p3) 
                     & (IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p2)) 
                    & (IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p1)) 
                   & (IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__g0))) 
               | (((((IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p3) 
                     & (IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p2)) 
                    & (IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p1)) 
                   & (IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p0)) 
                  & (IData)(__PVT__M__DOT__ADD23__DOT__ctemp1))));
    AS__DOT__ADD02__DOT____Vcellout__ADD01__sum = (
                                                   ((IData)(vlSelf->AS__DOT__ADD02__DOT__ADD01__DOT____Vcellout__ADD02__sum) 
                                                    << 4U) 
                                                   | (IData)(vlSelf->AS__DOT__ADD02__DOT__ADD01__DOT____Vcellout__ADD01__sum));
    vlSelf->AS__DOT__ADD02__DOT__ADD02__DOT____Vcellout__ADD01__sum 
        = ((8U & (IData)(vlSelf->AS__DOT__ADD02__DOT__ADD02__DOT____Vcellout__ADD01__sum)) 
           | ((((IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p2) 
                ^ (((IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__g1) 
                    | ((IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p1) 
                       & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__g0))) 
                   | (((IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p1) 
                       & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p0)) 
                      & (IData)(__PVT__AS__DOT__ADD02__DOT__ctemp1)))) 
               << 2U) | ((((IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p1) 
                           ^ ((IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__g0) 
                              | ((IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p0) 
                                 & (IData)(__PVT__AS__DOT__ADD02__DOT__ctemp1)))) 
                          << 1U) | ((IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p0) 
                                    ^ (IData)(__PVT__AS__DOT__ADD02__DOT__ctemp1)))));
    vlSelf->AS__DOT__ADD02__DOT__ADD02__DOT____Vcellout__ADD01__sum 
        = ((7U & (IData)(vlSelf->AS__DOT__ADD02__DOT__ADD02__DOT____Vcellout__ADD01__sum)) 
           | (((IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p3) 
               ^ ((((IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__g2) 
                    | ((IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p2) 
                       & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__g1))) 
                   | (((IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p2) 
                       & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p1)) 
                      & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__g0))) 
                  | ((((IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p2) 
                       & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p1)) 
                      & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p0)) 
                     & (IData)(__PVT__AS__DOT__ADD02__DOT__ctemp1)))) 
              << 3U));
    __PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ctemp = 
        (1U & ((((((vlSelf->__PVT__AS__DOT__M1 & vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                   >> 0xbU) | ((IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p3) 
                               & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__g2))) 
                 | (((IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p3) 
                     & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p2)) 
                    & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__g1))) 
                | ((((IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p3) 
                     & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p2)) 
                    & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p1)) 
                   & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__g0))) 
               | (((((IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p3) 
                     & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p2)) 
                    & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p1)) 
                   & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p0)) 
                  & (IData)(__PVT__AS__DOT__ADD02__DOT__ctemp1))));
    vlSelf->M__DOT__ADD23__DOT__ADD02__DOT____Vcellout__ADD02__sum 
        = ((8U & (IData)(vlSelf->M__DOT__ADD23__DOT__ADD02__DOT____Vcellout__ADD02__sum)) 
           | ((((IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p2) 
                ^ (((IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__g1) 
                    | ((IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p1) 
                       & (IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__g0))) 
                   | (((IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p1) 
                       & (IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p0)) 
                      & (IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ctemp)))) 
               << 2U) | ((((IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p1) 
                           ^ ((IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__g0) 
                              | ((IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p0) 
                                 & (IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ctemp)))) 
                          << 1U) | ((IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p0) 
                                    ^ (IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ctemp)))));
    vlSelf->M__DOT__ADD23__DOT__ADD02__DOT____Vcellout__ADD02__sum 
        = ((7U & (IData)(vlSelf->M__DOT__ADD23__DOT__ADD02__DOT____Vcellout__ADD02__sum)) 
           | (((IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p3) 
               ^ ((((IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__g2) 
                    | ((IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p2) 
                       & (IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__g1))) 
                   | (((IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p2) 
                       & (IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p1)) 
                      & (IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__g0))) 
                  | ((((IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p2) 
                       & (IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p1)) 
                      & (IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p0)) 
                     & (IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ctemp)))) 
              << 3U));
    __PVT__M__DOT__ADD23__DOT__ctemp2 = (1U & (((((0xffU 
                                                   & ((vlSelf->__PVT__M__DOT__M02->__PVT__out 
                                                       & (IData)(vlSelf->__PVT__M__DOT__final_product_round)) 
                                                      >> 0xfU)) 
                                                  | ((IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p3) 
                                                     & (IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__g2))) 
                                                 | (((IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p3) 
                                                     & (IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p2)) 
                                                    & (IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__g1))) 
                                                | ((((IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p3) 
                                                     & (IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p2)) 
                                                    & (IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p1)) 
                                                   & (IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__g0))) 
                                               | (((((IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p3) 
                                                     & (IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p2)) 
                                                    & (IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p1)) 
                                                   & (IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p0)) 
                                                  & (IData)(__PVT__M__DOT__ADD23__DOT__ADD02__DOT__ctemp))));
    vlSelf->AS__DOT__ADD02__DOT__ADD02__DOT____Vcellout__ADD02__sum 
        = ((8U & (IData)(vlSelf->AS__DOT__ADD02__DOT__ADD02__DOT____Vcellout__ADD02__sum)) 
           | ((((IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p2) 
                ^ (((IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__g1) 
                    | ((IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p1) 
                       & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__g0))) 
                   | (((IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p1) 
                       & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p0)) 
                      & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ctemp)))) 
               << 2U) | ((((IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p1) 
                           ^ ((IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__g0) 
                              | ((IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p0) 
                                 & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ctemp)))) 
                          << 1U) | ((IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p0) 
                                    ^ (IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ctemp)))));
    vlSelf->AS__DOT__ADD02__DOT__ADD02__DOT____Vcellout__ADD02__sum 
        = ((7U & (IData)(vlSelf->AS__DOT__ADD02__DOT__ADD02__DOT____Vcellout__ADD02__sum)) 
           | (((IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p3) 
               ^ ((((IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__g2) 
                    | ((IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p2) 
                       & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__g1))) 
                   | (((IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p2) 
                       & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p1)) 
                      & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__g0))) 
                  | ((((IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p2) 
                       & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p1)) 
                      & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p0)) 
                     & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ctemp)))) 
              << 3U));
    __PVT__AS__DOT__ADD02__DOT__ctemp2 = (1U & ((((
                                                   ((vlSelf->__PVT__AS__DOT__M1 
                                                     & vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                                                    >> 0xfU) 
                                                   | ((IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p3) 
                                                      & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__g2))) 
                                                  | (((IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p3) 
                                                      & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p2)) 
                                                     & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__g1))) 
                                                 | ((((IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p3) 
                                                      & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p2)) 
                                                     & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p1)) 
                                                    & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__g0))) 
                                                | (((((IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p3) 
                                                      & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p2)) 
                                                     & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p1)) 
                                                    & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p0)) 
                                                   & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD02__DOT__ctemp))));
    M__DOT__ADD23__DOT____Vcellout__ADD02__sum = (((IData)(vlSelf->M__DOT__ADD23__DOT__ADD02__DOT____Vcellout__ADD02__sum) 
                                                   << 4U) 
                                                  | (IData)(vlSelf->M__DOT__ADD23__DOT__ADD02__DOT____Vcellout__ADD01__sum));
    vlSelf->M__DOT__ADD23__DOT__ADD03__DOT____Vcellout__ADD01__sum 
        = ((8U & (IData)(vlSelf->M__DOT__ADD23__DOT__ADD03__DOT____Vcellout__ADD01__sum)) 
           | ((((IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p2) 
                ^ (((IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__g1) 
                    | ((IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p1) 
                       & (IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__g0))) 
                   | (((IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p1) 
                       & (IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p0)) 
                      & (IData)(__PVT__M__DOT__ADD23__DOT__ctemp2)))) 
               << 2U) | ((((IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p1) 
                           ^ ((IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__g0) 
                              | ((IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p0) 
                                 & (IData)(__PVT__M__DOT__ADD23__DOT__ctemp2)))) 
                          << 1U) | ((IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p0) 
                                    ^ (IData)(__PVT__M__DOT__ADD23__DOT__ctemp2)))));
    vlSelf->M__DOT__ADD23__DOT__ADD03__DOT____Vcellout__ADD01__sum 
        = ((7U & (IData)(vlSelf->M__DOT__ADD23__DOT__ADD03__DOT____Vcellout__ADD01__sum)) 
           | (((IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p3) 
               ^ ((((IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__g2) 
                    | ((IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p2) 
                       & (IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__g1))) 
                   | (((IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p2) 
                       & (IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p1)) 
                      & (IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__g0))) 
                  | ((((IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p2) 
                       & (IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p1)) 
                      & (IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p0)) 
                     & (IData)(__PVT__M__DOT__ADD23__DOT__ctemp2)))) 
              << 3U));
    __PVT__M__DOT__ADD23__DOT__ADD03__DOT__ctemp = 
        (1U & (((((0xfU & ((vlSelf->__PVT__M__DOT__M02->__PVT__out 
                            & (IData)(vlSelf->__PVT__M__DOT__final_product_round)) 
                           >> 0x13U)) | ((IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p3) 
                                         & (IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__g2))) 
                 | (((IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p3) 
                     & (IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p2)) 
                    & (IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__g1))) 
                | ((((IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p3) 
                     & (IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p2)) 
                    & (IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p1)) 
                   & (IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__g0))) 
               | (((((IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p3) 
                     & (IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p2)) 
                    & (IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p1)) 
                   & (IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p0)) 
                  & (IData)(__PVT__M__DOT__ADD23__DOT__ctemp2))));
    AS__DOT__ADD02__DOT____Vcellout__ADD02__sum = (
                                                   ((IData)(vlSelf->AS__DOT__ADD02__DOT__ADD02__DOT____Vcellout__ADD02__sum) 
                                                    << 4U) 
                                                   | (IData)(vlSelf->AS__DOT__ADD02__DOT__ADD02__DOT____Vcellout__ADD01__sum));
    vlSelf->AS__DOT__ADD02__DOT__ADD03__DOT____Vcellout__ADD01__sum 
        = ((8U & (IData)(vlSelf->AS__DOT__ADD02__DOT__ADD03__DOT____Vcellout__ADD01__sum)) 
           | ((((IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p2) 
                ^ (((IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__g1) 
                    | ((IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p1) 
                       & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__g0))) 
                   | (((IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p1) 
                       & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p0)) 
                      & (IData)(__PVT__AS__DOT__ADD02__DOT__ctemp2)))) 
               << 2U) | ((((IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p1) 
                           ^ ((IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__g0) 
                              | ((IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p0) 
                                 & (IData)(__PVT__AS__DOT__ADD02__DOT__ctemp2)))) 
                          << 1U) | ((IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p0) 
                                    ^ (IData)(__PVT__AS__DOT__ADD02__DOT__ctemp2)))));
    vlSelf->AS__DOT__ADD02__DOT__ADD03__DOT____Vcellout__ADD01__sum 
        = ((7U & (IData)(vlSelf->AS__DOT__ADD02__DOT__ADD03__DOT____Vcellout__ADD01__sum)) 
           | (((IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p3) 
               ^ ((((IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__g2) 
                    | ((IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p2) 
                       & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__g1))) 
                   | (((IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p2) 
                       & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p1)) 
                      & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__g0))) 
                  | ((((IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p2) 
                       & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p1)) 
                      & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p0)) 
                     & (IData)(__PVT__AS__DOT__ADD02__DOT__ctemp2)))) 
              << 3U));
    __PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ctemp = 
        (1U & ((((((vlSelf->__PVT__AS__DOT__M1 & vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                   >> 0x13U) | ((IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p3) 
                                & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__g2))) 
                 | (((IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p3) 
                     & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p2)) 
                    & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__g1))) 
                | ((((IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p3) 
                     & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p2)) 
                    & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p1)) 
                   & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__g0))) 
               | (((((IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p3) 
                     & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p2)) 
                    & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p1)) 
                   & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p0)) 
                  & (IData)(__PVT__AS__DOT__ADD02__DOT__ctemp2))));
    vlSelf->M__DOT__ADD23__DOT__ADD03__DOT____Vcellout__ADD02__sum 
        = ((8U & (IData)(vlSelf->M__DOT__ADD23__DOT__ADD03__DOT____Vcellout__ADD02__sum)) 
           | ((((IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__p2) 
                ^ (((IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__g1) 
                    | ((IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__p1) 
                       & (IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__g0))) 
                   | (((IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__p1) 
                       & (IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__p0)) 
                      & (IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ctemp)))) 
               << 2U) | ((((IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__p1) 
                           ^ ((IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__g0) 
                              | ((IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__p0) 
                                 & (IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ctemp)))) 
                          << 1U) | ((IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__p0) 
                                    ^ (IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ctemp)))));
    vlSelf->M__DOT__ADD23__DOT__ADD03__DOT____Vcellout__ADD02__sum 
        = ((7U & (IData)(vlSelf->M__DOT__ADD23__DOT__ADD03__DOT____Vcellout__ADD02__sum)) 
           | (8U & ((0xff8U & ((IData)(vlSelf->__PVT__M__DOT__final_product_round) 
                               >> 0x14U)) ^ ((((8U 
                                                & ((vlSelf->__PVT__M__DOT__M02->__PVT__out 
                                                    & (IData)(vlSelf->__PVT__M__DOT__final_product_round)) 
                                                   >> 0x13U)) 
                                               | (((IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__p2) 
                                                   & (IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__g1)) 
                                                  << 3U)) 
                                              | ((((IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__p2) 
                                                   & (IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__p1)) 
                                                  & (IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__g0)) 
                                                 << 3U)) 
                                             | (((((IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__p2) 
                                                   & (IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__p1)) 
                                                  & (IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__p0)) 
                                                 & (IData)(__PVT__M__DOT__ADD23__DOT__ADD03__DOT__ctemp)) 
                                                << 3U)))));
    vlSelf->__PVT__AS__DOT__M_carry = (1U & ((((((vlSelf->__PVT__AS__DOT__M1 
                                                  & vlSelf->__PVT__AS__DOT__M04->__PVT__out) 
                                                 >> 0x17U) 
                                                | ((IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p3) 
                                                   & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__g2))) 
                                               | (((IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p3) 
                                                   & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p2)) 
                                                  & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__g1))) 
                                              | ((((IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p3) 
                                                   & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p2)) 
                                                  & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p1)) 
                                                 & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__g0))) 
                                             | (((((IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p3) 
                                                   & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p2)) 
                                                  & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p1)) 
                                                 & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p0)) 
                                                & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ctemp))));
    vlSelf->AS__DOT__ADD02__DOT__ADD03__DOT____Vcellout__ADD02__sum 
        = ((8U & (IData)(vlSelf->AS__DOT__ADD02__DOT__ADD03__DOT____Vcellout__ADD02__sum)) 
           | ((((IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p2) 
                ^ (((IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__g1) 
                    | ((IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p1) 
                       & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__g0))) 
                   | (((IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p1) 
                       & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p0)) 
                      & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ctemp)))) 
               << 2U) | ((((IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p1) 
                           ^ ((IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__g0) 
                              | ((IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p0) 
                                 & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ctemp)))) 
                          << 1U) | ((IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p0) 
                                    ^ (IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ctemp)))));
    vlSelf->AS__DOT__ADD02__DOT__ADD03__DOT____Vcellout__ADD02__sum 
        = ((7U & (IData)(vlSelf->AS__DOT__ADD02__DOT__ADD03__DOT____Vcellout__ADD02__sum)) 
           | (((IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p3) 
               ^ ((((IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__g2) 
                    | ((IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p2) 
                       & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__g1))) 
                   | (((IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p2) 
                       & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p1)) 
                      & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__g0))) 
                  | ((((IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p2) 
                       & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p1)) 
                      & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p0)) 
                     & (IData)(__PVT__AS__DOT__ADD02__DOT__ADD03__DOT__ctemp)))) 
              << 3U));
    M__DOT__ADD23__DOT____Vcellout__ADD03__sum = (((IData)(vlSelf->M__DOT__ADD23__DOT__ADD03__DOT____Vcellout__ADD02__sum) 
                                                   << 4U) 
                                                  | (IData)(vlSelf->M__DOT__ADD23__DOT__ADD03__DOT____Vcellout__ADD01__sum));
    AS__DOT____Vcellinp__M031__sl = ((IData)(vlSelf->__PVT__AS__DOT__M_carry) 
                                     & (~ (IData)(vlSelf->__PVT__AS__DOT__real_oper)));
    vlSelf->AS__DOT____Vcellinp__M05__sl = ((IData)(vlSelf->__PVT__AS__DOT__real_oper) 
                                            & (~ (IData)(vlSelf->__PVT__AS__DOT__M_carry)));
    AS__DOT__ADD02__DOT____Vcellout__ADD03__sum = (
                                                   ((IData)(vlSelf->AS__DOT__ADD02__DOT__ADD03__DOT____Vcellout__ADD02__sum) 
                                                    << 4U) 
                                                   | (IData)(vlSelf->AS__DOT__ADD02__DOT__ADD03__DOT____Vcellout__ADD01__sum));
    M__DOT____Vcellout__ADD23__sum = (((IData)(M__DOT__ADD23__DOT____Vcellout__ADD03__sum) 
                                       << 0x10U) | 
                                      (((IData)(M__DOT__ADD23__DOT____Vcellout__ADD02__sum) 
                                        << 8U) | (IData)(M__DOT__ADD23__DOT____Vcellout__ADD01__sum)));
    vlSelf->__PVT__AS__DOT__new_E = ((0xfeU & (IData)(vlSelf->__PVT__AS__DOT__new_E)) 
                                     | (1U & (((IData)(vlSelf->__PVT__AS__DOT__E) 
                                               & (~ (IData)(AS__DOT____Vcellinp__M031__sl))) 
                                              | ((IData)(vlSelf->__PVT__AS__DOT__One_Added_E) 
                                                 & (IData)(AS__DOT____Vcellinp__M031__sl)))));
    vlSelf->__PVT__AS__DOT__new_E = ((0xfdU & (IData)(vlSelf->__PVT__AS__DOT__new_E)) 
                                     | (2U & (((IData)(vlSelf->__PVT__AS__DOT__E) 
                                               & ((~ (IData)(AS__DOT____Vcellinp__M031__sl)) 
                                                  << 1U)) 
                                              | ((IData)(vlSelf->__PVT__AS__DOT__One_Added_E) 
                                                 & ((IData)(AS__DOT____Vcellinp__M031__sl) 
                                                    << 1U)))));
    vlSelf->__PVT__AS__DOT__new_E = ((0xfbU & (IData)(vlSelf->__PVT__AS__DOT__new_E)) 
                                     | (4U & (((IData)(vlSelf->__PVT__AS__DOT__E) 
                                               & ((~ (IData)(AS__DOT____Vcellinp__M031__sl)) 
                                                  << 2U)) 
                                              | ((IData)(vlSelf->__PVT__AS__DOT__One_Added_E) 
                                                 & ((IData)(AS__DOT____Vcellinp__M031__sl) 
                                                    << 2U)))));
    vlSelf->__PVT__AS__DOT__new_E = ((0xf7U & (IData)(vlSelf->__PVT__AS__DOT__new_E)) 
                                     | (8U & (((IData)(vlSelf->__PVT__AS__DOT__E) 
                                               & ((~ (IData)(AS__DOT____Vcellinp__M031__sl)) 
                                                  << 3U)) 
                                              | ((IData)(vlSelf->__PVT__AS__DOT__One_Added_E) 
                                                 & ((IData)(AS__DOT____Vcellinp__M031__sl) 
                                                    << 3U)))));
    vlSelf->__PVT__AS__DOT__new_E = ((0xefU & (IData)(vlSelf->__PVT__AS__DOT__new_E)) 
                                     | (0x10U & (((IData)(vlSelf->__PVT__AS__DOT__E) 
                                                  & ((~ (IData)(AS__DOT____Vcellinp__M031__sl)) 
                                                     << 4U)) 
                                                 | ((IData)(vlSelf->__PVT__AS__DOT__One_Added_E) 
                                                    & ((IData)(AS__DOT____Vcellinp__M031__sl) 
                                                       << 4U)))));
    vlSelf->__PVT__AS__DOT__new_E = ((0xdfU & (IData)(vlSelf->__PVT__AS__DOT__new_E)) 
                                     | (0x20U & (((IData)(vlSelf->__PVT__AS__DOT__E) 
                                                  & ((~ (IData)(AS__DOT____Vcellinp__M031__sl)) 
                                                     << 5U)) 
                                                 | ((IData)(vlSelf->__PVT__AS__DOT__One_Added_E) 
                                                    & ((IData)(AS__DOT____Vcellinp__M031__sl) 
                                                       << 5U)))));
    vlSelf->__PVT__AS__DOT__new_E = ((0xbfU & (IData)(vlSelf->__PVT__AS__DOT__new_E)) 
                                     | (0x40U & (((IData)(vlSelf->__PVT__AS__DOT__E) 
                                                  & ((~ (IData)(AS__DOT____Vcellinp__M031__sl)) 
                                                     << 6U)) 
                                                 | ((IData)(vlSelf->__PVT__AS__DOT__One_Added_E) 
                                                    & ((IData)(AS__DOT____Vcellinp__M031__sl) 
                                                       << 6U)))));
    vlSelf->__PVT__AS__DOT__new_E = ((0x7fU & (IData)(vlSelf->__PVT__AS__DOT__new_E)) 
                                     | (0x80U & (((IData)(vlSelf->__PVT__AS__DOT__E) 
                                                  & ((~ (IData)(AS__DOT____Vcellinp__M031__sl)) 
                                                     << 7U)) 
                                                 | ((IData)(vlSelf->__PVT__AS__DOT__One_Added_E) 
                                                    & ((IData)(AS__DOT____Vcellinp__M031__sl) 
                                                       << 7U)))));
    vlSelf->__PVT__AS__DOT__M_result = (((IData)(AS__DOT__ADD02__DOT____Vcellout__ADD03__sum) 
                                         << 0x10U) 
                                        | (((IData)(AS__DOT__ADD02__DOT____Vcellout__ADD02__sum) 
                                            << 8U) 
                                           | (IData)(AS__DOT__ADD02__DOT____Vcellout__ADD01__sum)));
    vlSelf->__PVT__result2 = ((0x80000000U & (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                              ^ vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out)) 
                              | ((0x7f800000U & ((IData)(vlSelf->__PVT__M__DOT__final_E) 
                                                 << 0x17U)) 
                                 | (0x7fffffU & M__DOT____Vcellout__ADD23__sum)));
    vlSelf->AS__DOT__C03__DOT__C01__DOT____Vcellout__C01__out 
        = ((0xfcU & (IData)(vlSelf->AS__DOT__C03__DOT__C01__DOT____Vcellout__C01__out)) 
           | ((2U & ((~ (vlSelf->__PVT__AS__DOT__M_result 
                         >> 1U)) << 1U)) | (1U & (~ vlSelf->__PVT__AS__DOT__M_result))));
    vlSelf->AS__DOT__C03__DOT__C01__DOT____Vcellout__C01__out 
        = ((0xf3U & (IData)(vlSelf->AS__DOT__C03__DOT__C01__DOT____Vcellout__C01__out)) 
           | ((8U & ((~ (vlSelf->__PVT__AS__DOT__M_result 
                         >> 3U)) << 3U)) | (4U & ((~ 
                                                   (vlSelf->__PVT__AS__DOT__M_result 
                                                    >> 2U)) 
                                                  << 2U))));
    vlSelf->AS__DOT__C03__DOT__C01__DOT____Vcellout__C01__out 
        = ((0xcfU & (IData)(vlSelf->AS__DOT__C03__DOT__C01__DOT____Vcellout__C01__out)) 
           | ((0x20U & ((~ (vlSelf->__PVT__AS__DOT__M_result 
                            >> 5U)) << 5U)) | (0x10U 
                                               & ((~ 
                                                   (vlSelf->__PVT__AS__DOT__M_result 
                                                    >> 4U)) 
                                                  << 4U))));
    vlSelf->AS__DOT__C03__DOT__C01__DOT____Vcellout__C01__out 
        = ((0x3fU & (IData)(vlSelf->AS__DOT__C03__DOT__C01__DOT____Vcellout__C01__out)) 
           | ((0x80U & ((~ (vlSelf->__PVT__AS__DOT__M_result 
                            >> 7U)) << 7U)) | (0x40U 
                                               & ((~ 
                                                   (vlSelf->__PVT__AS__DOT__M_result 
                                                    >> 6U)) 
                                                  << 6U))));
    vlSelf->AS__DOT__C03__DOT__C01__DOT____Vcellout__C02__out 
        = ((0xfcU & (IData)(vlSelf->AS__DOT__C03__DOT__C01__DOT____Vcellout__C02__out)) 
           | ((2U & ((~ (vlSelf->__PVT__AS__DOT__M_result 
                         >> 9U)) << 1U)) | (1U & (~ 
                                                  (vlSelf->__PVT__AS__DOT__M_result 
                                                   >> 8U)))));
    vlSelf->AS__DOT__C03__DOT__C01__DOT____Vcellout__C02__out 
        = ((0xf3U & (IData)(vlSelf->AS__DOT__C03__DOT__C01__DOT____Vcellout__C02__out)) 
           | ((8U & ((~ (vlSelf->__PVT__AS__DOT__M_result 
                         >> 0xbU)) << 3U)) | (4U & 
                                              ((~ (vlSelf->__PVT__AS__DOT__M_result 
                                                   >> 0xaU)) 
                                               << 2U))));
    vlSelf->AS__DOT__C03__DOT__C01__DOT____Vcellout__C02__out 
        = ((0xcfU & (IData)(vlSelf->AS__DOT__C03__DOT__C01__DOT____Vcellout__C02__out)) 
           | ((0x20U & ((~ (vlSelf->__PVT__AS__DOT__M_result 
                            >> 0xdU)) << 5U)) | (0x10U 
                                                 & ((~ 
                                                     (vlSelf->__PVT__AS__DOT__M_result 
                                                      >> 0xcU)) 
                                                    << 4U))));
    vlSelf->AS__DOT__C03__DOT__C01__DOT____Vcellout__C02__out 
        = ((0x3fU & (IData)(vlSelf->AS__DOT__C03__DOT__C01__DOT____Vcellout__C02__out)) 
           | ((0x80U & ((~ (vlSelf->__PVT__AS__DOT__M_result 
                            >> 0xfU)) << 7U)) | (0x40U 
                                                 & ((~ 
                                                     (vlSelf->__PVT__AS__DOT__M_result 
                                                      >> 0xeU)) 
                                                    << 6U))));
    vlSelf->AS__DOT__C03__DOT__C01__DOT____Vcellout__C03__out 
        = ((0xfcU & (IData)(vlSelf->AS__DOT__C03__DOT__C01__DOT____Vcellout__C03__out)) 
           | ((2U & ((~ (vlSelf->__PVT__AS__DOT__M_result 
                         >> 0x11U)) << 1U)) | (1U & 
                                               (~ (vlSelf->__PVT__AS__DOT__M_result 
                                                   >> 0x10U)))));
    vlSelf->AS__DOT__C03__DOT__C01__DOT____Vcellout__C03__out 
        = ((0xf3U & (IData)(vlSelf->AS__DOT__C03__DOT__C01__DOT____Vcellout__C03__out)) 
           | ((8U & ((~ (vlSelf->__PVT__AS__DOT__M_result 
                         >> 0x13U)) << 3U)) | (4U & 
                                               ((~ 
                                                 (vlSelf->__PVT__AS__DOT__M_result 
                                                  >> 0x12U)) 
                                                << 2U))));
    vlSelf->AS__DOT__C03__DOT__C01__DOT____Vcellout__C03__out 
        = ((0xcfU & (IData)(vlSelf->AS__DOT__C03__DOT__C01__DOT____Vcellout__C03__out)) 
           | ((0x20U & ((~ (vlSelf->__PVT__AS__DOT__M_result 
                            >> 0x15U)) << 5U)) | (0x10U 
                                                  & ((~ 
                                                      (vlSelf->__PVT__AS__DOT__M_result 
                                                       >> 0x14U)) 
                                                     << 4U))));
    vlSelf->AS__DOT__C03__DOT__C01__DOT____Vcellout__C03__out 
        = ((0x3fU & (IData)(vlSelf->AS__DOT__C03__DOT__C01__DOT____Vcellout__C03__out)) 
           | ((0x80U & ((~ (vlSelf->__PVT__AS__DOT__M_result 
                            >> 0x17U)) << 7U)) | (0x40U 
                                                  & ((~ 
                                                      (vlSelf->__PVT__AS__DOT__M_result 
                                                       >> 0x16U)) 
                                                     << 6U))));
    __PVT__AS__DOT__C03__DOT__outtemp = (((IData)(vlSelf->AS__DOT__C03__DOT__C01__DOT____Vcellout__C03__out) 
                                          << 0x10U) 
                                         | (((IData)(vlSelf->AS__DOT__C03__DOT__C01__DOT____Vcellout__C02__out) 
                                             << 8U) 
                                            | (IData)(vlSelf->AS__DOT__C03__DOT__C01__DOT____Vcellout__C01__out)));
    vlSelf->AS__DOT__C03__DOT__ADD01__DOT__ADD01__DOT____Vcellout__ADD01__sum 
        = ((8U & (IData)(vlSelf->AS__DOT__C03__DOT__ADD01__DOT__ADD01__DOT____Vcellout__ADD01__sum)) 
           | ((4U & ((0xfffffffcU & __PVT__AS__DOT__C03__DOT__outtemp) 
                     ^ (0xfffffffcU & ((__PVT__AS__DOT__C03__DOT__outtemp 
                                        << 1U) & (__PVT__AS__DOT__C03__DOT__outtemp 
                                                  << 2U))))) 
              | ((2U & ((0xfffffffeU & __PVT__AS__DOT__C03__DOT__outtemp) 
                        ^ (__PVT__AS__DOT__C03__DOT__outtemp 
                           << 1U))) | (1U & (~ __PVT__AS__DOT__C03__DOT__outtemp)))));
    vlSelf->AS__DOT__C03__DOT__ADD01__DOT__ADD01__DOT____Vcellout__ADD01__sum 
        = ((7U & (IData)(vlSelf->AS__DOT__C03__DOT__ADD01__DOT__ADD01__DOT____Vcellout__ADD01__sum)) 
           | (8U & ((0xfffffff8U & __PVT__AS__DOT__C03__DOT__outtemp) 
                    ^ ((IData)((7U == (7U & __PVT__AS__DOT__C03__DOT__outtemp))) 
                       << 3U))));
    __PVT__AS__DOT__C03__DOT__ADD01__DOT__ADD01__DOT__ctemp 
        = (IData)((0xfU == (0xfU & __PVT__AS__DOT__C03__DOT__outtemp)));
    vlSelf->AS__DOT__C03__DOT__ADD01__DOT__ADD01__DOT____Vcellout__ADD02__sum 
        = ((8U & (IData)(vlSelf->AS__DOT__C03__DOT__ADD01__DOT__ADD01__DOT____Vcellout__ADD02__sum)) 
           | ((4U & ((0xffffffcU & (__PVT__AS__DOT__C03__DOT__outtemp 
                                    >> 4U)) ^ (((IData)(
                                                        (0x30U 
                                                         == 
                                                         (0x30U 
                                                          & __PVT__AS__DOT__C03__DOT__outtemp))) 
                                                & (IData)(__PVT__AS__DOT__C03__DOT__ADD01__DOT__ADD01__DOT__ctemp)) 
                                               << 2U))) 
              | ((2U & ((0xffffffeU & (__PVT__AS__DOT__C03__DOT__outtemp 
                                       >> 4U)) ^ (0x1ffffffeU 
                                                  & ((__PVT__AS__DOT__C03__DOT__outtemp 
                                                      >> 3U) 
                                                     & ((IData)(__PVT__AS__DOT__C03__DOT__ADD01__DOT__ADD01__DOT__ctemp) 
                                                        << 1U))))) 
                 | (1U & ((__PVT__AS__DOT__C03__DOT__outtemp 
                           >> 4U) ^ (IData)(__PVT__AS__DOT__C03__DOT__ADD01__DOT__ADD01__DOT__ctemp))))));
    vlSelf->AS__DOT__C03__DOT__ADD01__DOT__ADD01__DOT____Vcellout__ADD02__sum 
        = ((7U & (IData)(vlSelf->AS__DOT__C03__DOT__ADD01__DOT__ADD01__DOT____Vcellout__ADD02__sum)) 
           | (8U & ((0xffffff8U & (__PVT__AS__DOT__C03__DOT__outtemp 
                                   >> 4U)) ^ (((IData)(
                                                       (0x70U 
                                                        == 
                                                        (0x70U 
                                                         & __PVT__AS__DOT__C03__DOT__outtemp))) 
                                               & (IData)(__PVT__AS__DOT__C03__DOT__ADD01__DOT__ADD01__DOT__ctemp)) 
                                              << 3U))));
    __PVT__AS__DOT__C03__DOT__ADD01__DOT__ctemp1 = 
        ((IData)((0xf0U == (0xf0U & __PVT__AS__DOT__C03__DOT__outtemp))) 
         & (IData)(__PVT__AS__DOT__C03__DOT__ADD01__DOT__ADD01__DOT__ctemp));
    AS__DOT__C03__DOT__ADD01__DOT____Vcellout__ADD01__sum 
        = (((IData)(vlSelf->AS__DOT__C03__DOT__ADD01__DOT__ADD01__DOT____Vcellout__ADD02__sum) 
            << 4U) | (IData)(vlSelf->AS__DOT__C03__DOT__ADD01__DOT__ADD01__DOT____Vcellout__ADD01__sum));
    vlSelf->AS__DOT__C03__DOT__ADD01__DOT__ADD02__DOT____Vcellout__ADD01__sum 
        = ((8U & (IData)(vlSelf->AS__DOT__C03__DOT__ADD01__DOT__ADD02__DOT____Vcellout__ADD01__sum)) 
           | ((4U & ((0xfffffcU & (__PVT__AS__DOT__C03__DOT__outtemp 
                                   >> 8U)) ^ (((IData)(
                                                       (0x300U 
                                                        == 
                                                        (0x300U 
                                                         & __PVT__AS__DOT__C03__DOT__outtemp))) 
                                               & (IData)(__PVT__AS__DOT__C03__DOT__ADD01__DOT__ctemp1)) 
                                              << 2U))) 
              | ((2U & ((0xfffffeU & (__PVT__AS__DOT__C03__DOT__outtemp 
                                      >> 8U)) ^ (0x1fffffeU 
                                                 & ((__PVT__AS__DOT__C03__DOT__outtemp 
                                                     >> 7U) 
                                                    & ((IData)(__PVT__AS__DOT__C03__DOT__ADD01__DOT__ctemp1) 
                                                       << 1U))))) 
                 | (1U & ((__PVT__AS__DOT__C03__DOT__outtemp 
                           >> 8U) ^ (IData)(__PVT__AS__DOT__C03__DOT__ADD01__DOT__ctemp1))))));
    vlSelf->AS__DOT__C03__DOT__ADD01__DOT__ADD02__DOT____Vcellout__ADD01__sum 
        = ((7U & (IData)(vlSelf->AS__DOT__C03__DOT__ADD01__DOT__ADD02__DOT____Vcellout__ADD01__sum)) 
           | (8U & ((0xfffff8U & (__PVT__AS__DOT__C03__DOT__outtemp 
                                  >> 8U)) ^ (((IData)(
                                                      (0x700U 
                                                       == 
                                                       (0x700U 
                                                        & __PVT__AS__DOT__C03__DOT__outtemp))) 
                                              & (IData)(__PVT__AS__DOT__C03__DOT__ADD01__DOT__ctemp1)) 
                                             << 3U))));
    __PVT__AS__DOT__C03__DOT__ADD01__DOT__ADD02__DOT__ctemp 
        = ((IData)((0xf00U == (0xf00U & __PVT__AS__DOT__C03__DOT__outtemp))) 
           & (IData)(__PVT__AS__DOT__C03__DOT__ADD01__DOT__ctemp1));
    vlSelf->AS__DOT__C03__DOT__ADD01__DOT__ADD02__DOT____Vcellout__ADD02__sum 
        = ((8U & (IData)(vlSelf->AS__DOT__C03__DOT__ADD01__DOT__ADD02__DOT____Vcellout__ADD02__sum)) 
           | ((4U & ((0xffffcU & (__PVT__AS__DOT__C03__DOT__outtemp 
                                  >> 0xcU)) ^ (((IData)(
                                                        (0x3000U 
                                                         == 
                                                         (0x3000U 
                                                          & __PVT__AS__DOT__C03__DOT__outtemp))) 
                                                & (IData)(__PVT__AS__DOT__C03__DOT__ADD01__DOT__ADD02__DOT__ctemp)) 
                                               << 2U))) 
              | ((2U & ((0xffffeU & (__PVT__AS__DOT__C03__DOT__outtemp 
                                     >> 0xcU)) ^ (0x1ffffeU 
                                                  & ((__PVT__AS__DOT__C03__DOT__outtemp 
                                                      >> 0xbU) 
                                                     & ((IData)(__PVT__AS__DOT__C03__DOT__ADD01__DOT__ADD02__DOT__ctemp) 
                                                        << 1U))))) 
                 | (1U & ((__PVT__AS__DOT__C03__DOT__outtemp 
                           >> 0xcU) ^ (IData)(__PVT__AS__DOT__C03__DOT__ADD01__DOT__ADD02__DOT__ctemp))))));
    vlSelf->AS__DOT__C03__DOT__ADD01__DOT__ADD02__DOT____Vcellout__ADD02__sum 
        = ((7U & (IData)(vlSelf->AS__DOT__C03__DOT__ADD01__DOT__ADD02__DOT____Vcellout__ADD02__sum)) 
           | (8U & ((0xffff8U & (__PVT__AS__DOT__C03__DOT__outtemp 
                                 >> 0xcU)) ^ (((IData)(
                                                       (0x7000U 
                                                        == 
                                                        (0x7000U 
                                                         & __PVT__AS__DOT__C03__DOT__outtemp))) 
                                               & (IData)(__PVT__AS__DOT__C03__DOT__ADD01__DOT__ADD02__DOT__ctemp)) 
                                              << 3U))));
    __PVT__AS__DOT__C03__DOT__ADD01__DOT__ctemp2 = 
        ((IData)((0xf000U == (0xf000U & __PVT__AS__DOT__C03__DOT__outtemp))) 
         & (IData)(__PVT__AS__DOT__C03__DOT__ADD01__DOT__ADD02__DOT__ctemp));
    AS__DOT__C03__DOT__ADD01__DOT____Vcellout__ADD02__sum 
        = (((IData)(vlSelf->AS__DOT__C03__DOT__ADD01__DOT__ADD02__DOT____Vcellout__ADD02__sum) 
            << 4U) | (IData)(vlSelf->AS__DOT__C03__DOT__ADD01__DOT__ADD02__DOT____Vcellout__ADD01__sum));
    vlSelf->AS__DOT__C03__DOT__ADD01__DOT__ADD03__DOT____Vcellout__ADD01__sum 
        = ((8U & (IData)(vlSelf->AS__DOT__C03__DOT__ADD01__DOT__ADD03__DOT____Vcellout__ADD01__sum)) 
           | ((4U & ((0xfffcU & (__PVT__AS__DOT__C03__DOT__outtemp 
                                 >> 0x10U)) ^ (((IData)(
                                                        (0x30000U 
                                                         == 
                                                         (0x30000U 
                                                          & __PVT__AS__DOT__C03__DOT__outtemp))) 
                                                & (IData)(__PVT__AS__DOT__C03__DOT__ADD01__DOT__ctemp2)) 
                                               << 2U))) 
              | ((2U & ((0xfffeU & (__PVT__AS__DOT__C03__DOT__outtemp 
                                    >> 0x10U)) ^ (0x1fffeU 
                                                  & ((__PVT__AS__DOT__C03__DOT__outtemp 
                                                      >> 0xfU) 
                                                     & ((IData)(__PVT__AS__DOT__C03__DOT__ADD01__DOT__ctemp2) 
                                                        << 1U))))) 
                 | (1U & ((__PVT__AS__DOT__C03__DOT__outtemp 
                           >> 0x10U) ^ (IData)(__PVT__AS__DOT__C03__DOT__ADD01__DOT__ctemp2))))));
    vlSelf->AS__DOT__C03__DOT__ADD01__DOT__ADD03__DOT____Vcellout__ADD01__sum 
        = ((7U & (IData)(vlSelf->AS__DOT__C03__DOT__ADD01__DOT__ADD03__DOT____Vcellout__ADD01__sum)) 
           | (8U & ((0xfff8U & (__PVT__AS__DOT__C03__DOT__outtemp 
                                >> 0x10U)) ^ (((IData)(
                                                       (0x70000U 
                                                        == 
                                                        (0x70000U 
                                                         & __PVT__AS__DOT__C03__DOT__outtemp))) 
                                               & (IData)(__PVT__AS__DOT__C03__DOT__ADD01__DOT__ctemp2)) 
                                              << 3U))));
    __PVT__AS__DOT__C03__DOT__ADD01__DOT__ADD03__DOT__ctemp 
        = ((IData)((0xf0000U == (0xf0000U & __PVT__AS__DOT__C03__DOT__outtemp))) 
           & (IData)(__PVT__AS__DOT__C03__DOT__ADD01__DOT__ctemp2));
    vlSelf->AS__DOT__C03__DOT__ADD01__DOT__ADD03__DOT____Vcellout__ADD02__sum 
        = ((8U & (IData)(vlSelf->AS__DOT__C03__DOT__ADD01__DOT__ADD03__DOT____Vcellout__ADD02__sum)) 
           | ((4U & ((0xffcU & (__PVT__AS__DOT__C03__DOT__outtemp 
                                >> 0x14U)) ^ (((IData)(
                                                       (0x300000U 
                                                        == 
                                                        (0x300000U 
                                                         & __PVT__AS__DOT__C03__DOT__outtemp))) 
                                               & (IData)(__PVT__AS__DOT__C03__DOT__ADD01__DOT__ADD03__DOT__ctemp)) 
                                              << 2U))) 
              | ((2U & ((0xffeU & (__PVT__AS__DOT__C03__DOT__outtemp 
                                   >> 0x14U)) ^ (0x1ffeU 
                                                 & ((__PVT__AS__DOT__C03__DOT__outtemp 
                                                     >> 0x13U) 
                                                    & ((IData)(__PVT__AS__DOT__C03__DOT__ADD01__DOT__ADD03__DOT__ctemp) 
                                                       << 1U))))) 
                 | (1U & ((__PVT__AS__DOT__C03__DOT__outtemp 
                           >> 0x14U) ^ (IData)(__PVT__AS__DOT__C03__DOT__ADD01__DOT__ADD03__DOT__ctemp))))));
    vlSelf->AS__DOT__C03__DOT__ADD01__DOT__ADD03__DOT____Vcellout__ADD02__sum 
        = ((7U & (IData)(vlSelf->AS__DOT__C03__DOT__ADD01__DOT__ADD03__DOT____Vcellout__ADD02__sum)) 
           | (8U & ((0xff8U & (__PVT__AS__DOT__C03__DOT__outtemp 
                               >> 0x14U)) ^ (((IData)(
                                                      (0x700000U 
                                                       == 
                                                       (0x700000U 
                                                        & __PVT__AS__DOT__C03__DOT__outtemp))) 
                                              & (IData)(__PVT__AS__DOT__C03__DOT__ADD01__DOT__ADD03__DOT__ctemp)) 
                                             << 3U))));
    AS__DOT__C03__DOT__ADD01__DOT____Vcellout__ADD03__sum 
        = (((IData)(vlSelf->AS__DOT__C03__DOT__ADD01__DOT__ADD03__DOT____Vcellout__ADD02__sum) 
            << 4U) | (IData)(vlSelf->AS__DOT__C03__DOT__ADD01__DOT__ADD03__DOT____Vcellout__ADD01__sum));
    vlSelf->__PVT__AS__DOT__complemented_M_result = 
        (((IData)(AS__DOT__C03__DOT__ADD01__DOT____Vcellout__ADD03__sum) 
          << 0x10U) | (((IData)(AS__DOT__C03__DOT__ADD01__DOT____Vcellout__ADD02__sum) 
                        << 8U) | (IData)(AS__DOT__C03__DOT__ADD01__DOT____Vcellout__ADD01__sum)));
}

VL_INLINE_OPT void Vmips_machine_add_sub_mul_div___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__12(Vmips_machine_add_sub_mul_div* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmips_machine_add_sub_mul_div___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__12\n"); );
    // Init
    SData/*8:0*/ __PVT__AS__DOT__final_E;
    CData/*4:0*/ __PVT__AS__DOT__shift_E;
    CData/*7:0*/ AS__DOT____Vcellout__ADD03__sum;
    CData/*0:0*/ __PVT__AS__DOT__ADD03__DOT__ctemp;
    CData/*0:0*/ __PVT__AS__DOT__ADD03__DOT__ADD01__DOT__g0;
    CData/*0:0*/ __PVT__AS__DOT__ADD03__DOT__ADD01__DOT__g1;
    CData/*0:0*/ __PVT__AS__DOT__ADD03__DOT__ADD01__DOT__g2;
    CData/*0:0*/ __PVT__AS__DOT__ADD03__DOT__ADD01__DOT__p0;
    CData/*0:0*/ __PVT__AS__DOT__ADD03__DOT__ADD01__DOT__p1;
    CData/*0:0*/ __PVT__AS__DOT__ADD03__DOT__ADD01__DOT__p2;
    CData/*0:0*/ __PVT__AS__DOT__ADD03__DOT__ADD01__DOT__p3;
    CData/*0:0*/ __PVT__AS__DOT__ADD03__DOT__ADD02__DOT__g0;
    CData/*0:0*/ __PVT__AS__DOT__ADD03__DOT__ADD02__DOT__g1;
    CData/*0:0*/ __PVT__AS__DOT__ADD03__DOT__ADD02__DOT__g2;
    CData/*0:0*/ __PVT__AS__DOT__ADD03__DOT__ADD02__DOT__p0;
    CData/*0:0*/ __PVT__AS__DOT__ADD03__DOT__ADD02__DOT__p1;
    CData/*0:0*/ __PVT__AS__DOT__ADD03__DOT__ADD02__DOT__p2;
    CData/*0:0*/ __PVT__AS__DOT__ADD03__DOT__ADD02__DOT__p3;
    // Body
    if (((IData)(vlSelf->__PVT__AS__DOT__M_carry) & 
         (~ (IData)(vlSelf->__PVT__AS__DOT__real_oper)))) {
        vlSelf->__PVT__AS__DOT__final_M = (0x7fffffU 
                                           & ((vlSelf->__PVT__AS__DOT__M05->__PVT__out 
                                               >> 1U) 
                                              + (1U 
                                                 & vlSelf->__PVT__AS__DOT__M05->__PVT__out)));
    } else if (((((((((0x800000U == (0x800000U & vlSelf->__PVT__AS__DOT__M05->__PVT__out)) 
                      | (0x400000U == (0xc00000U & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) 
                     | (0x200000U == (0xe00000U & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) 
                    | (0x100000U == (0xf00000U & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) 
                   | (0x80000U == (0xf80000U & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) 
                  | (0x40000U == (0xfc0000U & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) 
                 | (0x20000U == (0xfe0000U & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) 
                | (0x10000U == (0xff0000U & vlSelf->__PVT__AS__DOT__M05->__PVT__out)))) {
        if ((0x800000U == (0x800000U & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) {
            vlSelf->__PVT__AS__DOT__final_M = (0x7fffffU 
                                               & vlSelf->__PVT__AS__DOT__M05->__PVT__out);
        } else if ((0x400000U == (0xc00000U & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) {
            vlSelf->__PVT__AS__DOT__NM__DOT__M_temp 
                = (0xffffffU & (vlSelf->__PVT__AS__DOT__M05->__PVT__out 
                                << 1U));
            vlSelf->__PVT__AS__DOT__final_M = (0x7fffffU 
                                               & vlSelf->__PVT__AS__DOT__NM__DOT__M_temp);
        } else if ((0x200000U == (0xe00000U & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) {
            vlSelf->__PVT__AS__DOT__NM__DOT__M_temp 
                = (0xffffffU & (vlSelf->__PVT__AS__DOT__M05->__PVT__out 
                                << 2U));
            vlSelf->__PVT__AS__DOT__final_M = (0x7fffffU 
                                               & vlSelf->__PVT__AS__DOT__NM__DOT__M_temp);
        } else if ((0x100000U == (0xf00000U & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) {
            vlSelf->__PVT__AS__DOT__NM__DOT__M_temp 
                = (0xffffffU & (vlSelf->__PVT__AS__DOT__M05->__PVT__out 
                                << 3U));
            vlSelf->__PVT__AS__DOT__final_M = (0x7fffffU 
                                               & vlSelf->__PVT__AS__DOT__NM__DOT__M_temp);
        } else if ((0x80000U == (0xf80000U & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) {
            vlSelf->__PVT__AS__DOT__NM__DOT__M_temp 
                = (0xffffffU & (vlSelf->__PVT__AS__DOT__M05->__PVT__out 
                                << 4U));
            vlSelf->__PVT__AS__DOT__final_M = (0x7fffffU 
                                               & vlSelf->__PVT__AS__DOT__NM__DOT__M_temp);
        } else if ((0x40000U == (0xfc0000U & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) {
            vlSelf->__PVT__AS__DOT__NM__DOT__M_temp 
                = (0xffffffU & (vlSelf->__PVT__AS__DOT__M05->__PVT__out 
                                << 5U));
            vlSelf->__PVT__AS__DOT__final_M = (0x7fffffU 
                                               & vlSelf->__PVT__AS__DOT__NM__DOT__M_temp);
        } else if ((0x20000U == (0xfe0000U & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) {
            vlSelf->__PVT__AS__DOT__NM__DOT__M_temp 
                = (0xffffffU & (vlSelf->__PVT__AS__DOT__M05->__PVT__out 
                                << 6U));
            vlSelf->__PVT__AS__DOT__final_M = (0x7fffffU 
                                               & vlSelf->__PVT__AS__DOT__NM__DOT__M_temp);
        } else {
            vlSelf->__PVT__AS__DOT__NM__DOT__M_temp 
                = (0xffffffU & (vlSelf->__PVT__AS__DOT__M05->__PVT__out 
                                << 7U));
            vlSelf->__PVT__AS__DOT__final_M = (0x7fffffU 
                                               & vlSelf->__PVT__AS__DOT__NM__DOT__M_temp);
        }
    } else if (((((((((0x8000U == (0xff8000U & vlSelf->__PVT__AS__DOT__M05->__PVT__out)) 
                      | (0x4000U == (0xffc000U & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) 
                     | (0x2000U == (0xffe000U & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) 
                    | (0x1000U == (0xfff000U & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) 
                   | (0x800U == (0xfff800U & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) 
                  | (0x400U == (0xfffc00U & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) 
                 | (0x200U == (0xfffe00U & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) 
                | (0x100U == (0xffff00U & vlSelf->__PVT__AS__DOT__M05->__PVT__out)))) {
        if ((0x8000U == (0xff8000U & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) {
            vlSelf->__PVT__AS__DOT__NM__DOT__M_temp 
                = (0xffffffU & (vlSelf->__PVT__AS__DOT__M05->__PVT__out 
                                << 8U));
            vlSelf->__PVT__AS__DOT__final_M = (0x7fffffU 
                                               & vlSelf->__PVT__AS__DOT__NM__DOT__M_temp);
        } else if ((0x4000U == (0xffc000U & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) {
            vlSelf->__PVT__AS__DOT__NM__DOT__M_temp 
                = (0xffffffU & (vlSelf->__PVT__AS__DOT__M05->__PVT__out 
                                << 9U));
            vlSelf->__PVT__AS__DOT__final_M = (0x7fffffU 
                                               & vlSelf->__PVT__AS__DOT__NM__DOT__M_temp);
        } else if ((0x2000U == (0xffe000U & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) {
            vlSelf->__PVT__AS__DOT__NM__DOT__M_temp 
                = (0xffffffU & (vlSelf->__PVT__AS__DOT__M05->__PVT__out 
                                << 0xaU));
            vlSelf->__PVT__AS__DOT__final_M = (0x7fffffU 
                                               & vlSelf->__PVT__AS__DOT__NM__DOT__M_temp);
        } else if ((0x1000U == (0xfff000U & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) {
            vlSelf->__PVT__AS__DOT__NM__DOT__M_temp 
                = (0xffffffU & (vlSelf->__PVT__AS__DOT__M05->__PVT__out 
                                << 0xbU));
            vlSelf->__PVT__AS__DOT__final_M = (0x7fffffU 
                                               & vlSelf->__PVT__AS__DOT__NM__DOT__M_temp);
        } else if ((0x800U == (0xfff800U & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) {
            vlSelf->__PVT__AS__DOT__NM__DOT__M_temp 
                = (0xffffffU & (vlSelf->__PVT__AS__DOT__M05->__PVT__out 
                                << 0xcU));
            vlSelf->__PVT__AS__DOT__final_M = (0x7fffffU 
                                               & vlSelf->__PVT__AS__DOT__NM__DOT__M_temp);
        } else if ((0x400U == (0xfffc00U & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) {
            vlSelf->__PVT__AS__DOT__NM__DOT__M_temp 
                = (0xffffffU & (vlSelf->__PVT__AS__DOT__M05->__PVT__out 
                                << 0xdU));
            vlSelf->__PVT__AS__DOT__final_M = (0x7fffffU 
                                               & vlSelf->__PVT__AS__DOT__NM__DOT__M_temp);
        } else if ((0x200U == (0xfffe00U & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) {
            vlSelf->__PVT__AS__DOT__NM__DOT__M_temp 
                = (0xffffffU & (vlSelf->__PVT__AS__DOT__M05->__PVT__out 
                                << 0xeU));
            vlSelf->__PVT__AS__DOT__final_M = (0x7fffffU 
                                               & vlSelf->__PVT__AS__DOT__NM__DOT__M_temp);
        } else {
            vlSelf->__PVT__AS__DOT__NM__DOT__M_temp 
                = (0xffffffU & (vlSelf->__PVT__AS__DOT__M05->__PVT__out 
                                << 0xfU));
            vlSelf->__PVT__AS__DOT__final_M = (0x7fffffU 
                                               & vlSelf->__PVT__AS__DOT__NM__DOT__M_temp);
        }
    } else if (((((((((0x80U == (0xffff80U & vlSelf->__PVT__AS__DOT__M05->__PVT__out)) 
                      | (0x40U == (0xffffc0U & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) 
                     | (0x20U == (0xffffe0U & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) 
                    | (0x110U == (0xfffff0U & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) 
                   | (8U == (0xfffff8U & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) 
                  | (4U == (0xfffffcU & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) 
                 | (2U == (0xfffffeU & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) 
                | (1U == vlSelf->__PVT__AS__DOT__M05->__PVT__out))) {
        if ((0x80U == (0xffff80U & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) {
            vlSelf->__PVT__AS__DOT__NM__DOT__M_temp 
                = (0xffffffU & (vlSelf->__PVT__AS__DOT__M05->__PVT__out 
                                << 0x10U));
            vlSelf->__PVT__AS__DOT__final_M = (0x7fffffU 
                                               & vlSelf->__PVT__AS__DOT__NM__DOT__M_temp);
        } else if ((0x40U == (0xffffc0U & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) {
            vlSelf->__PVT__AS__DOT__NM__DOT__M_temp 
                = (0xffffffU & (vlSelf->__PVT__AS__DOT__M05->__PVT__out 
                                << 0x11U));
            vlSelf->__PVT__AS__DOT__final_M = (0x7fffffU 
                                               & vlSelf->__PVT__AS__DOT__NM__DOT__M_temp);
        } else if ((0x20U == (0xffffe0U & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) {
            vlSelf->__PVT__AS__DOT__NM__DOT__M_temp 
                = (0xffffffU & (vlSelf->__PVT__AS__DOT__M05->__PVT__out 
                                << 0x12U));
            vlSelf->__PVT__AS__DOT__final_M = (0x7fffffU 
                                               & vlSelf->__PVT__AS__DOT__NM__DOT__M_temp);
        } else if ((0x110U == (0xfffff0U & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) {
            vlSelf->__PVT__AS__DOT__NM__DOT__M_temp 
                = (0xffffffU & (vlSelf->__PVT__AS__DOT__M05->__PVT__out 
                                << 0x13U));
            vlSelf->__PVT__AS__DOT__final_M = (0x7fffffU 
                                               & vlSelf->__PVT__AS__DOT__NM__DOT__M_temp);
        } else if ((8U == (0xfffff8U & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) {
            vlSelf->__PVT__AS__DOT__NM__DOT__M_temp 
                = (0xffffffU & (vlSelf->__PVT__AS__DOT__M05->__PVT__out 
                                << 0x14U));
            vlSelf->__PVT__AS__DOT__final_M = (0x7fffffU 
                                               & vlSelf->__PVT__AS__DOT__NM__DOT__M_temp);
        } else if ((4U == (0xfffffcU & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) {
            vlSelf->__PVT__AS__DOT__NM__DOT__M_temp 
                = (0xffffffU & (vlSelf->__PVT__AS__DOT__M05->__PVT__out 
                                << 0x15U));
            vlSelf->__PVT__AS__DOT__final_M = (0x7fffffU 
                                               & vlSelf->__PVT__AS__DOT__NM__DOT__M_temp);
        } else if ((2U == (0xfffffeU & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) {
            vlSelf->__PVT__AS__DOT__NM__DOT__M_temp 
                = (0xffffffU & (vlSelf->__PVT__AS__DOT__M05->__PVT__out 
                                << 0x16U));
            vlSelf->__PVT__AS__DOT__final_M = (0x7fffffU 
                                               & vlSelf->__PVT__AS__DOT__NM__DOT__M_temp);
        } else {
            vlSelf->__PVT__AS__DOT__NM__DOT__M_temp 
                = (0xffffffU & (vlSelf->__PVT__AS__DOT__M05->__PVT__out 
                                << 0x17U));
            vlSelf->__PVT__AS__DOT__final_M = (0x7fffffU 
                                               & vlSelf->__PVT__AS__DOT__NM__DOT__M_temp);
        }
    } else {
        vlSelf->__PVT__AS__DOT__final_M = 0U;
    }
    __PVT__AS__DOT__shift_E = (((IData)(vlSelf->__PVT__AS__DOT__M_carry) 
                                & (~ (IData)(vlSelf->__PVT__AS__DOT__real_oper)))
                                ? 0U : (((((((((0x800000U 
                                                == 
                                                (0x800000U 
                                                 & vlSelf->__PVT__AS__DOT__M05->__PVT__out)) 
                                               | (0x400000U 
                                                  == 
                                                  (0xc00000U 
                                                   & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) 
                                              | (0x200000U 
                                                 == 
                                                 (0xe00000U 
                                                  & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) 
                                             | (0x100000U 
                                                == 
                                                (0xf00000U 
                                                 & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) 
                                            | (0x80000U 
                                               == (0xf80000U 
                                                   & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) 
                                           | (0x40000U 
                                              == (0xfc0000U 
                                                  & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) 
                                          | (0x20000U 
                                             == (0xfe0000U 
                                                 & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) 
                                         | (0x10000U 
                                            == (0xff0000U 
                                                & vlSelf->__PVT__AS__DOT__M05->__PVT__out)))
                                         ? ((0x800000U 
                                             == (0x800000U 
                                                 & vlSelf->__PVT__AS__DOT__M05->__PVT__out))
                                             ? 0U : 
                                            ((0x400000U 
                                              == (0xc00000U 
                                                  & vlSelf->__PVT__AS__DOT__M05->__PVT__out))
                                              ? 1U : 
                                             ((0x200000U 
                                               == (0xe00000U 
                                                   & vlSelf->__PVT__AS__DOT__M05->__PVT__out))
                                               ? 2U
                                               : ((0x100000U 
                                                   == 
                                                   (0xf00000U 
                                                    & vlSelf->__PVT__AS__DOT__M05->__PVT__out))
                                                   ? 3U
                                                   : 
                                                  ((0x80000U 
                                                    == 
                                                    (0xf80000U 
                                                     & vlSelf->__PVT__AS__DOT__M05->__PVT__out))
                                                    ? 4U
                                                    : 
                                                   ((0x40000U 
                                                     == 
                                                     (0xfc0000U 
                                                      & vlSelf->__PVT__AS__DOT__M05->__PVT__out))
                                                     ? 5U
                                                     : 
                                                    ((0x20000U 
                                                      == 
                                                      (0xfe0000U 
                                                       & vlSelf->__PVT__AS__DOT__M05->__PVT__out))
                                                      ? 6U
                                                      : 7U)))))))
                                         : ((((((((
                                                   (0x8000U 
                                                    == 
                                                    (0xff8000U 
                                                     & vlSelf->__PVT__AS__DOT__M05->__PVT__out)) 
                                                   | (0x4000U 
                                                      == 
                                                      (0xffc000U 
                                                       & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) 
                                                  | (0x2000U 
                                                     == 
                                                     (0xffe000U 
                                                      & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) 
                                                 | (0x1000U 
                                                    == 
                                                    (0xfff000U 
                                                     & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) 
                                                | (0x800U 
                                                   == 
                                                   (0xfff800U 
                                                    & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) 
                                               | (0x400U 
                                                  == 
                                                  (0xfffc00U 
                                                   & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) 
                                              | (0x200U 
                                                 == 
                                                 (0xfffe00U 
                                                  & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) 
                                             | (0x100U 
                                                == 
                                                (0xffff00U 
                                                 & vlSelf->__PVT__AS__DOT__M05->__PVT__out)))
                                             ? ((0x8000U 
                                                 == 
                                                 (0xff8000U 
                                                  & vlSelf->__PVT__AS__DOT__M05->__PVT__out))
                                                 ? 8U
                                                 : 
                                                ((0x4000U 
                                                  == 
                                                  (0xffc000U 
                                                   & vlSelf->__PVT__AS__DOT__M05->__PVT__out))
                                                  ? 9U
                                                  : 
                                                 ((0x2000U 
                                                   == 
                                                   (0xffe000U 
                                                    & vlSelf->__PVT__AS__DOT__M05->__PVT__out))
                                                   ? 0xaU
                                                   : 
                                                  ((0x1000U 
                                                    == 
                                                    (0xfff000U 
                                                     & vlSelf->__PVT__AS__DOT__M05->__PVT__out))
                                                    ? 0xbU
                                                    : 
                                                   ((0x800U 
                                                     == 
                                                     (0xfff800U 
                                                      & vlSelf->__PVT__AS__DOT__M05->__PVT__out))
                                                     ? 0xcU
                                                     : 
                                                    ((0x400U 
                                                      == 
                                                      (0xfffc00U 
                                                       & vlSelf->__PVT__AS__DOT__M05->__PVT__out))
                                                      ? 0xdU
                                                      : 
                                                     ((0x200U 
                                                       == 
                                                       (0xfffe00U 
                                                        & vlSelf->__PVT__AS__DOT__M05->__PVT__out))
                                                       ? 0xeU
                                                       : 0xfU)))))))
                                             : ((((
                                                   (((((0x80U 
                                                        == 
                                                        (0xffff80U 
                                                         & vlSelf->__PVT__AS__DOT__M05->__PVT__out)) 
                                                       | (0x40U 
                                                          == 
                                                          (0xffffc0U 
                                                           & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) 
                                                      | (0x20U 
                                                         == 
                                                         (0xffffe0U 
                                                          & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) 
                                                     | (0x110U 
                                                        == 
                                                        (0xfffff0U 
                                                         & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) 
                                                    | (8U 
                                                       == 
                                                       (0xfffff8U 
                                                        & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) 
                                                   | (4U 
                                                      == 
                                                      (0xfffffcU 
                                                       & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) 
                                                  | (2U 
                                                     == 
                                                     (0xfffffeU 
                                                      & vlSelf->__PVT__AS__DOT__M05->__PVT__out))) 
                                                 | (1U 
                                                    == vlSelf->__PVT__AS__DOT__M05->__PVT__out))
                                                 ? 
                                                ((0x80U 
                                                  == 
                                                  (0xffff80U 
                                                   & vlSelf->__PVT__AS__DOT__M05->__PVT__out))
                                                  ? 0x10U
                                                  : 
                                                 ((0x40U 
                                                   == 
                                                   (0xffffc0U 
                                                    & vlSelf->__PVT__AS__DOT__M05->__PVT__out))
                                                   ? 0x11U
                                                   : 
                                                  ((0x20U 
                                                    == 
                                                    (0xffffe0U 
                                                     & vlSelf->__PVT__AS__DOT__M05->__PVT__out))
                                                    ? 0x12U
                                                    : 
                                                   ((0x110U 
                                                     == 
                                                     (0xfffff0U 
                                                      & vlSelf->__PVT__AS__DOT__M05->__PVT__out))
                                                     ? 0x13U
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0xfffff8U 
                                                       & vlSelf->__PVT__AS__DOT__M05->__PVT__out))
                                                      ? 0x14U
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (0xfffffcU 
                                                        & vlSelf->__PVT__AS__DOT__M05->__PVT__out))
                                                       ? 0x15U
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (0xfffffeU 
                                                         & vlSelf->__PVT__AS__DOT__M05->__PVT__out))
                                                        ? 0x16U
                                                        : 0x17U)))))))
                                                 : 0U))));
    vlSelf->Overflow = ((((((0xffU == (IData)(vlSelf->__PVT__AS__DOT__One_Added_E)) 
                            & (~ (IData)((0U != (IData)(__PVT__AS__DOT__shift_E))))) 
                           & (~ ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                 >> 1U))) | (((IData)(vlSelf->__PVT__M__DOT__carry_E) 
                                              & ((IData)(vlSelf->__PVT__M__DOT__final_E) 
                                                 >> 8U)) 
                                             & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                >> 1U))) 
                         & (~ (IData)((3U == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))))) 
                        | ((((((IData)(vlSelf->__PVT__D__DOT__temp_E2) 
                               & (IData)(vlSelf->__PVT__D__DOT__temp_E3)) 
                              >> 8U) & (~ (IData)((vlSelf->__PVT__D__DOT__DIV01__DOT__div_temp 
                                                   >> 0x18U)))) 
                            | ((((IData)(vlSelf->__PVT__D__DOT__temp_E1) 
                                 & (IData)(vlSelf->__PVT__D__DOT__temp_E2)) 
                                >> 8U) & (IData)((vlSelf->__PVT__D__DOT__DIV01__DOT__div_temp 
                                                  >> 0x18U)))) 
                           & (3U == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))));
    vlSelf->__PVT__AS__DOT__complemented_shift_E = 
        ((0xfcU & (IData)(vlSelf->__PVT__AS__DOT__complemented_shift_E)) 
         | ((2U & ((~ ((IData)(__PVT__AS__DOT__shift_E) 
                       >> 1U)) << 1U)) | (1U & (~ (IData)(__PVT__AS__DOT__shift_E)))));
    vlSelf->__PVT__AS__DOT__complemented_shift_E = 
        ((0xf3U & (IData)(vlSelf->__PVT__AS__DOT__complemented_shift_E)) 
         | ((8U & ((~ ((IData)(__PVT__AS__DOT__shift_E) 
                       >> 3U)) << 3U)) | (4U & ((~ 
                                                 ((IData)(__PVT__AS__DOT__shift_E) 
                                                  >> 2U)) 
                                                << 2U))));
    vlSelf->__PVT__AS__DOT__complemented_shift_E = 
        ((0xcfU & (IData)(vlSelf->__PVT__AS__DOT__complemented_shift_E)) 
         | ((0x20U & ((~ ((IData)(__PVT__AS__DOT__shift_E) 
                          >> 5U)) << 5U)) | (0x10U 
                                             & ((~ 
                                                 ((IData)(__PVT__AS__DOT__shift_E) 
                                                  >> 4U)) 
                                                << 4U))));
    vlSelf->__PVT__AS__DOT__complemented_shift_E = 
        ((0x3fU & (IData)(vlSelf->__PVT__AS__DOT__complemented_shift_E)) 
         | ((0x80U & ((~ ((IData)(__PVT__AS__DOT__shift_E) 
                          >> 7U)) << 7U)) | (0x40U 
                                             & ((~ 
                                                 ((IData)(__PVT__AS__DOT__shift_E) 
                                                  >> 6U)) 
                                                << 6U))));
    __PVT__AS__DOT__ADD03__DOT__ADD02__DOT__g2 = (1U 
                                                  & (((IData)(vlSelf->__PVT__AS__DOT__new_E) 
                                                      & (IData)(vlSelf->__PVT__AS__DOT__complemented_shift_E)) 
                                                     >> 6U));
    __PVT__AS__DOT__ADD03__DOT__ADD02__DOT__p3 = (1U 
                                                  & (((IData)(vlSelf->__PVT__AS__DOT__new_E) 
                                                      ^ (IData)(vlSelf->__PVT__AS__DOT__complemented_shift_E)) 
                                                     >> 7U));
    __PVT__AS__DOT__ADD03__DOT__ADD02__DOT__g0 = (1U 
                                                  & (((IData)(vlSelf->__PVT__AS__DOT__new_E) 
                                                      & (IData)(vlSelf->__PVT__AS__DOT__complemented_shift_E)) 
                                                     >> 4U));
    __PVT__AS__DOT__ADD03__DOT__ADD02__DOT__g1 = (1U 
                                                  & (((IData)(vlSelf->__PVT__AS__DOT__new_E) 
                                                      & (IData)(vlSelf->__PVT__AS__DOT__complemented_shift_E)) 
                                                     >> 5U));
    __PVT__AS__DOT__ADD03__DOT__ADD02__DOT__p0 = (1U 
                                                  & (((IData)(vlSelf->__PVT__AS__DOT__new_E) 
                                                      ^ (IData)(vlSelf->__PVT__AS__DOT__complemented_shift_E)) 
                                                     >> 4U));
    __PVT__AS__DOT__ADD03__DOT__ADD02__DOT__p1 = (1U 
                                                  & (((IData)(vlSelf->__PVT__AS__DOT__new_E) 
                                                      ^ (IData)(vlSelf->__PVT__AS__DOT__complemented_shift_E)) 
                                                     >> 5U));
    __PVT__AS__DOT__ADD03__DOT__ADD02__DOT__p2 = (1U 
                                                  & (((IData)(vlSelf->__PVT__AS__DOT__new_E) 
                                                      ^ (IData)(vlSelf->__PVT__AS__DOT__complemented_shift_E)) 
                                                     >> 6U));
    __PVT__AS__DOT__ADD03__DOT__ADD01__DOT__g2 = (1U 
                                                  & (((IData)(vlSelf->__PVT__AS__DOT__new_E) 
                                                      & (IData)(vlSelf->__PVT__AS__DOT__complemented_shift_E)) 
                                                     >> 2U));
    __PVT__AS__DOT__ADD03__DOT__ADD01__DOT__p3 = (1U 
                                                  & (((IData)(vlSelf->__PVT__AS__DOT__new_E) 
                                                      ^ (IData)(vlSelf->__PVT__AS__DOT__complemented_shift_E)) 
                                                     >> 3U));
    __PVT__AS__DOT__ADD03__DOT__ADD01__DOT__g0 = (1U 
                                                  & ((IData)(vlSelf->__PVT__AS__DOT__new_E) 
                                                     & (IData)(vlSelf->__PVT__AS__DOT__complemented_shift_E)));
    __PVT__AS__DOT__ADD03__DOT__ADD01__DOT__g1 = (1U 
                                                  & (((IData)(vlSelf->__PVT__AS__DOT__new_E) 
                                                      & (IData)(vlSelf->__PVT__AS__DOT__complemented_shift_E)) 
                                                     >> 1U));
    __PVT__AS__DOT__ADD03__DOT__ADD01__DOT__p0 = (1U 
                                                  & ((IData)(vlSelf->__PVT__AS__DOT__new_E) 
                                                     ^ (IData)(vlSelf->__PVT__AS__DOT__complemented_shift_E)));
    __PVT__AS__DOT__ADD03__DOT__ADD01__DOT__p1 = (1U 
                                                  & (((IData)(vlSelf->__PVT__AS__DOT__new_E) 
                                                      ^ (IData)(vlSelf->__PVT__AS__DOT__complemented_shift_E)) 
                                                     >> 1U));
    __PVT__AS__DOT__ADD03__DOT__ADD01__DOT__p2 = (1U 
                                                  & (((IData)(vlSelf->__PVT__AS__DOT__new_E) 
                                                      ^ (IData)(vlSelf->__PVT__AS__DOT__complemented_shift_E)) 
                                                     >> 2U));
    vlSelf->AS__DOT__ADD03__DOT____Vcellout__ADD01__sum 
        = ((8U & (IData)(vlSelf->AS__DOT__ADD03__DOT____Vcellout__ADD01__sum)) 
           | ((((IData)(__PVT__AS__DOT__ADD03__DOT__ADD01__DOT__p2) 
                ^ (((IData)(__PVT__AS__DOT__ADD03__DOT__ADD01__DOT__g1) 
                    | ((IData)(__PVT__AS__DOT__ADD03__DOT__ADD01__DOT__p1) 
                       & (IData)(__PVT__AS__DOT__ADD03__DOT__ADD01__DOT__g0))) 
                   | ((IData)(__PVT__AS__DOT__ADD03__DOT__ADD01__DOT__p1) 
                      & (IData)(__PVT__AS__DOT__ADD03__DOT__ADD01__DOT__p0)))) 
               << 2U) | ((((IData)(__PVT__AS__DOT__ADD03__DOT__ADD01__DOT__p1) 
                           ^ ((IData)(__PVT__AS__DOT__ADD03__DOT__ADD01__DOT__g0) 
                              | (IData)(__PVT__AS__DOT__ADD03__DOT__ADD01__DOT__p0))) 
                          << 1U) | (1U & (~ (IData)(__PVT__AS__DOT__ADD03__DOT__ADD01__DOT__p0))))));
    vlSelf->AS__DOT__ADD03__DOT____Vcellout__ADD01__sum 
        = ((7U & (IData)(vlSelf->AS__DOT__ADD03__DOT____Vcellout__ADD01__sum)) 
           | (((IData)(__PVT__AS__DOT__ADD03__DOT__ADD01__DOT__p3) 
               ^ ((((IData)(__PVT__AS__DOT__ADD03__DOT__ADD01__DOT__g2) 
                    | ((IData)(__PVT__AS__DOT__ADD03__DOT__ADD01__DOT__p2) 
                       & (IData)(__PVT__AS__DOT__ADD03__DOT__ADD01__DOT__g1))) 
                   | (((IData)(__PVT__AS__DOT__ADD03__DOT__ADD01__DOT__p2) 
                       & (IData)(__PVT__AS__DOT__ADD03__DOT__ADD01__DOT__p1)) 
                      & (IData)(__PVT__AS__DOT__ADD03__DOT__ADD01__DOT__g0))) 
                  | (((IData)(__PVT__AS__DOT__ADD03__DOT__ADD01__DOT__p2) 
                      & (IData)(__PVT__AS__DOT__ADD03__DOT__ADD01__DOT__p1)) 
                     & (IData)(__PVT__AS__DOT__ADD03__DOT__ADD01__DOT__p0)))) 
              << 3U));
    __PVT__AS__DOT__ADD03__DOT__ctemp = (1U & (((((
                                                   ((IData)(vlSelf->__PVT__AS__DOT__new_E) 
                                                    & (IData)(vlSelf->__PVT__AS__DOT__complemented_shift_E)) 
                                                   >> 3U) 
                                                  | ((IData)(__PVT__AS__DOT__ADD03__DOT__ADD01__DOT__p3) 
                                                     & (IData)(__PVT__AS__DOT__ADD03__DOT__ADD01__DOT__g2))) 
                                                 | (((IData)(__PVT__AS__DOT__ADD03__DOT__ADD01__DOT__p3) 
                                                     & (IData)(__PVT__AS__DOT__ADD03__DOT__ADD01__DOT__p2)) 
                                                    & (IData)(__PVT__AS__DOT__ADD03__DOT__ADD01__DOT__g1))) 
                                                | ((((IData)(__PVT__AS__DOT__ADD03__DOT__ADD01__DOT__p3) 
                                                     & (IData)(__PVT__AS__DOT__ADD03__DOT__ADD01__DOT__p2)) 
                                                    & (IData)(__PVT__AS__DOT__ADD03__DOT__ADD01__DOT__p1)) 
                                                   & (IData)(__PVT__AS__DOT__ADD03__DOT__ADD01__DOT__g0))) 
                                               | ((((IData)(__PVT__AS__DOT__ADD03__DOT__ADD01__DOT__p3) 
                                                    & (IData)(__PVT__AS__DOT__ADD03__DOT__ADD01__DOT__p2)) 
                                                   & (IData)(__PVT__AS__DOT__ADD03__DOT__ADD01__DOT__p1)) 
                                                  & (IData)(__PVT__AS__DOT__ADD03__DOT__ADD01__DOT__p0))));
    vlSelf->AS__DOT__ADD03__DOT____Vcellout__ADD02__sum 
        = ((8U & (IData)(vlSelf->AS__DOT__ADD03__DOT____Vcellout__ADD02__sum)) 
           | ((((IData)(__PVT__AS__DOT__ADD03__DOT__ADD02__DOT__p2) 
                ^ (((IData)(__PVT__AS__DOT__ADD03__DOT__ADD02__DOT__g1) 
                    | ((IData)(__PVT__AS__DOT__ADD03__DOT__ADD02__DOT__p1) 
                       & (IData)(__PVT__AS__DOT__ADD03__DOT__ADD02__DOT__g0))) 
                   | (((IData)(__PVT__AS__DOT__ADD03__DOT__ADD02__DOT__p1) 
                       & (IData)(__PVT__AS__DOT__ADD03__DOT__ADD02__DOT__p0)) 
                      & (IData)(__PVT__AS__DOT__ADD03__DOT__ctemp)))) 
               << 2U) | ((((IData)(__PVT__AS__DOT__ADD03__DOT__ADD02__DOT__p1) 
                           ^ ((IData)(__PVT__AS__DOT__ADD03__DOT__ADD02__DOT__g0) 
                              | ((IData)(__PVT__AS__DOT__ADD03__DOT__ADD02__DOT__p0) 
                                 & (IData)(__PVT__AS__DOT__ADD03__DOT__ctemp)))) 
                          << 1U) | ((IData)(__PVT__AS__DOT__ADD03__DOT__ADD02__DOT__p0) 
                                    ^ (IData)(__PVT__AS__DOT__ADD03__DOT__ctemp)))));
    vlSelf->AS__DOT__ADD03__DOT____Vcellout__ADD02__sum 
        = ((7U & (IData)(vlSelf->AS__DOT__ADD03__DOT____Vcellout__ADD02__sum)) 
           | (((IData)(__PVT__AS__DOT__ADD03__DOT__ADD02__DOT__p3) 
               ^ ((((IData)(__PVT__AS__DOT__ADD03__DOT__ADD02__DOT__g2) 
                    | ((IData)(__PVT__AS__DOT__ADD03__DOT__ADD02__DOT__p2) 
                       & (IData)(__PVT__AS__DOT__ADD03__DOT__ADD02__DOT__g1))) 
                   | (((IData)(__PVT__AS__DOT__ADD03__DOT__ADD02__DOT__p2) 
                       & (IData)(__PVT__AS__DOT__ADD03__DOT__ADD02__DOT__p1)) 
                      & (IData)(__PVT__AS__DOT__ADD03__DOT__ADD02__DOT__g0))) 
                  | ((((IData)(__PVT__AS__DOT__ADD03__DOT__ADD02__DOT__p2) 
                       & (IData)(__PVT__AS__DOT__ADD03__DOT__ADD02__DOT__p1)) 
                      & (IData)(__PVT__AS__DOT__ADD03__DOT__ADD02__DOT__p0)) 
                     & (IData)(__PVT__AS__DOT__ADD03__DOT__ctemp)))) 
              << 3U));
    AS__DOT____Vcellout__ADD03__sum = (((IData)(vlSelf->AS__DOT__ADD03__DOT____Vcellout__ADD02__sum) 
                                        << 4U) | (IData)(vlSelf->AS__DOT__ADD03__DOT____Vcellout__ADD01__sum));
    __PVT__AS__DOT__final_E = ((0x100U & (((((0xffffff00U 
                                              & (((IData)(vlSelf->__PVT__AS__DOT__new_E) 
                                                  & (IData)(vlSelf->__PVT__AS__DOT__complemented_shift_E)) 
                                                 << 1U)) 
                                             | (((IData)(__PVT__AS__DOT__ADD03__DOT__ADD02__DOT__p3) 
                                                 & (IData)(__PVT__AS__DOT__ADD03__DOT__ADD02__DOT__g2)) 
                                                << 8U)) 
                                            | ((((IData)(__PVT__AS__DOT__ADD03__DOT__ADD02__DOT__p3) 
                                                 & (IData)(__PVT__AS__DOT__ADD03__DOT__ADD02__DOT__p2)) 
                                                & (IData)(__PVT__AS__DOT__ADD03__DOT__ADD02__DOT__g1)) 
                                               << 8U)) 
                                           | (((((IData)(__PVT__AS__DOT__ADD03__DOT__ADD02__DOT__p3) 
                                                 & (IData)(__PVT__AS__DOT__ADD03__DOT__ADD02__DOT__p2)) 
                                                & (IData)(__PVT__AS__DOT__ADD03__DOT__ADD02__DOT__p1)) 
                                               & (IData)(__PVT__AS__DOT__ADD03__DOT__ADD02__DOT__g0)) 
                                              << 8U)) 
                                          | ((((((IData)(__PVT__AS__DOT__ADD03__DOT__ADD02__DOT__p3) 
                                                 & (IData)(__PVT__AS__DOT__ADD03__DOT__ADD02__DOT__p2)) 
                                                & (IData)(__PVT__AS__DOT__ADD03__DOT__ADD02__DOT__p1)) 
                                               & (IData)(__PVT__AS__DOT__ADD03__DOT__ADD02__DOT__p0)) 
                                              & (IData)(__PVT__AS__DOT__ADD03__DOT__ctemp)) 
                                             << 8U))) 
                               | (IData)(AS__DOT____Vcellout__ADD03__sum));
    vlSelf->Underflow = (1U & (((((~ ((IData)(__PVT__AS__DOT__final_E) 
                                      >> 8U)) & (~ 
                                                 ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                  >> 1U))) 
                                 | ((~ (IData)(vlSelf->__PVT__M__DOT__carry_E)) 
                                    & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                       >> 1U))) & (~ (IData)(
                                                             (3U 
                                                              == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))))) 
                               | ((((~ (((IData)(vlSelf->__PVT__D__DOT__temp_E2) 
                                         | (IData)(vlSelf->__PVT__D__DOT__temp_E3)) 
                                        >> 8U)) & (~ (IData)(
                                                             (vlSelf->__PVT__D__DOT__DIV01__DOT__div_temp 
                                                              >> 0x18U)))) 
                                   | ((~ (((IData)(vlSelf->__PVT__D__DOT__temp_E1) 
                                           | (IData)(vlSelf->__PVT__D__DOT__temp_E2)) 
                                          >> 8U)) & (IData)(
                                                            (vlSelf->__PVT__D__DOT__DIV01__DOT__div_temp 
                                                             >> 0x18U)))) 
                                  & (3U == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))));
    vlSelf->__PVT__result1 = ((0x80000000U & ((((((~ 
                                                   (vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                    >> 0x1fU)) 
                                                  & (IData)(vlSelf->__PVT__AS__DOT__real_oper)) 
                                                 & (~ (IData)(vlSelf->__PVT__AS__DOT__M_carry))) 
                                                << 0x1fU) 
                                               | (0x80000000U 
                                                  & (((~ (IData)(vlSelf->__PVT__AS__DOT__real_oper)) 
                                                      << 0x1fU) 
                                                     & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1))) 
                                              | (0x80000000U 
                                                 & (((IData)(vlSelf->__PVT__AS__DOT__M_carry) 
                                                     << 0x1fU) 
                                                    & vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__operand_1)))) 
                              | ((0x7f800000U & ((IData)(__PVT__AS__DOT__final_E) 
                                                 << 0x17U)) 
                                 | vlSelf->__PVT__AS__DOT__final_M));
    vlSelf->M01__DOT____Vcellout__M02__out = ((0xfeU 
                                               & (IData)(vlSelf->M01__DOT____Vcellout__M02__out)) 
                                              | (1U 
                                                 & (((vlSelf->__PVT__result1 
                                                      >> 0x18U) 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                         >> 1U))) 
                                                    | ((vlSelf->__PVT__result2 
                                                        >> 0x18U) 
                                                       & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                          >> 1U)))));
    vlSelf->M01__DOT____Vcellout__M02__out = ((0xfdU 
                                               & (IData)(vlSelf->M01__DOT____Vcellout__M02__out)) 
                                              | (2U 
                                                 & (((vlSelf->__PVT__result1 
                                                      >> 0x18U) 
                                                     & ((~ 
                                                         ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                          >> 1U)) 
                                                        << 1U)) 
                                                    | ((vlSelf->__PVT__result2 
                                                        >> 0x18U) 
                                                       & (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))));
    vlSelf->M01__DOT____Vcellout__M02__out = ((0xfbU 
                                               & (IData)(vlSelf->M01__DOT____Vcellout__M02__out)) 
                                              | (4U 
                                                 & (((vlSelf->__PVT__result1 
                                                      >> 0x18U) 
                                                     & ((~ 
                                                         ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                          >> 1U)) 
                                                        << 2U)) 
                                                    | ((vlSelf->__PVT__result2 
                                                        >> 0x18U) 
                                                       & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                          << 1U)))));
    vlSelf->M01__DOT____Vcellout__M02__out = ((0xf7U 
                                               & (IData)(vlSelf->M01__DOT____Vcellout__M02__out)) 
                                              | (8U 
                                                 & (((vlSelf->__PVT__result1 
                                                      >> 0x18U) 
                                                     & ((~ 
                                                         ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                          >> 1U)) 
                                                        << 3U)) 
                                                    | ((vlSelf->__PVT__result2 
                                                        >> 0x18U) 
                                                       & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                          << 2U)))));
    vlSelf->M01__DOT____Vcellout__M02__out = ((0xefU 
                                               & (IData)(vlSelf->M01__DOT____Vcellout__M02__out)) 
                                              | (0x10U 
                                                 & (((vlSelf->__PVT__result1 
                                                      >> 0x18U) 
                                                     & ((~ 
                                                         ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                          >> 1U)) 
                                                        << 4U)) 
                                                    | ((vlSelf->__PVT__result2 
                                                        >> 0x18U) 
                                                       & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                          << 3U)))));
    vlSelf->M01__DOT____Vcellout__M02__out = ((0xdfU 
                                               & (IData)(vlSelf->M01__DOT____Vcellout__M02__out)) 
                                              | (0x20U 
                                                 & (((vlSelf->__PVT__result1 
                                                      >> 0x18U) 
                                                     & ((~ 
                                                         ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                          >> 1U)) 
                                                        << 5U)) 
                                                    | ((vlSelf->__PVT__result2 
                                                        >> 0x18U) 
                                                       & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                          << 4U)))));
    vlSelf->M01__DOT____Vcellout__M02__out = ((0xbfU 
                                               & (IData)(vlSelf->M01__DOT____Vcellout__M02__out)) 
                                              | (0x40U 
                                                 & (((vlSelf->__PVT__result1 
                                                      >> 0x18U) 
                                                     & ((~ 
                                                         ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                          >> 1U)) 
                                                        << 6U)) 
                                                    | ((vlSelf->__PVT__result2 
                                                        >> 0x18U) 
                                                       & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                          << 5U)))));
    vlSelf->M01__DOT____Vcellout__M02__out = ((0x7fU 
                                               & (IData)(vlSelf->M01__DOT____Vcellout__M02__out)) 
                                              | (0x80U 
                                                 & (((vlSelf->__PVT__result1 
                                                      >> 0x18U) 
                                                     & ((~ 
                                                         ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                          >> 1U)) 
                                                        << 7U)) 
                                                    | ((vlSelf->__PVT__result2 
                                                        >> 0x18U) 
                                                       & ((IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                          << 6U)))));
}

VL_INLINE_OPT void Vmips_machine_add_sub_mul_div___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__16(Vmips_machine_add_sub_mul_div* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmips_machine_add_sub_mul_div___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__16\n"); );
    // Body
    vlSelf->__PVT__temp_result = (((IData)(vlSelf->M01__DOT____Vcellout__M02__out) 
                                   << 0x18U) | vlSelf->__PVT__M01__DOT__M01->__PVT__out);
    vlSelf->M02__DOT____Vcellout__M02__out = ((0xfeU 
                                               & (IData)(vlSelf->M02__DOT____Vcellout__M02__out)) 
                                              | (1U 
                                                 & (((vlSelf->__PVT__temp_result 
                                                      >> 0x18U) 
                                                     & (~ (IData)(
                                                                  (3U 
                                                                   == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))))) 
                                                    | ((vlSelf->__PVT__result3 
                                                        >> 0x18U) 
                                                       & (3U 
                                                          == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))))));
    vlSelf->M02__DOT____Vcellout__M02__out = ((0xfdU 
                                               & (IData)(vlSelf->M02__DOT____Vcellout__M02__out)) 
                                              | (2U 
                                                 & ((0xfeU 
                                                     & ((vlSelf->__PVT__temp_result 
                                                         >> 0x18U) 
                                                        & ((~ (IData)(
                                                                      (3U 
                                                                       == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))) 
                                                           << 1U))) 
                                                    | (((vlSelf->__PVT__result3 
                                                         >> 0x19U) 
                                                        & (3U 
                                                           == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))) 
                                                       << 1U))));
    vlSelf->M02__DOT____Vcellout__M02__out = ((0xfbU 
                                               & (IData)(vlSelf->M02__DOT____Vcellout__M02__out)) 
                                              | (4U 
                                                 & ((0xfcU 
                                                     & ((vlSelf->__PVT__temp_result 
                                                         >> 0x18U) 
                                                        & ((~ (IData)(
                                                                      (3U 
                                                                       == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))) 
                                                           << 2U))) 
                                                    | (((vlSelf->__PVT__result3 
                                                         >> 0x1aU) 
                                                        & (3U 
                                                           == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))) 
                                                       << 2U))));
    vlSelf->M02__DOT____Vcellout__M02__out = ((0xf7U 
                                               & (IData)(vlSelf->M02__DOT____Vcellout__M02__out)) 
                                              | (8U 
                                                 & ((0xf8U 
                                                     & ((vlSelf->__PVT__temp_result 
                                                         >> 0x18U) 
                                                        & ((~ (IData)(
                                                                      (3U 
                                                                       == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))) 
                                                           << 3U))) 
                                                    | (((vlSelf->__PVT__result3 
                                                         >> 0x1bU) 
                                                        & (3U 
                                                           == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))) 
                                                       << 3U))));
    vlSelf->M02__DOT____Vcellout__M02__out = ((0xefU 
                                               & (IData)(vlSelf->M02__DOT____Vcellout__M02__out)) 
                                              | (0x10U 
                                                 & ((0xf0U 
                                                     & ((vlSelf->__PVT__temp_result 
                                                         >> 0x18U) 
                                                        & ((~ (IData)(
                                                                      (3U 
                                                                       == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))) 
                                                           << 4U))) 
                                                    | (((vlSelf->__PVT__result3 
                                                         >> 0x1cU) 
                                                        & (3U 
                                                           == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))) 
                                                       << 4U))));
    vlSelf->M02__DOT____Vcellout__M02__out = ((0xdfU 
                                               & (IData)(vlSelf->M02__DOT____Vcellout__M02__out)) 
                                              | (0x20U 
                                                 & ((0xe0U 
                                                     & ((vlSelf->__PVT__temp_result 
                                                         >> 0x18U) 
                                                        & ((~ (IData)(
                                                                      (3U 
                                                                       == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))) 
                                                           << 5U))) 
                                                    | (((vlSelf->__PVT__result3 
                                                         >> 0x1dU) 
                                                        & (3U 
                                                           == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))) 
                                                       << 5U))));
    vlSelf->M02__DOT____Vcellout__M02__out = ((0xbfU 
                                               & (IData)(vlSelf->M02__DOT____Vcellout__M02__out)) 
                                              | (0x40U 
                                                 & ((0xc0U 
                                                     & ((vlSelf->__PVT__temp_result 
                                                         >> 0x18U) 
                                                        & ((~ (IData)(
                                                                      (3U 
                                                                       == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))) 
                                                           << 6U))) 
                                                    | (((vlSelf->__PVT__result3 
                                                         >> 0x1eU) 
                                                        & (3U 
                                                           == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))) 
                                                       << 6U))));
    vlSelf->M02__DOT____Vcellout__M02__out = ((0x7fU 
                                               & (IData)(vlSelf->M02__DOT____Vcellout__M02__out)) 
                                              | (0x80U 
                                                 & ((0x80U 
                                                     & ((vlSelf->__PVT__temp_result 
                                                         >> 0x18U) 
                                                        & ((~ (IData)(
                                                                      (3U 
                                                                       == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))) 
                                                           << 7U))) 
                                                    | (((vlSelf->__PVT__result3 
                                                         >> 0x1fU) 
                                                        & (3U 
                                                           == (IData)(vlSymsp->TOP.mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))) 
                                                       << 7U))));
}
