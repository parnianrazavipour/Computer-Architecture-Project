// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmips_machine.h for the primary calling header

#include "verilated.h"

#include "Vmips_machine__Syms.h"
#include "Vmips_machine___024root.h"

VL_INLINE_OPT void Vmips_machine___024root___settle__TOP__6(Vmips_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_machine___024root___settle__TOP__6\n"); );
    // Init
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M031__sl;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ctemp1;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ctemp2;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT____Vcellout__ADD01__sum;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT____Vcellout__ADD02__sum;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT____Vcellout__ADD03__sum;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ctemp;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__g0;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__g1;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__g2;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p0;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p1;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p2;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p3;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__g0;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__g1;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__g2;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p0;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p1;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p2;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p3;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ctemp;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__g0;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__g1;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__g2;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p0;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p1;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p2;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p3;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__g0;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__g1;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__g2;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p0;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p1;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p2;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p3;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ctemp;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__g0;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__g1;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__g2;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p0;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p1;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p2;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p3;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__g0;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__g1;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__g2;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p0;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p1;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p2;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p3;
    IData/*23:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ctemp1;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ctemp2;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT____Vcellout__ADD01__sum;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT____Vcellout__ADD02__sum;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT____Vcellout__ADD03__sum;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD01__DOT__ctemp;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD02__DOT__ctemp;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD03__DOT__ctemp;
    IData/*23:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT____Vcellout__ADD23__sum;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ctemp1;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ctemp2;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT____Vcellout__ADD01__sum;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT____Vcellout__ADD02__sum;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT____Vcellout__ADD03__sum;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ctemp;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__g0;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__g1;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__g2;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__p1;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__p2;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__p3;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__g0;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__g1;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__g2;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p0;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p1;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p2;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p3;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ctemp;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__g0;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__g1;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__g2;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p0;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p1;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p2;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p3;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__g0;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__g1;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__g2;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p0;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p1;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p2;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p3;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ctemp;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__g0;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__g1;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__g2;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p0;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p1;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p2;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p3;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__g0;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__g1;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__p0;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__p1;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__p2;
    // Body
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__g0 
        = (1U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                  & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round)) 
                 >> 0x14U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__g1 
        = (1U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                  & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round)) 
                 >> 0x15U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__p0 
        = (1U & ((7U & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                        >> 0x14U)) ^ ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round) 
                                      >> 0x14U)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__p1 
        = (1U & ((3U & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                        >> 0x15U)) ^ ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round) 
                                      >> 0x15U)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__p2 
        = (1U & ((1U & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                        >> 0x16U)) ^ ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round) 
                                      >> 0x16U)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__g2 
        = (1U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                  & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round)) 
                 >> 0x12U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p3 
        = (1U & ((0xfU & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                          >> 0x13U)) ^ ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round) 
                                        >> 0x13U)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__g0 
        = (1U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                  & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round)) 
                 >> 0x10U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__g1 
        = (1U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                  & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round)) 
                 >> 0x11U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p0 
        = (1U & ((0x7fU & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                           >> 0x10U)) ^ ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round) 
                                         >> 0x10U)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p1 
        = (1U & ((0x3fU & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                           >> 0x11U)) ^ ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round) 
                                         >> 0x11U)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p2 
        = (1U & ((0x1fU & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                           >> 0x12U)) ^ ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round) 
                                         >> 0x12U)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__g2 
        = (1U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                  & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round)) 
                 >> 0xeU));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p3 
        = (1U & ((0xffU & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                           >> 0xfU)) ^ ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round) 
                                        >> 0xfU)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__g0 
        = (1U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                  & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round)) 
                 >> 0xcU));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__g1 
        = (1U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                  & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round)) 
                 >> 0xdU));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p0 
        = (1U & ((0x7ffU & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                            >> 0xcU)) ^ ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round) 
                                         >> 0xcU)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p1 
        = (1U & ((0x3ffU & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                            >> 0xdU)) ^ ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round) 
                                         >> 0xdU)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p2 
        = (1U & ((0x1ffU & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                            >> 0xeU)) ^ ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round) 
                                         >> 0xeU)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__g2 
        = (1U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                  & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round)) 
                 >> 0xaU));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p3 
        = (1U & ((0xfffU & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                            >> 0xbU)) ^ ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round) 
                                         >> 0xbU)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__g0 
        = (1U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                  & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round)) 
                 >> 8U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__g1 
        = (1U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                  & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round)) 
                 >> 9U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p0 
        = (1U & ((0x7fffU & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                             >> 8U)) ^ ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round) 
                                        >> 8U)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p1 
        = (1U & ((0x3fffU & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                             >> 9U)) ^ ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round) 
                                        >> 9U)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p2 
        = (1U & ((0x1fffU & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                             >> 0xaU)) ^ ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round) 
                                          >> 0xaU)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__g2 
        = (1U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                  & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round)) 
                 >> 6U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p3 
        = (1U & ((0xffffU & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                             >> 7U)) ^ ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round) 
                                        >> 7U)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__g0 
        = (1U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                  & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round)) 
                 >> 4U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__g1 
        = (1U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                  & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round)) 
                 >> 5U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p0 
        = (1U & ((0x7ffffU & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                              >> 4U)) ^ ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round) 
                                         >> 4U)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p1 
        = (1U & ((0x3ffffU & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                              >> 5U)) ^ ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round) 
                                         >> 5U)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p2 
        = (1U & ((0x1ffffU & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                              >> 6U)) ^ ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round) 
                                         >> 6U)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__g2 
        = (1U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                  & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round)) 
                 >> 2U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__p3 
        = (1U & ((0xfffffU & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                              >> 3U)) ^ ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round) 
                                         >> 3U)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__g0 
        = (0x7fffffU & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                        & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__g1 
        = (1U & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                  & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round)) 
                 >> 1U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__p1 
        = (1U & ((0x3fffffU & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                               >> 1U)) ^ ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round) 
                                          >> 1U)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__p2 
        = (1U & ((0x1fffffU & (vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                               >> 2U)) ^ ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round) 
                                          >> 2U)));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result3 
        = ((0x80000000U & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                           ^ vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out)) 
           | (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__final_E) 
               << 0x17U) | (0x7fffffU & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__M02.out)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__g2 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 0x16U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p3 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  ^ vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 0x17U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__g0 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 0x14U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__g1 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 0x15U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p0 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  ^ vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 0x14U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p1 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  ^ vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 0x15U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p2 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  ^ vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 0x16U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__g2 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 0x12U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p3 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  ^ vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 0x13U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__g0 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 0x10U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__g1 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 0x11U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p0 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  ^ vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 0x10U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p1 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  ^ vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 0x11U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p2 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  ^ vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 0x12U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__g2 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 0xeU));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p3 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  ^ vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 0xfU));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__g0 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 0xcU));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__g1 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 0xdU));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p0 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  ^ vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 0xcU));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p1 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  ^ vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 0xdU));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p2 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  ^ vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 0xeU));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__g2 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 0xaU));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p3 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  ^ vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 0xbU));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__g0 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 8U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__g1 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 9U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p0 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  ^ vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 8U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p1 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  ^ vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 9U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p2 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  ^ vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 0xaU));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__g2 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 6U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p3 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  ^ vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 7U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__g0 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 4U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__g1 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 5U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p0 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  ^ vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 4U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p1 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  ^ vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 5U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p2 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  ^ vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 6U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__g2 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 2U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p3 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  ^ vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 3U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__g0 
        = (1U & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                 & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__g1 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 1U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p0 
        = (1U & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                 ^ vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p1 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  ^ vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 1U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p2 
        = (1U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                  ^ vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                 >> 2U));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT____Vcellout__ADD01__sum 
        = ((8U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT____Vcellout__ADD01__sum)) 
           | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__p2) 
                ^ ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__g1) 
                   | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__p1) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__g0)))) 
               << 2U) | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__p1) 
                           ^ (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__g0)) 
                          << 1U) | (1U & ((0x7fffffU 
                                           & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out) 
                                          ^ (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round))))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT____Vcellout__ADD01__sum 
        = ((7U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT____Vcellout__ADD01__sum)) 
           | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__p3) 
               ^ (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__g2) 
                   | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__p2) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__g1))) 
                  | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__p2) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__p1)) 
                     & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__g0)))) 
              << 3U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ctemp 
        = (1U & ((((0xfffffU & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                                 & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round)) 
                                >> 3U)) | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__p3) 
                                           & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__g2))) 
                  | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__p3) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__p2)) 
                     & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__g1))) 
                 | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__p3) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__p2)) 
                     & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__p1)) 
                    & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD01__DOT__g0))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT____Vcellout__ADD01__sum 
        = ((8U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT____Vcellout__ADD01__sum)) 
           | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p2) 
                ^ (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__g1) 
                    | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p1) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__g0))) 
                   | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p1) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p0)) 
                      & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper)))) 
               << 2U) | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p1) 
                           ^ ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__g0) 
                              | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p0) 
                                 & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper)))) 
                          << 1U) | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p0) 
                                    ^ (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper)))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT____Vcellout__ADD01__sum 
        = ((7U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT____Vcellout__ADD01__sum)) 
           | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p3) 
               ^ ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__g2) 
                    | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p2) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__g1))) 
                   | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p2) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p1)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__g0))) 
                  | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p2) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p1)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p0)) 
                     & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper)))) 
              << 3U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ctemp 
        = (1U & ((((((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                      & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                     >> 3U) | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p3) 
                               & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__g2))) 
                   | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p3) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p2)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__g1))) 
                  | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p3) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p2)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p1)) 
                     & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__g0))) 
                 | (((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p3) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p2)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p1)) 
                     & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD01__DOT__p0)) 
                    & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT____Vcellout__ADD02__sum 
        = ((8U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT____Vcellout__ADD02__sum)) 
           | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p2) 
                ^ (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__g1) 
                    | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p1) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__g0))) 
                   | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p1) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p0)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ctemp)))) 
               << 2U) | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p1) 
                           ^ ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__g0) 
                              | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p0) 
                                 & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ctemp)))) 
                          << 1U) | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p0) 
                                    ^ (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ctemp)))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT____Vcellout__ADD02__sum 
        = ((7U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT____Vcellout__ADD02__sum)) 
           | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p3) 
               ^ ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__g2) 
                    | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p2) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__g1))) 
                   | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p2) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p1)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__g0))) 
                  | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p2) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p1)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p0)) 
                     & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ctemp)))) 
              << 3U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ctemp1 
        = (1U & (((((0xffffU & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                                 & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round)) 
                                >> 7U)) | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p3) 
                                           & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__g2))) 
                   | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p3) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p2)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__g1))) 
                  | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p3) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p2)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p1)) 
                     & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__g0))) 
                 | (((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p3) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p2)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p1)) 
                     & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ADD02__DOT__p0)) 
                    & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT__ctemp))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT____Vcellout__ADD02__sum 
        = ((8U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT____Vcellout__ADD02__sum)) 
           | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p2) 
                ^ (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__g1) 
                    | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p1) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__g0))) 
                   | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p1) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p0)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ctemp)))) 
               << 2U) | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p1) 
                           ^ ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__g0) 
                              | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p0) 
                                 & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ctemp)))) 
                          << 1U) | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p0) 
                                    ^ (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ctemp)))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT____Vcellout__ADD02__sum 
        = ((7U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT____Vcellout__ADD02__sum)) 
           | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p3) 
               ^ ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__g2) 
                    | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p2) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__g1))) 
                   | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p2) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p1)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__g0))) 
                  | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p2) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p1)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p0)) 
                     & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ctemp)))) 
              << 3U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ctemp1 
        = (1U & ((((((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                      & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                     >> 7U) | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p3) 
                               & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__g2))) 
                   | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p3) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p2)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__g1))) 
                  | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p3) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p2)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p1)) 
                     & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__g0))) 
                 | (((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p3) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p2)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p1)) 
                     & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ADD02__DOT__p0)) 
                    & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT__ctemp))));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT____Vcellout__ADD01__sum 
        = (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT____Vcellout__ADD02__sum) 
            << 4U) | (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD01__DOT____Vcellout__ADD01__sum));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT____Vcellout__ADD01__sum 
        = ((8U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT____Vcellout__ADD01__sum)) 
           | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p2) 
                ^ (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__g1) 
                    | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p1) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__g0))) 
                   | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p1) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p0)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ctemp1)))) 
               << 2U) | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p1) 
                           ^ ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__g0) 
                              | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p0) 
                                 & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ctemp1)))) 
                          << 1U) | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p0) 
                                    ^ (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ctemp1)))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT____Vcellout__ADD01__sum 
        = ((7U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT____Vcellout__ADD01__sum)) 
           | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p3) 
               ^ ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__g2) 
                    | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p2) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__g1))) 
                   | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p2) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p1)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__g0))) 
                  | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p2) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p1)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p0)) 
                     & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ctemp1)))) 
              << 3U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ctemp 
        = (1U & (((((0xfffU & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                                & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round)) 
                               >> 0xbU)) | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p3) 
                                            & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__g2))) 
                   | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p3) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p2)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__g1))) 
                  | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p3) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p2)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p1)) 
                     & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__g0))) 
                 | (((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p3) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p2)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p1)) 
                     & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD01__DOT__p0)) 
                    & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ctemp1))));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT____Vcellout__ADD01__sum 
        = (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT____Vcellout__ADD02__sum) 
            << 4U) | (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD01__DOT____Vcellout__ADD01__sum));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT____Vcellout__ADD01__sum 
        = ((8U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT____Vcellout__ADD01__sum)) 
           | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p2) 
                ^ (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__g1) 
                    | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p1) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__g0))) 
                   | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p1) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p0)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ctemp1)))) 
               << 2U) | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p1) 
                           ^ ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__g0) 
                              | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p0) 
                                 & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ctemp1)))) 
                          << 1U) | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p0) 
                                    ^ (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ctemp1)))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT____Vcellout__ADD01__sum 
        = ((7U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT____Vcellout__ADD01__sum)) 
           | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p3) 
               ^ ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__g2) 
                    | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p2) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__g1))) 
                   | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p2) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p1)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__g0))) 
                  | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p2) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p1)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p0)) 
                     & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ctemp1)))) 
              << 3U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ctemp 
        = (1U & ((((((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                      & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                     >> 0xbU) | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p3) 
                                 & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__g2))) 
                   | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p3) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p2)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__g1))) 
                  | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p3) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p2)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p1)) 
                     & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__g0))) 
                 | (((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p3) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p2)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p1)) 
                     & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD01__DOT__p0)) 
                    & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ctemp1))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT____Vcellout__ADD02__sum 
        = ((8U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT____Vcellout__ADD02__sum)) 
           | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p2) 
                ^ (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__g1) 
                    | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p1) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__g0))) 
                   | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p1) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p0)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ctemp)))) 
               << 2U) | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p1) 
                           ^ ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__g0) 
                              | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p0) 
                                 & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ctemp)))) 
                          << 1U) | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p0) 
                                    ^ (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ctemp)))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT____Vcellout__ADD02__sum 
        = ((7U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT____Vcellout__ADD02__sum)) 
           | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p3) 
               ^ ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__g2) 
                    | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p2) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__g1))) 
                   | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p2) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p1)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__g0))) 
                  | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p2) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p1)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p0)) 
                     & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ctemp)))) 
              << 3U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ctemp2 
        = (1U & (((((0xffU & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                               & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round)) 
                              >> 0xfU)) | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p3) 
                                           & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__g2))) 
                   | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p3) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p2)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__g1))) 
                  | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p3) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p2)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p1)) 
                     & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__g0))) 
                 | (((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p3) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p2)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p1)) 
                     & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ADD02__DOT__p0)) 
                    & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT__ctemp))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT____Vcellout__ADD02__sum 
        = ((8U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT____Vcellout__ADD02__sum)) 
           | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p2) 
                ^ (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__g1) 
                    | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p1) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__g0))) 
                   | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p1) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p0)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ctemp)))) 
               << 2U) | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p1) 
                           ^ ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__g0) 
                              | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p0) 
                                 & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ctemp)))) 
                          << 1U) | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p0) 
                                    ^ (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ctemp)))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT____Vcellout__ADD02__sum 
        = ((7U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT____Vcellout__ADD02__sum)) 
           | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p3) 
               ^ ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__g2) 
                    | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p2) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__g1))) 
                   | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p2) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p1)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__g0))) 
                  | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p2) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p1)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p0)) 
                     & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ctemp)))) 
              << 3U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ctemp2 
        = (1U & ((((((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                      & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                     >> 0xfU) | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p3) 
                                 & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__g2))) 
                   | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p3) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p2)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__g1))) 
                  | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p3) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p2)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p1)) 
                     & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__g0))) 
                 | (((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p3) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p2)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p1)) 
                     & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ADD02__DOT__p0)) 
                    & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT__ctemp))));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT____Vcellout__ADD02__sum 
        = (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT____Vcellout__ADD02__sum) 
            << 4U) | (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD02__DOT____Vcellout__ADD01__sum));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT____Vcellout__ADD01__sum 
        = ((8U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT____Vcellout__ADD01__sum)) 
           | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p2) 
                ^ (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__g1) 
                    | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p1) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__g0))) 
                   | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p1) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p0)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ctemp2)))) 
               << 2U) | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p1) 
                           ^ ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__g0) 
                              | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p0) 
                                 & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ctemp2)))) 
                          << 1U) | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p0) 
                                    ^ (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ctemp2)))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT____Vcellout__ADD01__sum 
        = ((7U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT____Vcellout__ADD01__sum)) 
           | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p3) 
               ^ ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__g2) 
                    | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p2) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__g1))) 
                   | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p2) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p1)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__g0))) 
                  | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p2) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p1)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p0)) 
                     & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ctemp2)))) 
              << 3U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ctemp 
        = (1U & (((((0xfU & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                              & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round)) 
                             >> 0x13U)) | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p3) 
                                           & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__g2))) 
                   | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p3) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p2)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__g1))) 
                  | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p3) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p2)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p1)) 
                     & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__g0))) 
                 | (((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p3) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p2)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p1)) 
                     & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD01__DOT__p0)) 
                    & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ctemp2))));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT____Vcellout__ADD02__sum 
        = (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT____Vcellout__ADD02__sum) 
            << 4U) | (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD02__DOT____Vcellout__ADD01__sum));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT____Vcellout__ADD01__sum 
        = ((8U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT____Vcellout__ADD01__sum)) 
           | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p2) 
                ^ (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__g1) 
                    | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p1) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__g0))) 
                   | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p1) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p0)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ctemp2)))) 
               << 2U) | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p1) 
                           ^ ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__g0) 
                              | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p0) 
                                 & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ctemp2)))) 
                          << 1U) | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p0) 
                                    ^ (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ctemp2)))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT____Vcellout__ADD01__sum 
        = ((7U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT____Vcellout__ADD01__sum)) 
           | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p3) 
               ^ ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__g2) 
                    | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p2) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__g1))) 
                   | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p2) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p1)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__g0))) 
                  | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p2) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p1)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p0)) 
                     & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ctemp2)))) 
              << 3U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ctemp 
        = (1U & ((((((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                      & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                     >> 0x13U) | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p3) 
                                  & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__g2))) 
                   | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p3) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p2)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__g1))) 
                  | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p3) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p2)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p1)) 
                     & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__g0))) 
                 | (((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p3) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p2)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p1)) 
                     & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD01__DOT__p0)) 
                    & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ctemp2))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT____Vcellout__ADD02__sum 
        = ((8U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT____Vcellout__ADD02__sum)) 
           | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__p2) 
                ^ (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__g1) 
                    | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__p1) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__g0))) 
                   | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__p1) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__p0)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ctemp)))) 
               << 2U) | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__p1) 
                           ^ ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__g0) 
                              | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__p0) 
                                 & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ctemp)))) 
                          << 1U) | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__p0) 
                                    ^ (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ctemp)))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT____Vcellout__ADD02__sum 
        = ((7U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT____Vcellout__ADD02__sum)) 
           | (8U & ((0xff8U & ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round) 
                               >> 0x14U)) ^ ((((8U 
                                                & ((vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02.out 
                                                    & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_product_round)) 
                                                   >> 0x13U)) 
                                               | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__p2) 
                                                   & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__g1)) 
                                                  << 3U)) 
                                              | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__p2) 
                                                   & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__p1)) 
                                                  & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__g0)) 
                                                 << 3U)) 
                                             | (((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__p2) 
                                                   & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__p1)) 
                                                  & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ADD02__DOT__p0)) 
                                                 & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT__ctemp)) 
                                                << 3U)))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_carry 
        = (1U & ((((((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M1 
                      & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04.out) 
                     >> 0x17U) | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p3) 
                                  & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__g2))) 
                   | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p3) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p2)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__g1))) 
                  | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p3) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p2)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p1)) 
                     & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__g0))) 
                 | (((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p3) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p2)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p1)) 
                     & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p0)) 
                    & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ctemp))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT____Vcellout__ADD02__sum 
        = ((8U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT____Vcellout__ADD02__sum)) 
           | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p2) 
                ^ (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__g1) 
                    | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p1) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__g0))) 
                   | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p1) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p0)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ctemp)))) 
               << 2U) | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p1) 
                           ^ ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__g0) 
                              | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p0) 
                                 & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ctemp)))) 
                          << 1U) | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p0) 
                                    ^ (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ctemp)))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT____Vcellout__ADD02__sum 
        = ((7U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT____Vcellout__ADD02__sum)) 
           | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p3) 
               ^ ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__g2) 
                    | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p2) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__g1))) 
                   | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p2) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p1)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__g0))) 
                  | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p2) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p1)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ADD02__DOT__p0)) 
                     & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT__ctemp)))) 
              << 3U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT____Vcellout__ADD03__sum 
        = (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT____Vcellout__ADD02__sum) 
            << 4U) | (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT__ADD03__DOT____Vcellout__ADD01__sum));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M031__sl 
        = ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_carry) 
           & (~ (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper)));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M05__sl 
        = ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper) 
           & (~ (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_carry)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT____Vcellout__ADD03__sum 
        = (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT____Vcellout__ADD02__sum) 
            << 4U) | (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT__ADD03__DOT____Vcellout__ADD01__sum));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT____Vcellout__ADD23__sum 
        = (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT____Vcellout__ADD03__sum) 
            << 0x10U) | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT____Vcellout__ADD02__sum) 
                          << 8U) | (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__ADD23__DOT____Vcellout__ADD01__sum)));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__new_E 
        = ((0xfeU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__new_E)) 
           | (1U & (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__E) 
                     & (~ (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M031__sl))) 
                    | ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__One_Added_E) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M031__sl)))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__new_E 
        = ((0xfdU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__new_E)) 
           | (2U & (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__E) 
                     & ((~ (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M031__sl)) 
                        << 1U)) | ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__One_Added_E) 
                                   & ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M031__sl) 
                                      << 1U)))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__new_E 
        = ((0xfbU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__new_E)) 
           | (4U & (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__E) 
                     & ((~ (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M031__sl)) 
                        << 2U)) | ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__One_Added_E) 
                                   & ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M031__sl) 
                                      << 2U)))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__new_E 
        = ((0xf7U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__new_E)) 
           | (8U & (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__E) 
                     & ((~ (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M031__sl)) 
                        << 3U)) | ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__One_Added_E) 
                                   & ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M031__sl) 
                                      << 3U)))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__new_E 
        = ((0xefU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__new_E)) 
           | (0x10U & (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__E) 
                        & ((~ (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M031__sl)) 
                           << 4U)) | ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__One_Added_E) 
                                      & ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M031__sl) 
                                         << 4U)))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__new_E 
        = ((0xdfU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__new_E)) 
           | (0x20U & (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__E) 
                        & ((~ (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M031__sl)) 
                           << 5U)) | ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__One_Added_E) 
                                      & ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M031__sl) 
                                         << 5U)))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__new_E 
        = ((0xbfU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__new_E)) 
           | (0x40U & (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__E) 
                        & ((~ (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M031__sl)) 
                           << 6U)) | ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__One_Added_E) 
                                      & ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M031__sl) 
                                         << 6U)))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__new_E 
        = ((0x7fU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__new_E)) 
           | (0x80U & (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__E) 
                        & ((~ (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M031__sl)) 
                           << 7U)) | ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__One_Added_E) 
                                      & ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT____Vcellinp__M031__sl) 
                                         << 7U)))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
        = (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT____Vcellout__ADD03__sum) 
            << 0x10U) | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT____Vcellout__ADD02__sum) 
                          << 8U) | (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD02__DOT____Vcellout__ADD01__sum)));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result2 
        = ((0x80000000U & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                           ^ vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out)) 
           | ((0x7f800000U & ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_E) 
                              << 0x17U)) | (0x7fffffU 
                                            & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT____Vcellout__ADD23__sum)));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__C01__DOT____Vcellout__C01__out 
        = ((0xfcU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__C01__DOT____Vcellout__C01__out)) 
           | ((2U & ((~ (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                         >> 1U)) << 1U)) | (1U & (~ vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__C01__DOT____Vcellout__C01__out 
        = ((0xf3U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__C01__DOT____Vcellout__C01__out)) 
           | ((8U & ((~ (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                         >> 3U)) << 3U)) | (4U & ((~ 
                                                   (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                                                    >> 2U)) 
                                                  << 2U))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__C01__DOT____Vcellout__C01__out 
        = ((0xcfU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__C01__DOT____Vcellout__C01__out)) 
           | ((0x20U & ((~ (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                            >> 5U)) << 5U)) | (0x10U 
                                               & ((~ 
                                                   (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                                                    >> 4U)) 
                                                  << 4U))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__C01__DOT____Vcellout__C01__out 
        = ((0x3fU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__C01__DOT____Vcellout__C01__out)) 
           | ((0x80U & ((~ (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                            >> 7U)) << 7U)) | (0x40U 
                                               & ((~ 
                                                   (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                                                    >> 6U)) 
                                                  << 6U))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__C01__DOT____Vcellout__C02__out 
        = ((0xfcU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__C01__DOT____Vcellout__C02__out)) 
           | ((2U & ((~ (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                         >> 9U)) << 1U)) | (1U & (~ 
                                                  (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                                                   >> 8U)))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__C01__DOT____Vcellout__C02__out 
        = ((0xf3U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__C01__DOT____Vcellout__C02__out)) 
           | ((8U & ((~ (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                         >> 0xbU)) << 3U)) | (4U & 
                                              ((~ (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                                                   >> 0xaU)) 
                                               << 2U))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__C01__DOT____Vcellout__C02__out 
        = ((0xcfU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__C01__DOT____Vcellout__C02__out)) 
           | ((0x20U & ((~ (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                            >> 0xdU)) << 5U)) | (0x10U 
                                                 & ((~ 
                                                     (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                                                      >> 0xcU)) 
                                                    << 4U))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__C01__DOT____Vcellout__C02__out 
        = ((0x3fU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__C01__DOT____Vcellout__C02__out)) 
           | ((0x80U & ((~ (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                            >> 0xfU)) << 7U)) | (0x40U 
                                                 & ((~ 
                                                     (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                                                      >> 0xeU)) 
                                                    << 6U))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__C01__DOT____Vcellout__C03__out 
        = ((0xfcU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__C01__DOT____Vcellout__C03__out)) 
           | ((2U & ((~ (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                         >> 0x11U)) << 1U)) | (1U & 
                                               (~ (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                                                   >> 0x10U)))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__C01__DOT____Vcellout__C03__out 
        = ((0xf3U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__C01__DOT____Vcellout__C03__out)) 
           | ((8U & ((~ (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                         >> 0x13U)) << 3U)) | (4U & 
                                               ((~ 
                                                 (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                                                  >> 0x12U)) 
                                                << 2U))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__C01__DOT____Vcellout__C03__out 
        = ((0xcfU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__C01__DOT____Vcellout__C03__out)) 
           | ((0x20U & ((~ (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                            >> 0x15U)) << 5U)) | (0x10U 
                                                  & ((~ 
                                                      (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                                                       >> 0x14U)) 
                                                     << 4U))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__C01__DOT____Vcellout__C03__out 
        = ((0x3fU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__C01__DOT____Vcellout__C03__out)) 
           | ((0x80U & ((~ (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                            >> 0x17U)) << 7U)) | (0x40U 
                                                  & ((~ 
                                                      (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_result 
                                                       >> 0x16U)) 
                                                     << 6U))));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp 
        = (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__C01__DOT____Vcellout__C03__out) 
            << 0x10U) | (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__C01__DOT____Vcellout__C02__out) 
                          << 8U) | (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__C01__DOT____Vcellout__C01__out)));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD01__DOT____Vcellout__ADD01__sum 
        = ((8U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD01__DOT____Vcellout__ADD01__sum)) 
           | ((4U & ((0xfffffffcU & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp) 
                     ^ (0xfffffffcU & ((mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp 
                                        << 1U) & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp 
                                                  << 2U))))) 
              | ((2U & ((0xfffffffeU & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp) 
                        ^ (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp 
                           << 1U))) | (1U & (~ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp)))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD01__DOT____Vcellout__ADD01__sum 
        = ((7U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD01__DOT____Vcellout__ADD01__sum)) 
           | (8U & ((0xfffffff8U & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp) 
                    ^ ((IData)((7U == (7U & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp))) 
                       << 3U))));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD01__DOT__ctemp 
        = (IData)((0xfU == (0xfU & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp)));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD01__DOT____Vcellout__ADD02__sum 
        = ((8U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD01__DOT____Vcellout__ADD02__sum)) 
           | ((4U & ((0xffffffcU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp 
                                    >> 4U)) ^ (((IData)(
                                                        (0x30U 
                                                         == 
                                                         (0x30U 
                                                          & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp))) 
                                                & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD01__DOT__ctemp)) 
                                               << 2U))) 
              | ((2U & ((0xffffffeU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp 
                                       >> 4U)) ^ (0x1ffffffeU 
                                                  & ((mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp 
                                                      >> 3U) 
                                                     & ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD01__DOT__ctemp) 
                                                        << 1U))))) 
                 | (1U & ((mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp 
                           >> 4U) ^ (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD01__DOT__ctemp))))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD01__DOT____Vcellout__ADD02__sum 
        = ((7U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD01__DOT____Vcellout__ADD02__sum)) 
           | (8U & ((0xffffff8U & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp 
                                   >> 4U)) ^ (((IData)(
                                                       (0x70U 
                                                        == 
                                                        (0x70U 
                                                         & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp))) 
                                               & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD01__DOT__ctemp)) 
                                              << 3U))));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ctemp1 
        = ((IData)((0xf0U == (0xf0U & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp))) 
           & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD01__DOT__ctemp));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT____Vcellout__ADD01__sum 
        = (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD01__DOT____Vcellout__ADD02__sum) 
            << 4U) | (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD01__DOT____Vcellout__ADD01__sum));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD02__DOT____Vcellout__ADD01__sum 
        = ((8U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD02__DOT____Vcellout__ADD01__sum)) 
           | ((4U & ((0xfffffcU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp 
                                   >> 8U)) ^ (((IData)(
                                                       (0x300U 
                                                        == 
                                                        (0x300U 
                                                         & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp))) 
                                               & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ctemp1)) 
                                              << 2U))) 
              | ((2U & ((0xfffffeU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp 
                                      >> 8U)) ^ (0x1fffffeU 
                                                 & ((mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp 
                                                     >> 7U) 
                                                    & ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ctemp1) 
                                                       << 1U))))) 
                 | (1U & ((mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp 
                           >> 8U) ^ (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ctemp1))))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD02__DOT____Vcellout__ADD01__sum 
        = ((7U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD02__DOT____Vcellout__ADD01__sum)) 
           | (8U & ((0xfffff8U & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp 
                                  >> 8U)) ^ (((IData)(
                                                      (0x700U 
                                                       == 
                                                       (0x700U 
                                                        & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp))) 
                                              & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ctemp1)) 
                                             << 3U))));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD02__DOT__ctemp 
        = ((IData)((0xf00U == (0xf00U & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp))) 
           & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ctemp1));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD02__DOT____Vcellout__ADD02__sum 
        = ((8U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD02__DOT____Vcellout__ADD02__sum)) 
           | ((4U & ((0xffffcU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp 
                                  >> 0xcU)) ^ (((IData)(
                                                        (0x3000U 
                                                         == 
                                                         (0x3000U 
                                                          & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp))) 
                                                & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD02__DOT__ctemp)) 
                                               << 2U))) 
              | ((2U & ((0xffffeU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp 
                                     >> 0xcU)) ^ (0x1ffffeU 
                                                  & ((mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp 
                                                      >> 0xbU) 
                                                     & ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD02__DOT__ctemp) 
                                                        << 1U))))) 
                 | (1U & ((mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp 
                           >> 0xcU) ^ (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD02__DOT__ctemp))))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD02__DOT____Vcellout__ADD02__sum 
        = ((7U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD02__DOT____Vcellout__ADD02__sum)) 
           | (8U & ((0xffff8U & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp 
                                 >> 0xcU)) ^ (((IData)(
                                                       (0x7000U 
                                                        == 
                                                        (0x7000U 
                                                         & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp))) 
                                               & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD02__DOT__ctemp)) 
                                              << 3U))));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ctemp2 
        = ((IData)((0xf000U == (0xf000U & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp))) 
           & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD02__DOT__ctemp));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT____Vcellout__ADD02__sum 
        = (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD02__DOT____Vcellout__ADD02__sum) 
            << 4U) | (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD02__DOT____Vcellout__ADD01__sum));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD03__DOT____Vcellout__ADD01__sum 
        = ((8U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD03__DOT____Vcellout__ADD01__sum)) 
           | ((4U & ((0xfffcU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp 
                                 >> 0x10U)) ^ (((IData)(
                                                        (0x30000U 
                                                         == 
                                                         (0x30000U 
                                                          & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp))) 
                                                & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ctemp2)) 
                                               << 2U))) 
              | ((2U & ((0xfffeU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp 
                                    >> 0x10U)) ^ (0x1fffeU 
                                                  & ((mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp 
                                                      >> 0xfU) 
                                                     & ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ctemp2) 
                                                        << 1U))))) 
                 | (1U & ((mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp 
                           >> 0x10U) ^ (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ctemp2))))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD03__DOT____Vcellout__ADD01__sum 
        = ((7U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD03__DOT____Vcellout__ADD01__sum)) 
           | (8U & ((0xfff8U & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp 
                                >> 0x10U)) ^ (((IData)(
                                                       (0x70000U 
                                                        == 
                                                        (0x70000U 
                                                         & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp))) 
                                               & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ctemp2)) 
                                              << 3U))));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD03__DOT__ctemp 
        = ((IData)((0xf0000U == (0xf0000U & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp))) 
           & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ctemp2));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD03__DOT____Vcellout__ADD02__sum 
        = ((8U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD03__DOT____Vcellout__ADD02__sum)) 
           | ((4U & ((0xffcU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp 
                                >> 0x14U)) ^ (((IData)(
                                                       (0x300000U 
                                                        == 
                                                        (0x300000U 
                                                         & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp))) 
                                               & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD03__DOT__ctemp)) 
                                              << 2U))) 
              | ((2U & ((0xffeU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp 
                                   >> 0x14U)) ^ (0x1ffeU 
                                                 & ((mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp 
                                                     >> 0x13U) 
                                                    & ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD03__DOT__ctemp) 
                                                       << 1U))))) 
                 | (1U & ((mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp 
                           >> 0x14U) ^ (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD03__DOT__ctemp))))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD03__DOT____Vcellout__ADD02__sum 
        = ((7U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD03__DOT____Vcellout__ADD02__sum)) 
           | (8U & ((0xff8U & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp 
                               >> 0x14U)) ^ (((IData)(
                                                      (0x700000U 
                                                       == 
                                                       (0x700000U 
                                                        & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__outtemp))) 
                                              & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD03__DOT__ctemp)) 
                                             << 3U))));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT____Vcellout__ADD03__sum 
        = (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD03__DOT____Vcellout__ADD02__sum) 
            << 4U) | (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT__ADD03__DOT____Vcellout__ADD01__sum));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_M_result 
        = (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT____Vcellout__ADD03__sum) 
            << 0x10U) | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT____Vcellout__ADD02__sum) 
                          << 8U) | (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__C03__DOT__ADD01__DOT____Vcellout__ADD01__sum)));
}

VL_INLINE_OPT void Vmips_machine___024root___settle__TOP__7(Vmips_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_machine___024root___settle__TOP__7\n"); );
    // Init
    CData/*4:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__shift_E;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ctemp;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD01__DOT__g0;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD01__DOT__g1;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD01__DOT__g2;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD01__DOT__p0;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD01__DOT__p1;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD01__DOT__p2;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD01__DOT__p3;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD02__DOT__g0;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD02__DOT__g1;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD02__DOT__g2;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD02__DOT__p0;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD02__DOT__p1;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD02__DOT__p2;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD02__DOT__p3;
    // Body
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__shift_E 
        = (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_carry) 
            & (~ (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper)))
            ? 0U : (((((((((0x800000U == (0x800000U 
                                          & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out)) 
                           | (0x400000U == (0xc00000U 
                                            & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))) 
                          | (0x200000U == (0xe00000U 
                                           & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))) 
                         | (0x100000U == (0xf00000U 
                                          & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))) 
                        | (0x80000U == (0xf80000U & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))) 
                       | (0x40000U == (0xfc0000U & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))) 
                      | (0x20000U == (0xfe0000U & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))) 
                     | (0x10000U == (0xff0000U & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out)))
                     ? ((0x800000U == (0x800000U & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))
                         ? 0U : ((0x400000U == (0xc00000U 
                                                & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))
                                  ? 1U : ((0x200000U 
                                           == (0xe00000U 
                                               & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))
                                           ? 2U : (
                                                   (0x100000U 
                                                    == 
                                                    (0xf00000U 
                                                     & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))
                                                    ? 3U
                                                    : 
                                                   ((0x80000U 
                                                     == 
                                                     (0xf80000U 
                                                      & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))
                                                     ? 4U
                                                     : 
                                                    ((0x40000U 
                                                      == 
                                                      (0xfc0000U 
                                                       & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))
                                                      ? 5U
                                                      : 
                                                     ((0x20000U 
                                                       == 
                                                       (0xfe0000U 
                                                        & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))
                                                       ? 6U
                                                       : 7U)))))))
                     : (((((((((0x8000U == (0xff8000U 
                                            & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out)) 
                               | (0x4000U == (0xffc000U 
                                              & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))) 
                              | (0x2000U == (0xffe000U 
                                             & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))) 
                             | (0x1000U == (0xfff000U 
                                            & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))) 
                            | (0x800U == (0xfff800U 
                                          & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))) 
                           | (0x400U == (0xfffc00U 
                                         & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))) 
                          | (0x200U == (0xfffe00U & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))) 
                         | (0x100U == (0xffff00U & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out)))
                         ? ((0x8000U == (0xff8000U 
                                         & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))
                             ? 8U : ((0x4000U == (0xffc000U 
                                                  & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))
                                      ? 9U : ((0x2000U 
                                               == (0xffe000U 
                                                   & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))
                                               ? 0xaU
                                               : ((0x1000U 
                                                   == 
                                                   (0xfff000U 
                                                    & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))
                                                   ? 0xbU
                                                   : 
                                                  ((0x800U 
                                                    == 
                                                    (0xfff800U 
                                                     & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))
                                                    ? 0xcU
                                                    : 
                                                   ((0x400U 
                                                     == 
                                                     (0xfffc00U 
                                                      & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))
                                                     ? 0xdU
                                                     : 
                                                    ((0x200U 
                                                      == 
                                                      (0xfffe00U 
                                                       & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))
                                                      ? 0xeU
                                                      : 0xfU)))))))
                         : (((((((((0x80U == (0xffff80U 
                                              & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out)) 
                                   | (0x40U == (0xffffc0U 
                                                & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))) 
                                  | (0x20U == (0xffffe0U 
                                               & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))) 
                                 | (0x110U == (0xfffff0U 
                                               & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))) 
                                | (8U == (0xfffff8U 
                                          & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))) 
                               | (4U == (0xfffffcU 
                                         & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))) 
                              | (2U == (0xfffffeU & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))) 
                             | (1U == vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))
                             ? ((0x80U == (0xffff80U 
                                           & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))
                                 ? 0x10U : ((0x40U 
                                             == (0xffffc0U 
                                                 & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))
                                             ? 0x11U
                                             : ((0x20U 
                                                 == 
                                                 (0xffffe0U 
                                                  & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))
                                                 ? 0x12U
                                                 : 
                                                ((0x110U 
                                                  == 
                                                  (0xfffff0U 
                                                   & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))
                                                  ? 0x13U
                                                  : 
                                                 ((8U 
                                                   == 
                                                   (0xfffff8U 
                                                    & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))
                                                   ? 0x14U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0xfffffcU 
                                                     & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))
                                                    ? 0x15U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xfffffeU 
                                                      & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out))
                                                     ? 0x16U
                                                     : 0x17U)))))))
                             : 0U))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result1 
        = ((0x80000000U & ((((((~ (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                   >> 0x1fU)) & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper)) 
                              & (~ (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_carry))) 
                             << 0x1fU) | (0x80000000U 
                                          & (((~ (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__real_oper)) 
                                              << 0x1fU) 
                                             & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1))) 
                           | (0x80000000U & (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M_carry) 
                                              << 0x1fU) 
                                             & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1)))) 
           | (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__new_E) 
               << 0x17U) | (0x7fffffU & vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05.out)));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Overflow 
        = ((((((0xffU == (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__One_Added_E)) 
               & (~ (IData)((0U != (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__shift_E))))) 
              & (~ ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                    >> 1U))) | (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__carry_E) 
                                 & ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__final_E) 
                                    >> 8U)) & ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                               >> 1U))) 
            & (~ (IData)((3U == (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))))) 
           | ((((((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__temp_E2) 
                  & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__temp_E3)) 
                 >> 8U) & (~ (IData)((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                      >> 0x18U)))) 
               | ((((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__temp_E1) 
                    & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__temp_E2)) 
                   >> 8U) & (IData)((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                     >> 0x18U)))) & 
              (3U == (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_shift_E 
        = ((0xfcU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_shift_E)) 
           | ((2U & ((~ ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__shift_E) 
                         >> 1U)) << 1U)) | (1U & (~ (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__shift_E)))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_shift_E 
        = ((0xf3U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_shift_E)) 
           | ((8U & ((~ ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__shift_E) 
                         >> 3U)) << 3U)) | (4U & ((~ 
                                                   ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__shift_E) 
                                                    >> 2U)) 
                                                  << 2U))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_shift_E 
        = ((0xcfU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_shift_E)) 
           | ((0x20U & ((~ ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__shift_E) 
                            >> 5U)) << 5U)) | (0x10U 
                                               & ((~ 
                                                   ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__shift_E) 
                                                    >> 4U)) 
                                                  << 4U))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_shift_E 
        = ((0x3fU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_shift_E)) 
           | ((0x80U & ((~ ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__shift_E) 
                            >> 7U)) << 7U)) | (0x40U 
                                               & ((~ 
                                                   ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__shift_E) 
                                                    >> 6U)) 
                                                  << 6U))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M01__DOT____Vcellout__M02__out 
        = ((0xfeU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M01__DOT____Vcellout__M02__out)) 
           | (1U & (((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result1 
                      >> 0x18U) & (~ ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                      >> 1U))) | ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result2 
                                                   >> 0x18U) 
                                                  & ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                                     >> 1U)))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M01__DOT____Vcellout__M02__out 
        = ((0xfdU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M01__DOT____Vcellout__M02__out)) 
           | (2U & (((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result1 
                      >> 0x18U) & ((~ ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                       >> 1U)) << 1U)) 
                    | ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result2 
                        >> 0x18U) & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M01__DOT____Vcellout__M02__out 
        = ((0xfbU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M01__DOT____Vcellout__M02__out)) 
           | (4U & (((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result1 
                      >> 0x18U) & ((~ ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                       >> 1U)) << 2U)) 
                    | ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result2 
                        >> 0x18U) & ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                     << 1U)))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M01__DOT____Vcellout__M02__out 
        = ((0xf7U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M01__DOT____Vcellout__M02__out)) 
           | (8U & (((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result1 
                      >> 0x18U) & ((~ ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                       >> 1U)) << 3U)) 
                    | ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result2 
                        >> 0x18U) & ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                     << 2U)))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M01__DOT____Vcellout__M02__out 
        = ((0xefU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M01__DOT____Vcellout__M02__out)) 
           | (0x10U & (((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result1 
                         >> 0x18U) & ((~ ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                          >> 1U)) << 4U)) 
                       | ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result2 
                           >> 0x18U) & ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                        << 3U)))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M01__DOT____Vcellout__M02__out 
        = ((0xdfU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M01__DOT____Vcellout__M02__out)) 
           | (0x20U & (((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result1 
                         >> 0x18U) & ((~ ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                          >> 1U)) << 5U)) 
                       | ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result2 
                           >> 0x18U) & ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                        << 4U)))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M01__DOT____Vcellout__M02__out 
        = ((0xbfU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M01__DOT____Vcellout__M02__out)) 
           | (0x40U & (((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result1 
                         >> 0x18U) & ((~ ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                          >> 1U)) << 6U)) 
                       | ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result2 
                           >> 0x18U) & ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                        << 5U)))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M01__DOT____Vcellout__M02__out 
        = ((0x7fU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M01__DOT____Vcellout__M02__out)) 
           | (0x80U & (((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result1 
                         >> 0x18U) & ((~ ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                          >> 1U)) << 7U)) 
                       | ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result2 
                           >> 0x18U) & ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                        << 6U)))));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD02__DOT__g0 
        = (1U & (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__new_E) 
                  & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_shift_E)) 
                 >> 4U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD02__DOT__g1 
        = (1U & (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__new_E) 
                  & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_shift_E)) 
                 >> 5U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD02__DOT__g2 
        = (1U & (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__new_E) 
                  & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_shift_E)) 
                 >> 6U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD02__DOT__p0 
        = (1U & (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__new_E) 
                  ^ (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_shift_E)) 
                 >> 4U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD02__DOT__p1 
        = (1U & (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__new_E) 
                  ^ (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_shift_E)) 
                 >> 5U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD02__DOT__p2 
        = (1U & (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__new_E) 
                  ^ (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_shift_E)) 
                 >> 6U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD02__DOT__p3 
        = (1U & (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__new_E) 
                  ^ (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_shift_E)) 
                 >> 7U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD01__DOT__g0 
        = (1U & ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__new_E) 
                 & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_shift_E)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD01__DOT__g1 
        = (1U & (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__new_E) 
                  & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_shift_E)) 
                 >> 1U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD01__DOT__g2 
        = (1U & (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__new_E) 
                  & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_shift_E)) 
                 >> 2U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD01__DOT__p0 
        = (1U & ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__new_E) 
                 ^ (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_shift_E)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD01__DOT__p1 
        = (1U & (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__new_E) 
                  ^ (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_shift_E)) 
                 >> 1U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD01__DOT__p2 
        = (1U & (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__new_E) 
                  ^ (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_shift_E)) 
                 >> 2U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD01__DOT__p3 
        = (1U & (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__new_E) 
                  ^ (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_shift_E)) 
                 >> 3U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ctemp 
        = (1U & (((((((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__new_E) 
                      & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_shift_E)) 
                     >> 3U) | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD01__DOT__p3) 
                               & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD01__DOT__g2))) 
                   | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD01__DOT__p3) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD01__DOT__p2)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD01__DOT__g1))) 
                  | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD01__DOT__p3) 
                       & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD01__DOT__p2)) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD01__DOT__p1)) 
                     & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD01__DOT__g0))) 
                 | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD01__DOT__p3) 
                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD01__DOT__p2)) 
                     & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD01__DOT__p1)) 
                    & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD01__DOT__p0))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Underflow 
        = (1U & (((((~ (((((((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__new_E) 
                             & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__complemented_shift_E)) 
                            >> 7U) | ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD02__DOT__p3) 
                                      & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD02__DOT__g2))) 
                          | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD02__DOT__p3) 
                              & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD02__DOT__p2)) 
                             & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD02__DOT__g1))) 
                         | ((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD02__DOT__p3) 
                              & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD02__DOT__p2)) 
                             & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD02__DOT__p1)) 
                            & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD02__DOT__g0))) 
                        | (((((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD02__DOT__p3) 
                              & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD02__DOT__p2)) 
                             & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD02__DOT__p1)) 
                            & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ADD02__DOT__p0)) 
                           & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__ADD03__DOT__ctemp)))) 
                    & (~ ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                          >> 1U))) | ((~ (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__carry_E)) 
                                      & ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op) 
                                         >> 1U))) & 
                  (~ (IData)((3U == (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))))) 
                 | ((((~ (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__temp_E2) 
                           | (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__temp_E3)) 
                          >> 8U)) & (~ (IData)((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                                >> 0x18U)))) 
                     | ((~ (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__temp_E1) 
                             | (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__temp_E2)) 
                            >> 8U)) & (IData)((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__DIV01__DOT__div_temp 
                                               >> 0x18U)))) 
                    & (3U == (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))));
}

VL_INLINE_OPT void Vmips_machine___024root___settle__TOP__8(Vmips_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_machine___024root___settle__TOP__8\n"); );
    // Body
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__temp_result 
        = (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M01__DOT____Vcellout__M02__out) 
            << 0x18U) | vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M01__DOT__M01.out);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M02__DOT____Vcellout__M02__out 
        = ((0xfeU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M02__DOT____Vcellout__M02__out)) 
           | (1U & (((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__temp_result 
                      >> 0x18U) & (~ (IData)((3U == (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))))) 
                    | ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result3 
                        >> 0x18U) & (3U == (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M02__DOT____Vcellout__M02__out 
        = ((0xfdU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M02__DOT____Vcellout__M02__out)) 
           | (2U & ((0xfeU & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__temp_result 
                               >> 0x18U) & ((~ (IData)(
                                                       (3U 
                                                        == (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))) 
                                            << 1U))) 
                    | (((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result3 
                         >> 0x19U) & (3U == (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))) 
                       << 1U))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M02__DOT____Vcellout__M02__out 
        = ((0xfbU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M02__DOT____Vcellout__M02__out)) 
           | (4U & ((0xfcU & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__temp_result 
                               >> 0x18U) & ((~ (IData)(
                                                       (3U 
                                                        == (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))) 
                                            << 2U))) 
                    | (((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result3 
                         >> 0x1aU) & (3U == (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))) 
                       << 2U))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M02__DOT____Vcellout__M02__out 
        = ((0xf7U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M02__DOT____Vcellout__M02__out)) 
           | (8U & ((0xf8U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__temp_result 
                               >> 0x18U) & ((~ (IData)(
                                                       (3U 
                                                        == (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))) 
                                            << 3U))) 
                    | (((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result3 
                         >> 0x1bU) & (3U == (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))) 
                       << 3U))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M02__DOT____Vcellout__M02__out 
        = ((0xefU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M02__DOT____Vcellout__M02__out)) 
           | (0x10U & ((0xf0U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__temp_result 
                                  >> 0x18U) & ((~ (IData)(
                                                          (3U 
                                                           == (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))) 
                                               << 4U))) 
                       | (((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result3 
                            >> 0x1cU) & (3U == (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))) 
                          << 4U))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M02__DOT____Vcellout__M02__out 
        = ((0xdfU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M02__DOT____Vcellout__M02__out)) 
           | (0x20U & ((0xe0U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__temp_result 
                                  >> 0x18U) & ((~ (IData)(
                                                          (3U 
                                                           == (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))) 
                                               << 5U))) 
                       | (((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result3 
                            >> 0x1dU) & (3U == (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))) 
                          << 5U))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M02__DOT____Vcellout__M02__out 
        = ((0xbfU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M02__DOT____Vcellout__M02__out)) 
           | (0x40U & ((0xc0U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__temp_result 
                                  >> 0x18U) & ((~ (IData)(
                                                          (3U 
                                                           == (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))) 
                                               << 6U))) 
                       | (((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result3 
                            >> 0x1eU) & (3U == (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))) 
                          << 6U))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M02__DOT____Vcellout__M02__out 
        = ((0x7fU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M02__DOT____Vcellout__M02__out)) 
           | (0x80U & ((0x80U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__temp_result 
                                  >> 0x18U) & ((~ (IData)(
                                                          (3U 
                                                           == (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op)))) 
                                               << 7U))) 
                       | (((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result3 
                            >> 0x1fU) & (3U == (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op))) 
                          << 7U))));
}

VL_INLINE_OPT void Vmips_machine___024root___settle__TOP__9(Vmips_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_machine___024root___settle__TOP__9\n"); );
    // Body
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result4 
        = (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M02__DOT____Vcellout__M02__out) 
            << 0x18U) | vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M02__DOT__M01.out);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M09__DOT____Vcellout__M02__out 
        = ((0xf8U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M09__DOT____Vcellout__M02__out)) 
           | ((4U & ((0xfcU & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result4 
                               >> 0x18U)) | ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Exception) 
                                             << 2U))) 
              | (3U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result4 
                        >> 0x18U) | (- (IData)((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Exception)))))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M09__DOT____Vcellout__M02__out 
        = ((0xc7U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M09__DOT____Vcellout__M02__out)) 
           | ((0x20U & ((0xe0U & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result4 
                                  >> 0x18U)) | ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Exception) 
                                                << 5U))) 
              | (0x18U & ((0xf8U & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result4 
                                    >> 0x18U)) | ((- (IData)((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Exception))) 
                                                  << 3U)))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M09__DOT____Vcellout__M02__out 
        = ((0x3fU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M09__DOT____Vcellout__M02__out)) 
           | (0xc0U & ((0xc0U & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result4 
                                 >> 0x18U)) | ((- (IData)((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Exception))) 
                                               << 6U))));
}

VL_INLINE_OPT void Vmips_machine___024root___settle__TOP__10(Vmips_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_machine___024root___settle__TOP__10\n"); );
    // Body
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result5 
        = (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M09__DOT____Vcellout__M02__out) 
            << 0x18U) | vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M09__DOT__M01.out);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M010__DOT____Vcellout__M02__out 
        = ((0xfcU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M010__DOT____Vcellout__M02__out)) 
           | ((2U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result5 
                      >> 0x18U) & ((~ (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Underflow)) 
                                   << 1U))) | (1U & 
                                               ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result5 
                                                 >> 0x18U) 
                                                & (~ (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Underflow))))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M010__DOT____Vcellout__M02__out 
        = ((0xf3U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M010__DOT____Vcellout__M02__out)) 
           | ((8U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result5 
                      >> 0x18U) & ((~ (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Underflow)) 
                                   << 3U))) | (4U & 
                                               ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result5 
                                                 >> 0x18U) 
                                                & ((~ (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Underflow)) 
                                                   << 2U)))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M010__DOT____Vcellout__M02__out 
        = ((0xcfU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M010__DOT____Vcellout__M02__out)) 
           | ((0x20U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result5 
                         >> 0x18U) & ((~ (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Underflow)) 
                                      << 5U))) | (0x10U 
                                                  & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result5 
                                                      >> 0x18U) 
                                                     & ((~ (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Underflow)) 
                                                        << 4U)))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M010__DOT____Vcellout__M02__out 
        = ((0xbfU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M010__DOT____Vcellout__M02__out)) 
           | (0x40U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result5 
                        >> 0x18U) & ((~ (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Underflow)) 
                                     << 6U))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M010__DOT____Vcellout__M02__out 
        = ((0x7fU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M010__DOT____Vcellout__M02__out)) 
           | (0x80U & (((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result5 
                         >> 0x18U) & ((~ (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Underflow)) 
                                      << 7U)) | ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result4 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Underflow) 
                                                    << 7U)))));
}

VL_INLINE_OPT void Vmips_machine___024root___settle__TOP__11(Vmips_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_machine___024root___settle__TOP__11\n"); );
    // Body
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result6 
        = (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M010__DOT____Vcellout__M02__out) 
            << 0x18U) | vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M010__DOT__M01.out);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M011__DOT____Vcellout__M02__out 
        = ((0xf8U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M011__DOT____Vcellout__M02__out)) 
           | ((4U & ((0xfcU & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result6 
                               >> 0x18U)) | ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Overflow) 
                                             << 2U))) 
              | (3U & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result6 
                        >> 0x18U) | (- (IData)((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Overflow)))))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M011__DOT____Vcellout__M02__out 
        = ((0xc7U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M011__DOT____Vcellout__M02__out)) 
           | ((0x20U & ((0xe0U & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result6 
                                  >> 0x18U)) | ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Overflow) 
                                                << 5U))) 
              | (0x18U & ((0xf8U & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result6 
                                    >> 0x18U)) | ((- (IData)((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Overflow))) 
                                                  << 3U)))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M011__DOT____Vcellout__M02__out 
        = ((0xbfU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M011__DOT____Vcellout__M02__out)) 
           | (0x40U & ((0xc0U & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result6 
                                 >> 0x18U)) | ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Overflow) 
                                               << 6U))));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M011__DOT____Vcellout__M02__out 
        = ((0x7fU & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M011__DOT____Vcellout__M02__out)) 
           | (0x80U & (((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result6 
                         >> 0x18U) & ((~ (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Overflow)) 
                                      << 7U)) | ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result4 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__Overflow) 
                                                    << 7U)))));
}

VL_INLINE_OPT void Vmips_machine___024root___settle__TOP__12(Vmips_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_machine___024root___settle__TOP__12\n"); );
    // Init
    IData/*31:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__add_result;
    // Body
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__add_result 
        = (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M011__DOT____Vcellout__M02__out) 
            << 0x18U) | vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M011__DOT__M01.out);
    if (VL_UNLIKELY((1U & (~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff))))) {
        VL_WRITEF("result %x result1%x result2%x result3%x  result4%x op%b n1%x n2%x\n",
                  32,mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__add_result,
                  32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result1,
                  32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result2,
                  32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result3,
                  32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__result4,
                  2,(IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__op),
                  32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1,
                  32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out);
    }
    if ((8U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu_control))) {
        if ((4U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu_control))) {
            vlSelf->mips_machine__DOT__core__DOT__float_addr = 0U;
        } else if ((2U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu_control))) {
            if ((1U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu_control))) {
                vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__luiTemp 
                    = (0xffffU & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out);
                vlSelf->mips_machine__DOT__core__DOT__float_addr 
                    = ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__luiTemp) 
                       << 0x10U);
            } else {
                vlSelf->mips_machine__DOT__core__DOT__float_addr 
                    = vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out;
            }
        } else if ((1U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu_control))) {
            vlSelf->mips_machine__DOT__core__DOT__float_addr 
                = vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out;
        } else {
            vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real 
                = (0xffU & ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                             >> 0x17U) - (IData)(0x7fU)));
            if (VL_GTS_III(1,32,32, 0xffffffffU, VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__float_addr = 0U;
            } else if ((0xffffffffU == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__float_addr = 1U;
            } else if ((0U == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__float_addr = 1U;
                if ((0x400000U & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__float_addr 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__float_addr);
                }
            } else if ((1U == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__float_addr 
                    = (2U | (1U & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                   >> 0x16U)));
                if ((0x200000U & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__float_addr 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__float_addr);
                }
            } else if ((2U == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__float_addr 
                    = (4U | (3U & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                   >> 0x15U)));
                if ((0x100000U & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__float_addr 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__float_addr);
                }
            } else if ((3U == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__float_addr 
                    = (8U | (7U & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                   >> 0x14U)));
                if ((0x80000U & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__float_addr 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__float_addr);
                }
            } else if ((4U == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__float_addr 
                    = (0x10U | (0xfU & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                        >> 0x13U)));
                if ((0x40000U & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__float_addr 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__float_addr);
                }
            } else if ((5U == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__float_addr 
                    = (0x20U | (0x1fU & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                         >> 0x12U)));
                if ((0x20000U & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__float_addr 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__float_addr);
                }
            } else if ((6U == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__float_addr 
                    = (0x40U | (0x3fU & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                         >> 0x11U)));
                if ((0x10000U & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__float_addr 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__float_addr);
                }
            } else if ((7U == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__float_addr 
                    = (0x80U | (0x7fU & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                         >> 0x10U)));
                if ((0x8000U & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__float_addr 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__float_addr);
                }
            } else if ((8U == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__float_addr 
                    = (0x100U | (0xffU & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                          >> 0xfU)));
                if ((0x4000U & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__float_addr 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__float_addr);
                }
            } else if ((9U == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__float_addr 
                    = (0x200U | (0x1ffU & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                           >> 0xeU)));
                if ((0x2000U & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__float_addr 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__float_addr);
                }
            } else if ((0xaU == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__float_addr 
                    = (0x400U | (0x3ffU & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                           >> 0xdU)));
                if ((0x1000U & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__float_addr 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__float_addr);
                }
            } else if ((0xbU == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__float_addr 
                    = (0x800U | (0x7ffU & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                           >> 0xcU)));
                if ((0x800U & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__float_addr 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__float_addr);
                }
            } else if ((0xcU == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__float_addr 
                    = (0x1000U | (0xfffU & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                            >> 0xbU)));
                if ((0x400U & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__float_addr 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__float_addr);
                }
            } else if ((0xdU == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__float_addr 
                    = (0x2000U | (0x1fffU & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                             >> 0xaU)));
                if ((0x200U & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__float_addr 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__float_addr);
                }
            } else if ((0xeU == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__float_addr 
                    = (0x4000U | (0x3fffU & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                             >> 9U)));
                if ((0x100U & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__float_addr 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__float_addr);
                }
            } else if ((0xfU == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__float_addr 
                    = (0x8000U | (0x7fffU & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                             >> 8U)));
                if ((0x80U & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__float_addr 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__float_addr);
                }
            } else if ((0x10U == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__float_addr 
                    = (0x10000U | (0xffffU & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                              >> 7U)));
                if ((0x40U & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__float_addr 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__float_addr);
                }
            } else if ((0x11U == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__float_addr 
                    = (0x20000U | (0x1ffffU & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                               >> 6U)));
                if ((0x20U & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__float_addr 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__float_addr);
                }
            } else if ((0x12U == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__float_addr 
                    = (0x40000U | (0x3ffffU & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                               >> 5U)));
                if ((0x10U & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__float_addr 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__float_addr);
                }
            } else if ((0x13U == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__float_addr 
                    = (0x80000U | (0x7ffffU & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                               >> 4U)));
                if ((8U & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__float_addr 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__float_addr);
                }
            } else if ((0x14U == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__float_addr 
                    = (0x100000U | (0xfffffU & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                >> 3U)));
                if ((4U & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__float_addr 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__float_addr);
                }
            } else if ((0x15U == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__float_addr 
                    = (0x200000U | (0x1fffffU & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                 >> 2U)));
                if ((2U & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__float_addr 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__float_addr);
                }
            } else if ((0x16U == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__float_addr 
                    = (0x400000U | (0x3fffffU & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                 >> 1U)));
                if ((1U & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__float_addr 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__float_addr);
                }
            } else {
                vlSelf->mips_machine__DOT__core__DOT__float_addr 
                    = ((0x800000U | (0x7fffffU & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) 
                       * VL_POWSS_III(32,32,32, (IData)(2U), 
                                      (VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)) 
                                       - (IData)(0x17U)), 1,1));
            }
            if ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                 >> 0x1fU)) {
                vlSelf->mips_machine__DOT__core__DOT__float_addr 
                    = ((IData)(0xffffffffU) * vlSelf->mips_machine__DOT__core__DOT__float_addr);
            }
        }
    } else if ((4U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu_control))) {
        if ((2U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu_control))) {
            if ((1U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu_control))) {
                if ((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                     >> 0x1fU)) {
                    vlSelf->mips_machine__DOT__core__DOT__float_addr 
                        = (0x7fffffffU & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1);
                } else if ((1U & (~ (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                     >> 0x1fU)))) {
                    vlSelf->mips_machine__DOT__core__DOT__float_addr 
                        = (0x80000000U | (0x7fffffffU 
                                          & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1));
                }
            } else {
                vlSelf->mips_machine__DOT__core__DOT__float_addr 
                    = (((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                         >> 0x1fU) > (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                      >> 0x1fU)) ? 1U
                        : (((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                             >> 0x1fU) < (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                          >> 0x1fU))
                            ? 0U : (((0xffU & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                               >> 0x17U)) 
                                     < (0xffU & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                                 >> 0x17U)))
                                     ? 1U : (((0xffU 
                                               & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                  >> 0x17U)) 
                                              > (0xffU 
                                                 & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                                    >> 0x17U)))
                                              ? 0U : 
                                             (((0x7fffffU 
                                                & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1) 
                                               < (0x7fffffU 
                                                  & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out))
                                               ? 1U
                                               : 0U)))));
            }
        } else {
            vlSelf->mips_machine__DOT__core__DOT__float_addr 
                = ((1U & (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu_control))
                    ? (((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                         >> 0x1fU) > (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                      >> 0x1fU)) ? 1U
                        : (((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                             >> 0x1fU) < (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                          >> 0x1fU))
                            ? 0U : (((0xffU & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                               >> 0x17U)) 
                                     < (0xffU & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                                 >> 0x17U)))
                                     ? 1U : (((0xffU 
                                               & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                  >> 0x17U)) 
                                              > (0xffU 
                                                 & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                                    >> 0x17U)))
                                              ? 0U : 
                                             (((0x7fffffU 
                                                & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1) 
                                               < (0x7fffffU 
                                                  & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out))
                                               ? 1U
                                               : ((
                                                   (0x7fffffU 
                                                    & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1) 
                                                   > 
                                                   (0x7fffffU 
                                                    & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out))
                                                   ? 0U
                                                   : 1U))))))
                    : (((((vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                           >> 0x1fU) == (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                         >> 0x1fU)) 
                         & ((0xffU & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                      >> 0x17U)) == 
                            (0xffU & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                      >> 0x17U)))) 
                        & ((0x7fffffU & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__operand_1) 
                           == (0x7fffffU & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out)))
                        ? 1U : 0U));
        }
    } else {
        vlSelf->mips_machine__DOT__core__DOT__float_addr 
            = mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__add_result;
    }
    vlSelf->mips_machine__DOT__core__DOT__final_cache_addr 
        = ((IData)(vlSelf->mips_machine__DOT__core__DOT__is_float)
            ? vlSelf->mips_machine__DOT__core__DOT__float_addr
            : vlSelf->mips_machine__DOT__core__DOT__MEM_alu_out);
}

void Vmips_machine___024root___sequent__TOP__2(Vmips_machine___024root* vlSelf);
void Vmips_machine___024root___sequent__TOP__3(Vmips_machine___024root* vlSelf);
void Vmips_machine___024root___sequent__TOP__4(Vmips_machine___024root* vlSelf);
void Vmips_machine___024root___sequent__TOP__13(Vmips_machine___024root* vlSelf);
void Vmips_machine___024root___sequent__TOP__14(Vmips_machine___024root* vlSelf);
void Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02__1(Vmips_machine_Mux_24Bit* vlSelf);
void Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__M02__2(Vmips_machine_Mux_24Bit* vlSelf);
void Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04__3(Vmips_machine_Mux_24Bit* vlSelf);
void Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05__4(Vmips_machine_Mux_24Bit* vlSelf);
void Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M01__DOT__M01__5(Vmips_machine_Mux_24Bit* vlSelf);
void Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M02__DOT__M01__6(Vmips_machine_Mux_24Bit* vlSelf);
void Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M09__DOT__M01__7(Vmips_machine_Mux_24Bit* vlSelf);
void Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M010__DOT__M01__8(Vmips_machine_Mux_24Bit* vlSelf);
void Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M011__DOT__M01__9(Vmips_machine_Mux_24Bit* vlSelf);
void Vmips_machine___024root___multiclk__TOP__22(Vmips_machine___024root* vlSelf);
void Vmips_machine___024root___combo__TOP__23(Vmips_machine___024root* vlSelf);

void Vmips_machine___024root___eval(Vmips_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_machine___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vmips_machine___024root___sequent__TOP__2(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst_b)) & (IData)(vlSelf->__Vclklast__TOP__rst_b)))) {
        Vmips_machine___024root___sequent__TOP__3(vlSelf);
    }
    if ((((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk)) 
         | ((~ (IData)(vlSelf->rst_b)) & (IData)(vlSelf->__Vclklast__TOP__rst_b)))) {
        Vmips_machine___024root___sequent__TOP__4(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vmips_machine___024root___sequent__TOP__13(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst_b)) & (IData)(vlSelf->__Vclklast__TOP__rst_b)))) {
        Vmips_machine___024root___sequent__TOP__14(vlSelf);
        Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02__1((&vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M__DOT__M02));
        Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__M02__2((&vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__D__DOT__M02));
        Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04__3((&vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M04));
        Vmips_machine___024root___settle__TOP__6(vlSelf);
        Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05__4((&vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__AS__DOT__M05));
        Vmips_machine___024root___settle__TOP__7(vlSelf);
        Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M01__DOT__M01__5((&vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M01__DOT__M01));
        Vmips_machine___024root___settle__TOP__8(vlSelf);
        Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M02__DOT__M01__6((&vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M02__DOT__M01));
        Vmips_machine___024root___settle__TOP__9(vlSelf);
        Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M09__DOT__M01__7((&vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M09__DOT__M01));
        Vmips_machine___024root___settle__TOP__10(vlSelf);
        Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M010__DOT__M01__8((&vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M010__DOT__M01));
        Vmips_machine___024root___settle__TOP__11(vlSelf);
        Vmips_machine_Mux_24Bit___settle__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M011__DOT__M01__9((&vlSymsp->TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__M011__DOT__M01));
        Vmips_machine___024root___settle__TOP__12(vlSelf);
    }
    if ((((IData)(vlSelf->clk) ^ (IData)(vlSelf->__Vclklast__TOP__clk)) 
         | ((~ (IData)(vlSelf->rst_b)) & (IData)(vlSelf->__Vclklast__TOP__rst_b)))) {
        Vmips_machine___024root___multiclk__TOP__22(vlSelf);
    }
    Vmips_machine___024root___combo__TOP__23(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_b = vlSelf->rst_b;
}
