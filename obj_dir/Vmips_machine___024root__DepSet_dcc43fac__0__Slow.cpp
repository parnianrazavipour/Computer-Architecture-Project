// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmips_machine.h for the primary calling header

#include "verilated.h"

#include "Vmips_machine___024root.h"

VL_ATTR_COLD void Vmips_machine___024root___initial__TOP__1(Vmips_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_machine___024root___initial__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->mips_machine__DOT__halted = 0U;
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->mips_machine__DOT__core__DOT__MEM__DOT__cache_core__DOT__valid_array[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->mips_machine__DOT__core__DOT__MEM__DOT__cache_core__DOT__dirty_array[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->mips_machine__DOT__core__DOT__MEM__DOT__cache_core__DOT__clock_counter = 0U;
    vlSelf->mips_machine__DOT__core__DOT__shift = 0U;
    vlSelf->mips_machine__DOT__core__DOT__is_byte = 0U;
    vlSelf->mips_machine__DOT__mem_write_en = 0U;
}

extern const VlUnpacked<CData/*0:0*/, 1024> Vmips_machine__ConstPool__TABLE_de709c0e_0;
extern const VlUnpacked<CData/*4:0*/, 1024> Vmips_machine__ConstPool__TABLE_4c09743f_0;

VL_ATTR_COLD void Vmips_machine___024root___settle__TOP__5(Vmips_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_machine___024root___settle__TOP__5\n"); );
    // Init
    IData/*31:0*/ mips_machine__DOT__core__DOT__f_core__DOT__operand_1;
    IData/*31:0*/ mips_machine__DOT__core__DOT__f_core__DOT__operand_2;
    IData/*31:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out;
    CData/*3:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu_control;
    IData/*31:0*/ mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd;
    IData/*31:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__add_result;
    IData/*31:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__mul_result;
    IData/*31:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__div_result;
    IData/*23:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__mantissa_temp;
    IData/*22:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__mantissa;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__exp;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__sign;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__carry;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__A_greater_than_B;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__exp_sub;
    IData/*23:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__mantissa_A;
    IData/*23:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__mantissa_B;
    QData/*47:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__mantissa_temp;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__exp_A;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__exp_B;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__exp_temp;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__sign_A;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__sign_B;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__sign;
    IData/*31:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__temp1;
    IData/*31:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__temp2;
    IData/*31:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__temp3;
    IData/*31:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__temp4;
    IData/*31:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__temp5;
    IData/*31:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__temp6;
    IData/*31:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__temp7;
    IData/*31:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__inverse_B;
    IData/*31:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__x0;
    IData/*31:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__x1;
    IData/*31:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__x2;
    IData/*31:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__x3;
    IData/*31:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT____Vcellinp__adder2____pinNumber2;
    IData/*31:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT____Vcellinp__adder3____pinNumber2;
    IData/*31:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT____Vcellinp__adder4____pinNumber2;
    IData/*23:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier1__DOT__mantissa_A;
    QData/*47:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier1__DOT__mantissa_temp;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier1__DOT__exp_temp;
    IData/*23:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier2__DOT__mantissa_A;
    IData/*23:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier2__DOT__mantissa_B;
    QData/*47:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier2__DOT__mantissa_temp;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier2__DOT__exp_B;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier2__DOT__exp_temp;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier2__DOT__sign_B;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier2__DOT__sign;
    IData/*23:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__mantissa_A;
    IData/*23:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__mantissa_B;
    QData/*47:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__mantissa_temp;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__exp_A;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__exp_B;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__exp_temp;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__sign_A;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__sign_B;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__sign;
    IData/*23:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__mantissa_A;
    IData/*23:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__mantissa_B;
    QData/*47:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__mantissa_temp;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__exp_A;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__exp_B;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__exp_temp;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__sign_A;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__sign_B;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__sign;
    IData/*23:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier4__DOT__mantissa_A;
    IData/*23:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier4__DOT__mantissa_B;
    QData/*47:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier4__DOT__mantissa_temp;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier4__DOT__exp_B;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier4__DOT__exp_temp;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier4__DOT__sign_B;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier4__DOT__sign;
    IData/*23:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier6__DOT__mantissa_A;
    IData/*23:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier6__DOT__mantissa_B;
    QData/*47:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier6__DOT__mantissa_temp;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier6__DOT__exp_B;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier6__DOT__exp_temp;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier6__DOT__sign_B;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier6__DOT__sign;
    IData/*23:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__mantissa_A;
    IData/*23:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__mantissa_B;
    QData/*47:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__mantissa_temp;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__exp_A;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__exp_B;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__exp_temp;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__sign_A;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__sign_B;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__sign;
    IData/*23:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__mantissa_A;
    IData/*23:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__mantissa_B;
    QData/*47:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__mantissa_temp;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__exp_A;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__exp_B;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__exp_temp;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__sign_A;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__sign_B;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__sign;
    IData/*23:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__mantissa_temp;
    IData/*22:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__mantissa;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__exp;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__sign;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__carry;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__A_greater_than_B;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__exp_sub;
    IData/*23:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__mantissa_temp;
    IData/*22:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__mantissa;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__exp;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__sign;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__carry;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__A_greater_than_B;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__exp_sub;
    IData/*23:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__mantissa_temp;
    IData/*22:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__mantissa;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__exp;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__sign;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__carry;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__A_greater_than_B;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__exp_sub;
    IData/*23:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__mantissa_temp;
    IData/*22:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__mantissa;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__exp;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__sign;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__carry;
    CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__A_greater_than_B;
    CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__exp_sub;
    CData/*3:0*/ mips_machine__DOT__core__DOT__ID__DOT__aluOp;
    IData/*31:0*/ mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd;
    IData/*31:0*/ mips_machine__DOT__core__DOT__EX__DOT__alu_src_mux_out;
    IData/*31:0*/ mips_machine__DOT__core__DOT__EX__DOT__sa_select_mux_out;
    SData/*9:0*/ __Vtableidx1;
    VlWide<5>/*159:0*/ __Vtemp6;
    VlWide<5>/*159:0*/ __Vtemp7;
    // Body
    vlSelf->mips_machine__DOT__core__DOT____Vcellout__MEM__mem_data_in[0U] 
        = vlSelf->mips_machine__DOT__core__DOT__MEM__DOT____Vcellout__cache_core__mem_data_out
        [0U];
    vlSelf->mips_machine__DOT__core__DOT____Vcellout__MEM__mem_data_in[1U] 
        = vlSelf->mips_machine__DOT__core__DOT__MEM__DOT____Vcellout__cache_core__mem_data_out
        [1U];
    vlSelf->mips_machine__DOT__core__DOT____Vcellout__MEM__mem_data_in[2U] 
        = vlSelf->mips_machine__DOT__core__DOT__MEM__DOT____Vcellout__cache_core__mem_data_out
        [2U];
    vlSelf->mips_machine__DOT__core__DOT____Vcellout__MEM__mem_data_in[3U] 
        = vlSelf->mips_machine__DOT__core__DOT__MEM__DOT____Vcellout__cache_core__mem_data_out
        [3U];
    vlSelf->mips_machine__DOT__core__DOT____Vcellout__MEM__data_out[0U] 
        = vlSelf->mips_machine__DOT__core__DOT__MEM__DOT____Vcellout__cache_core__data_out
        [0U];
    vlSelf->mips_machine__DOT__core__DOT____Vcellout__MEM__data_out[1U] 
        = vlSelf->mips_machine__DOT__core__DOT__MEM__DOT____Vcellout__cache_core__data_out
        [1U];
    vlSelf->mips_machine__DOT__core__DOT____Vcellout__MEM__data_out[2U] 
        = vlSelf->mips_machine__DOT__core__DOT__MEM__DOT____Vcellout__cache_core__data_out
        [2U];
    vlSelf->mips_machine__DOT__core__DOT____Vcellout__MEM__data_out[3U] 
        = vlSelf->mips_machine__DOT__core__DOT__MEM__DOT____Vcellout__cache_core__data_out
        [3U];
    vlSelf->mips_machine__DOT__mem_data_out_d1[3U] 
        = vlSelf->mips_machine__DOT____Vcellout__delay_out1__BRA__3__KET____q;
    vlSelf->mips_machine__DOT__mem_data_out_d1[2U] 
        = vlSelf->mips_machine__DOT____Vcellout__delay_out1__BRA__2__KET____q;
    vlSelf->mips_machine__DOT__mem_data_out_d1[1U] 
        = vlSelf->mips_machine__DOT____Vcellout__delay_out1__BRA__1__KET____q;
    vlSelf->mips_machine__DOT__mem_data_out_d1[0U] 
        = vlSelf->mips_machine__DOT____Vcellout__delay_out1__BRA__0__KET____q;
    vlSelf->mips_machine__DOT__mem_data_out_d2[3U] 
        = vlSelf->mips_machine__DOT____Vcellout__delay_out2__BRA__3__KET____q;
    vlSelf->mips_machine__DOT__mem_data_out_d2[2U] 
        = vlSelf->mips_machine__DOT____Vcellout__delay_out2__BRA__2__KET____q;
    vlSelf->mips_machine__DOT__mem_data_out_d2[1U] 
        = vlSelf->mips_machine__DOT____Vcellout__delay_out2__BRA__1__KET____q;
    vlSelf->mips_machine__DOT__mem_data_out_d2[0U] 
        = vlSelf->mips_machine__DOT____Vcellout__delay_out2__BRA__0__KET____q;
    vlSelf->mips_machine__DOT__mem_data_out_d3[3U] 
        = vlSelf->mips_machine__DOT____Vcellout__delay_out3__BRA__3__KET____q;
    vlSelf->mips_machine__DOT__mem_data_out_d3[2U] 
        = vlSelf->mips_machine__DOT____Vcellout__delay_out3__BRA__2__KET____q;
    vlSelf->mips_machine__DOT__mem_data_out_d3[1U] 
        = vlSelf->mips_machine__DOT____Vcellout__delay_out3__BRA__1__KET____q;
    vlSelf->mips_machine__DOT__mem_data_out_d3[0U] 
        = vlSelf->mips_machine__DOT____Vcellout__delay_out3__BRA__0__KET____q;
    vlSelf->mips_machine__DOT__mem_data_in_d1[3U] = vlSelf->mips_machine__DOT____Vcellout__delay_in1__BRA__3__KET____q;
    vlSelf->mips_machine__DOT__mem_data_in_d1[2U] = vlSelf->mips_machine__DOT____Vcellout__delay_in1__BRA__2__KET____q;
    vlSelf->mips_machine__DOT__mem_data_in_d1[1U] = vlSelf->mips_machine__DOT____Vcellout__delay_in1__BRA__1__KET____q;
    vlSelf->mips_machine__DOT__mem_data_in_d1[0U] = vlSelf->mips_machine__DOT____Vcellout__delay_in1__BRA__0__KET____q;
    vlSelf->mips_machine__DOT__mem_data_in_d2[3U] = vlSelf->mips_machine__DOT____Vcellout__delay_in2__BRA__3__KET____q;
    vlSelf->mips_machine__DOT__mem_data_in_d2[2U] = vlSelf->mips_machine__DOT____Vcellout__delay_in2__BRA__2__KET____q;
    vlSelf->mips_machine__DOT__mem_data_in_d2[1U] = vlSelf->mips_machine__DOT____Vcellout__delay_in2__BRA__1__KET____q;
    vlSelf->mips_machine__DOT__mem_data_in_d2[0U] = vlSelf->mips_machine__DOT____Vcellout__delay_in2__BRA__0__KET____q;
    vlSelf->mips_machine__DOT__mem_data_in_d3[3U] = vlSelf->mips_machine__DOT____Vcellout__delay_in3__BRA__3__KET____q;
    vlSelf->mips_machine__DOT__mem_data_in_d3[2U] = vlSelf->mips_machine__DOT____Vcellout__delay_in3__BRA__2__KET____q;
    vlSelf->mips_machine__DOT__mem_data_in_d3[1U] = vlSelf->mips_machine__DOT____Vcellout__delay_in3__BRA__1__KET____q;
    vlSelf->mips_machine__DOT__mem_data_in_d3[0U] = vlSelf->mips_machine__DOT____Vcellout__delay_in3__BRA__0__KET____q;
    mips_machine__DOT__core__DOT__EX__DOT__sa_select_mux_out 
        = ((IData)(vlSelf->mips_machine__DOT__core__DOT__EX_shift)
            ? (0x1fU & (vlSelf->mips_machine__DOT__core__DOT__EX_inst 
                        >> 6U)) : vlSelf->mips_machine__DOT__core__DOT__EX_operand_1);
    vlSelf->mips_machine__DOT__mem_data_in_d4[3U] = vlSelf->mips_machine__DOT____Vcellout__delay_in4__BRA__3__KET____q;
    vlSelf->mips_machine__DOT__mem_data_in_d4[2U] = vlSelf->mips_machine__DOT____Vcellout__delay_in4__BRA__2__KET____q;
    vlSelf->mips_machine__DOT__mem_data_in_d4[1U] = vlSelf->mips_machine__DOT____Vcellout__delay_in4__BRA__1__KET____q;
    vlSelf->mips_machine__DOT__mem_data_in_d4[0U] = vlSelf->mips_machine__DOT____Vcellout__delay_in4__BRA__0__KET____q;
    vlSelf->mips_machine__DOT__core__DOT__WB_data_out[0U] 
        = vlSelf->mips_machine__DOT__core__DOT____Vcellout__MEMtoWB__data_out_WB
        [0U];
    vlSelf->mips_machine__DOT__core__DOT__WB_data_out[1U] 
        = vlSelf->mips_machine__DOT__core__DOT____Vcellout__MEMtoWB__data_out_WB
        [1U];
    vlSelf->mips_machine__DOT__core__DOT__WB_data_out[2U] 
        = vlSelf->mips_machine__DOT__core__DOT____Vcellout__MEMtoWB__data_out_WB
        [2U];
    vlSelf->mips_machine__DOT__core__DOT__WB_data_out[3U] 
        = vlSelf->mips_machine__DOT__core__DOT____Vcellout__MEMtoWB__data_out_WB
        [3U];
    vlSelf->mips_machine__DOT____Vcellout__data_memory__data_out[0U] 
        = vlSelf->mips_machine__DOT__data_memory__DOT__mem
        [(0xfffcU & vlSelf->mips_machine__DOT__mem_addr)];
    vlSelf->mips_machine__DOT____Vcellout__data_memory__data_out[1U] 
        = vlSelf->mips_machine__DOT__data_memory__DOT__mem
        [(0xffffU & ((IData)(1U) + (0xfffcU & vlSelf->mips_machine__DOT__mem_addr)))];
    vlSelf->mips_machine__DOT____Vcellout__data_memory__data_out[2U] 
        = vlSelf->mips_machine__DOT__data_memory__DOT__mem
        [(0xffffU & ((IData)(2U) + (0xfffcU & vlSelf->mips_machine__DOT__mem_addr)))];
    vlSelf->mips_machine__DOT____Vcellout__data_memory__data_out[3U] 
        = vlSelf->mips_machine__DOT__data_memory__DOT__mem
        [(0xffffU & ((IData)(3U) + (0xfffcU & vlSelf->mips_machine__DOT__mem_addr)))];
    vlSelf->mips_machine__DOT__mem_data_out_d4[3U] 
        = vlSelf->mips_machine__DOT____Vcellout__delay_out4__BRA__3__KET____q;
    vlSelf->mips_machine__DOT__mem_data_out_d4[2U] 
        = vlSelf->mips_machine__DOT____Vcellout__delay_out4__BRA__2__KET____q;
    vlSelf->mips_machine__DOT__mem_data_out_d4[1U] 
        = vlSelf->mips_machine__DOT____Vcellout__delay_out4__BRA__1__KET____q;
    vlSelf->mips_machine__DOT__mem_data_out_d4[0U] 
        = vlSelf->mips_machine__DOT____Vcellout__delay_out4__BRA__0__KET____q;
    vlSelf->mips_machine__DOT__core__DOT__in_data[3U] 
        = (vlSelf->mips_machine__DOT__core__DOT__MEM_operand2 
           >> 0x18U);
    vlSelf->mips_machine__DOT__core__DOT__in_data[2U] 
        = (0xffU & (vlSelf->mips_machine__DOT__core__DOT__MEM_operand2 
                    >> 0x10U));
    vlSelf->mips_machine__DOT__core__DOT__in_data[1U] 
        = (0xffU & (vlSelf->mips_machine__DOT__core__DOT__MEM_operand2 
                    >> 8U));
    vlSelf->mips_machine__DOT__core__DOT__in_data[0U] 
        = (0xffU & vlSelf->mips_machine__DOT__core__DOT__MEM_operand2);
    mips_machine__DOT__core__DOT__EX__DOT__alu_src_mux_out 
        = ((IData)(vlSelf->mips_machine__DOT__core__DOT__EX_alu_src)
            ? vlSelf->mips_machine__DOT__core__DOT__EX_sign_extended
            : vlSelf->mips_machine__DOT__core__DOT__EX_operand_2);
    vlSelf->mips_machine__DOT____Vcellout__instruction_memory__data_out[0U] 
        = ((0x1000U >= (0x1ffcU & vlSelf->mips_machine__DOT__core__DOT__pc))
            ? vlSelf->mips_machine__DOT__instruction_memory__DOT__mem
           [(0x1ffcU & vlSelf->mips_machine__DOT__core__DOT__pc)]
            : 0U);
    vlSelf->mips_machine__DOT____Vcellout__instruction_memory__data_out[1U] 
        = ((0x1000U >= (0x1fffU & ((IData)(1U) + (0x1ffcU 
                                                  & vlSelf->mips_machine__DOT__core__DOT__pc))))
            ? vlSelf->mips_machine__DOT__instruction_memory__DOT__mem
           [(0x1fffU & ((IData)(1U) + (0x1ffcU & vlSelf->mips_machine__DOT__core__DOT__pc)))]
            : 0U);
    vlSelf->mips_machine__DOT____Vcellout__instruction_memory__data_out[2U] 
        = ((0x1000U >= (0x1fffU & ((IData)(2U) + (0x1ffcU 
                                                  & vlSelf->mips_machine__DOT__core__DOT__pc))))
            ? vlSelf->mips_machine__DOT__instruction_memory__DOT__mem
           [(0x1fffU & ((IData)(2U) + (0x1ffcU & vlSelf->mips_machine__DOT__core__DOT__pc)))]
            : 0U);
    vlSelf->mips_machine__DOT____Vcellout__instruction_memory__data_out[3U] 
        = ((0x1000U >= (0x1fffU & ((IData)(3U) + (0x1ffcU 
                                                  & vlSelf->mips_machine__DOT__core__DOT__pc))))
            ? vlSelf->mips_machine__DOT__instruction_memory__DOT__mem
           [(0x1fffU & ((IData)(3U) + (0x1ffcU & vlSelf->mips_machine__DOT__core__DOT__pc)))]
            : 0U);
    if ((vlSelf->mips_machine__DOT__core__DOT__ID_inst 
         >> 0x1fU)) {
        vlSelf->mips_machine__DOT__core__DOT__regWrite 
            = (1U & (IData)(((0U == (0x70000000U & vlSelf->mips_machine__DOT__core__DOT__ID_inst)) 
                             & ((0x8000000U & vlSelf->mips_machine__DOT__core__DOT__ID_inst)
                                 ? (vlSelf->mips_machine__DOT__core__DOT__ID_inst 
                                    >> 0x1aU) : (~ 
                                                 (vlSelf->mips_machine__DOT__core__DOT__ID_inst 
                                                  >> 0x1aU))))));
        vlSelf->mips_machine__DOT__core__DOT__alu_src 
            = (1U & ((~ (vlSelf->mips_machine__DOT__core__DOT__ID_inst 
                         >> 0x1eU)) & ((0x20000000U 
                                        & vlSelf->mips_machine__DOT__core__DOT__ID_inst)
                                        ? ((~ (vlSelf->mips_machine__DOT__core__DOT__ID_inst 
                                               >> 0x1cU)) 
                                           & ((0x8000000U 
                                               & vlSelf->mips_machine__DOT__core__DOT__ID_inst)
                                               ? (vlSelf->mips_machine__DOT__core__DOT__ID_inst 
                                                  >> 0x1aU)
                                               : (~ 
                                                  (vlSelf->mips_machine__DOT__core__DOT__ID_inst 
                                                   >> 0x1aU))))
                                        : ((~ (vlSelf->mips_machine__DOT__core__DOT__ID_inst 
                                               >> 0x1cU)) 
                                           & ((0x8000000U 
                                               & vlSelf->mips_machine__DOT__core__DOT__ID_inst)
                                               ? (vlSelf->mips_machine__DOT__core__DOT__ID_inst 
                                                  >> 0x1aU)
                                               : (~ 
                                                  (vlSelf->mips_machine__DOT__core__DOT__ID_inst 
                                                   >> 0x1aU)))))));
    } else {
        vlSelf->mips_machine__DOT__core__DOT__regWrite 
            = (1U & ((~ (vlSelf->mips_machine__DOT__core__DOT__ID_inst 
                         >> 0x1eU)) & ((0x20000000U 
                                        & vlSelf->mips_machine__DOT__core__DOT__ID_inst)
                                        ? (IData)((0xc000000U 
                                                   != 
                                                   (0x1c000000U 
                                                    & vlSelf->mips_machine__DOT__core__DOT__ID_inst)))
                                        : ((~ (vlSelf->mips_machine__DOT__core__DOT__ID_inst 
                                               >> 0x1cU)) 
                                           & ((0x8000000U 
                                               & vlSelf->mips_machine__DOT__core__DOT__ID_inst)
                                               ? (vlSelf->mips_machine__DOT__core__DOT__ID_inst 
                                                  >> 0x1aU)
                                               : ((~ 
                                                   (vlSelf->mips_machine__DOT__core__DOT__ID_inst 
                                                    >> 0x1aU)) 
                                                  & (IData)(
                                                            ((8U 
                                                              != 
                                                              (0x38U 
                                                               & vlSelf->mips_machine__DOT__core__DOT__ID_inst)) 
                                                             | ((4U 
                                                                 & vlSelf->mips_machine__DOT__core__DOT__ID_inst)
                                                                 ? 
                                                                ((vlSelf->mips_machine__DOT__core__DOT__ID_inst 
                                                                  >> 1U) 
                                                                 | vlSelf->mips_machine__DOT__core__DOT__ID_inst)
                                                                 : 
                                                                ((vlSelf->mips_machine__DOT__core__DOT__ID_inst 
                                                                  >> 1U) 
                                                                 | vlSelf->mips_machine__DOT__core__DOT__ID_inst))))))))));
        vlSelf->mips_machine__DOT__core__DOT__alu_src 
            = (1U & ((~ (vlSelf->mips_machine__DOT__core__DOT__ID_inst 
                         >> 0x1eU)) & ((0x20000000U 
                                        & vlSelf->mips_machine__DOT__core__DOT__ID_inst)
                                        ? (IData)((0xc000000U 
                                                   != 
                                                   (0x1c000000U 
                                                    & vlSelf->mips_machine__DOT__core__DOT__ID_inst)))
                                        : ((0x10000000U 
                                            & vlSelf->mips_machine__DOT__core__DOT__ID_inst)
                                            ? (vlSelf->mips_machine__DOT__core__DOT__ID_inst 
                                               >> 0x1bU)
                                            : (IData)(
                                                      (0U 
                                                       != 
                                                       (0xc000000U 
                                                        & vlSelf->mips_machine__DOT__core__DOT__ID_inst)))))));
    }
    if ((vlSelf->mips_machine__DOT__core__DOT__ID_inst 
         >> 0x1fU)) {
        vlSelf->mips_machine__DOT__core__DOT__is_byte 
            = (1U & ((~ (vlSelf->mips_machine__DOT__core__DOT__ID_inst 
                         >> 0x1eU)) & ((0x20000000U 
                                        & vlSelf->mips_machine__DOT__core__DOT__ID_inst)
                                        ? (IData)((0U 
                                                   == 
                                                   (0x1c000000U 
                                                    & vlSelf->mips_machine__DOT__core__DOT__ID_inst)))
                                        : (IData)((0U 
                                                   == 
                                                   (0x1c000000U 
                                                    & vlSelf->mips_machine__DOT__core__DOT__ID_inst))))));
    } else if ((0x40000000U & vlSelf->mips_machine__DOT__core__DOT__ID_inst)) {
        vlSelf->mips_machine__DOT__core__DOT__is_byte = 0U;
    } else if ((0x20000000U & vlSelf->mips_machine__DOT__core__DOT__ID_inst)) {
        vlSelf->mips_machine__DOT__core__DOT__is_byte = 0U;
    } else if ((0x10000000U & vlSelf->mips_machine__DOT__core__DOT__ID_inst)) {
        vlSelf->mips_machine__DOT__core__DOT__is_byte = 0U;
    } else if ((0x8000000U & vlSelf->mips_machine__DOT__core__DOT__ID_inst)) {
        vlSelf->mips_machine__DOT__core__DOT__is_byte = 0U;
    } else if ((0x4000000U & vlSelf->mips_machine__DOT__core__DOT__ID_inst)) {
        vlSelf->mips_machine__DOT__core__DOT__is_byte = 0U;
    } else if ((0x20U & vlSelf->mips_machine__DOT__core__DOT__ID_inst)) {
        vlSelf->mips_machine__DOT__core__DOT__is_byte = 0U;
    } else if ((0x10U & vlSelf->mips_machine__DOT__core__DOT__ID_inst)) {
        vlSelf->mips_machine__DOT__core__DOT__is_byte = 0U;
    } else if ((8U & vlSelf->mips_machine__DOT__core__DOT__ID_inst)) {
        if ((4U & vlSelf->mips_machine__DOT__core__DOT__ID_inst)) {
            if ((2U & vlSelf->mips_machine__DOT__core__DOT__ID_inst)) {
                vlSelf->mips_machine__DOT__core__DOT__is_byte = 0U;
            } else if ((1U & vlSelf->mips_machine__DOT__core__DOT__ID_inst)) {
                vlSelf->mips_machine__DOT__core__DOT__is_byte = 0U;
            }
        } else {
            vlSelf->mips_machine__DOT__core__DOT__is_byte = 0U;
        }
    } else {
        vlSelf->mips_machine__DOT__core__DOT__is_byte = 0U;
    }
    vlSelf->mips_machine__DOT__core__DOT__shift = (1U 
                                                   & (IData)(
                                                             ((0U 
                                                               == 
                                                               (0xfc00003cU 
                                                                & vlSelf->mips_machine__DOT__core__DOT__ID_inst)) 
                                                              & (IData)(
                                                                        (1U 
                                                                         != 
                                                                         (3U 
                                                                          & vlSelf->mips_machine__DOT__core__DOT__ID_inst))))));
    vlSelf->mips_machine__DOT__core__DOT__sign_extended 
        = ((0xffff0000U & vlSelf->mips_machine__DOT__core__DOT__sign_extended) 
           | (0xffffU & vlSelf->mips_machine__DOT__core__DOT__ID_inst));
    vlSelf->mips_machine__DOT__core__DOT__sign_extended 
        = ((0xffffU & vlSelf->mips_machine__DOT__core__DOT__sign_extended) 
           | (((1U & ((vlSelf->mips_machine__DOT__core__DOT__ID_inst 
                       >> 0xfU) & (IData)(((0x20000000U 
                                            != (0xe0000000U 
                                                & vlSelf->mips_machine__DOT__core__DOT__ID_inst)) 
                                           | ((0x10000000U 
                                               & vlSelf->mips_machine__DOT__core__DOT__ID_inst)
                                               ? (IData)(
                                                         (0xc000000U 
                                                          == 
                                                          (0xc000000U 
                                                           & vlSelf->mips_machine__DOT__core__DOT__ID_inst)))
                                               : (IData)(
                                                         (0x4000000U 
                                                          != 
                                                          (0xc000000U 
                                                           & vlSelf->mips_machine__DOT__core__DOT__ID_inst))))))))
                ? 0xffffU : 0U) << 0x10U));
    mips_machine__DOT__core__DOT__ID__DOT__aluOp = 
        ((vlSelf->mips_machine__DOT__core__DOT__ID_inst 
          >> 0x1fU) ? ((0x40000000U & vlSelf->mips_machine__DOT__core__DOT__ID_inst)
                        ? 0xfU : ((0x20000000U & vlSelf->mips_machine__DOT__core__DOT__ID_inst)
                                   ? ((0x10000000U 
                                       & vlSelf->mips_machine__DOT__core__DOT__ID_inst)
                                       ? 0xfU : ((0x8000000U 
                                                  & vlSelf->mips_machine__DOT__core__DOT__ID_inst)
                                                  ? 
                                                 ((0x4000000U 
                                                   & vlSelf->mips_machine__DOT__core__DOT__ID_inst)
                                                   ? 1U
                                                   : 0xfU)
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->mips_machine__DOT__core__DOT__ID_inst)
                                                   ? 0xfU
                                                   : 1U)))
                                   : ((0x10000000U 
                                       & vlSelf->mips_machine__DOT__core__DOT__ID_inst)
                                       ? 0xfU : ((0x8000000U 
                                                  & vlSelf->mips_machine__DOT__core__DOT__ID_inst)
                                                  ? 
                                                 ((0x4000000U 
                                                   & vlSelf->mips_machine__DOT__core__DOT__ID_inst)
                                                   ? 1U
                                                   : 0xfU)
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSelf->mips_machine__DOT__core__DOT__ID_inst)
                                                   ? 0xfU
                                                   : 1U)))))
          : ((0x40000000U & vlSelf->mips_machine__DOT__core__DOT__ID_inst)
              ? 0xfU : ((0x20000000U & vlSelf->mips_machine__DOT__core__DOT__ID_inst)
                         ? ((0x10000000U & vlSelf->mips_machine__DOT__core__DOT__ID_inst)
                             ? ((0x8000000U & vlSelf->mips_machine__DOT__core__DOT__ID_inst)
                                 ? ((0x4000000U & vlSelf->mips_machine__DOT__core__DOT__ID_inst)
                                     ? 0xbU : 3U) : 
                                ((0x4000000U & vlSelf->mips_machine__DOT__core__DOT__ID_inst)
                                  ? 4U : 2U)) : ((0x8000000U 
                                                  & vlSelf->mips_machine__DOT__core__DOT__ID_inst)
                                                  ? 
                                                 ((0x4000000U 
                                                   & vlSelf->mips_machine__DOT__core__DOT__ID_inst)
                                                   ? 0xfU
                                                   : 0xaU)
                                                  : 1U))
                         : ((0x10000000U & vlSelf->mips_machine__DOT__core__DOT__ID_inst)
                             ? ((0x8000000U & vlSelf->mips_machine__DOT__core__DOT__ID_inst)
                                 ? ((0x4000000U & vlSelf->mips_machine__DOT__core__DOT__ID_inst)
                                     ? 8U : 7U) : (
                                                   (0x4000000U 
                                                    & vlSelf->mips_machine__DOT__core__DOT__ID_inst)
                                                    ? 6U
                                                    : 5U))
                             : ((0x8000000U & vlSelf->mips_machine__DOT__core__DOT__ID_inst)
                                 ? ((0x4000000U & vlSelf->mips_machine__DOT__core__DOT__ID_inst)
                                     ? 0xdU : 0xcU)
                                 : ((0x4000000U & vlSelf->mips_machine__DOT__core__DOT__ID_inst)
                                     ? 9U : 0U))))));
    if ((1U & (~ (vlSelf->mips_machine__DOT__core__DOT__ID_inst 
                  >> 0x1fU)))) {
        if ((1U & (~ (vlSelf->mips_machine__DOT__core__DOT__ID_inst 
                      >> 0x1eU)))) {
            if ((1U & (~ (vlSelf->mips_machine__DOT__core__DOT__ID_inst 
                          >> 0x1dU)))) {
                if ((1U & (~ (vlSelf->mips_machine__DOT__core__DOT__ID_inst 
                              >> 0x1cU)))) {
                    if ((1U & (~ (vlSelf->mips_machine__DOT__core__DOT__ID_inst 
                                  >> 0x1bU)))) {
                        if ((1U & (~ (vlSelf->mips_machine__DOT__core__DOT__ID_inst 
                                      >> 0x1aU)))) {
                            if ((1U & (~ (vlSelf->mips_machine__DOT__core__DOT__ID_inst 
                                          >> 5U)))) {
                                if ((1U & (~ (vlSelf->mips_machine__DOT__core__DOT__ID_inst 
                                              >> 4U)))) {
                                    if ((8U & vlSelf->mips_machine__DOT__core__DOT__ID_inst)) {
                                        if ((4U & vlSelf->mips_machine__DOT__core__DOT__ID_inst)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->mips_machine__DOT__core__DOT__ID_inst 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ vlSelf->mips_machine__DOT__core__DOT__ID_inst))) {
                                                    vlSelf->mips_machine__DOT__halted = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->mips_machine__DOT____Vcellout__core__mem_data_in[0U] 
        = vlSelf->mips_machine__DOT__core__DOT____Vcellout__MEM__mem_data_in
        [0U];
    vlSelf->mips_machine__DOT____Vcellout__core__mem_data_in[1U] 
        = vlSelf->mips_machine__DOT__core__DOT____Vcellout__MEM__mem_data_in
        [1U];
    vlSelf->mips_machine__DOT____Vcellout__core__mem_data_in[2U] 
        = vlSelf->mips_machine__DOT__core__DOT____Vcellout__MEM__mem_data_in
        [2U];
    vlSelf->mips_machine__DOT____Vcellout__core__mem_data_in[3U] 
        = vlSelf->mips_machine__DOT__core__DOT____Vcellout__MEM__mem_data_in
        [3U];
    vlSelf->mips_machine__DOT__core__DOT__data_out[0U] 
        = vlSelf->mips_machine__DOT__core__DOT____Vcellout__MEM__data_out
        [0U];
    vlSelf->mips_machine__DOT__core__DOT__data_out[1U] 
        = vlSelf->mips_machine__DOT__core__DOT____Vcellout__MEM__data_out
        [1U];
    vlSelf->mips_machine__DOT__core__DOT__data_out[2U] 
        = vlSelf->mips_machine__DOT__core__DOT____Vcellout__MEM__data_out
        [2U];
    vlSelf->mips_machine__DOT__core__DOT__data_out[3U] 
        = vlSelf->mips_machine__DOT__core__DOT____Vcellout__MEM__data_out
        [3U];
    vlSelf->mips_machine__DOT____Vcellinp__data_memory__data_in[0U] 
        = vlSelf->mips_machine__DOT__mem_data_in_d4
        [0U];
    vlSelf->mips_machine__DOT____Vcellinp__data_memory__data_in[1U] 
        = vlSelf->mips_machine__DOT__mem_data_in_d4
        [1U];
    vlSelf->mips_machine__DOT____Vcellinp__data_memory__data_in[2U] 
        = vlSelf->mips_machine__DOT__mem_data_in_d4
        [2U];
    vlSelf->mips_machine__DOT____Vcellinp__data_memory__data_in[3U] 
        = vlSelf->mips_machine__DOT__mem_data_in_d4
        [3U];
    vlSelf->mips_machine__DOT__core__DOT____Vcellinp__WB__data_from_mem[0U] 
        = vlSelf->mips_machine__DOT__core__DOT__WB_data_out
        [0U];
    vlSelf->mips_machine__DOT__core__DOT____Vcellinp__WB__data_from_mem[1U] 
        = vlSelf->mips_machine__DOT__core__DOT__WB_data_out
        [1U];
    vlSelf->mips_machine__DOT__core__DOT____Vcellinp__WB__data_from_mem[2U] 
        = vlSelf->mips_machine__DOT__core__DOT__WB_data_out
        [2U];
    vlSelf->mips_machine__DOT__core__DOT____Vcellinp__WB__data_from_mem[3U] 
        = vlSelf->mips_machine__DOT__core__DOT__WB_data_out
        [3U];
    vlSelf->mips_machine__DOT__mem_data_out[0U] = vlSelf->mips_machine__DOT____Vcellout__data_memory__data_out
        [0U];
    vlSelf->mips_machine__DOT__mem_data_out[1U] = vlSelf->mips_machine__DOT____Vcellout__data_memory__data_out
        [1U];
    vlSelf->mips_machine__DOT__mem_data_out[2U] = vlSelf->mips_machine__DOT____Vcellout__data_memory__data_out
        [2U];
    vlSelf->mips_machine__DOT__mem_data_out[3U] = vlSelf->mips_machine__DOT____Vcellout__data_memory__data_out
        [3U];
    vlSelf->mips_machine__DOT____Vcellinp__core__mem_data_out[0U] 
        = vlSelf->mips_machine__DOT__mem_data_out_d4
        [0U];
    vlSelf->mips_machine__DOT____Vcellinp__core__mem_data_out[1U] 
        = vlSelf->mips_machine__DOT__mem_data_out_d4
        [1U];
    vlSelf->mips_machine__DOT____Vcellinp__core__mem_data_out[2U] 
        = vlSelf->mips_machine__DOT__mem_data_out_d4
        [2U];
    vlSelf->mips_machine__DOT____Vcellinp__core__mem_data_out[3U] 
        = vlSelf->mips_machine__DOT__mem_data_out_d4
        [3U];
    vlSelf->mips_machine__DOT__core__DOT__alu_out = 
        ((0x10U & (IData)(vlSelf->mips_machine__DOT__core__DOT__EX_aluctrl))
          ? ((8U & (IData)(vlSelf->mips_machine__DOT__core__DOT__EX_aluctrl))
              ? 0U : ((4U & (IData)(vlSelf->mips_machine__DOT__core__DOT__EX_aluctrl))
                       ? ((2U & (IData)(vlSelf->mips_machine__DOT__core__DOT__EX_aluctrl))
                           ? ((1U & (IData)(vlSelf->mips_machine__DOT__core__DOT__EX_aluctrl))
                               ? 0U : (mips_machine__DOT__core__DOT__EX__DOT__alu_src_mux_out 
                                       << 0x10U)) : 
                          ((1U & (IData)(vlSelf->mips_machine__DOT__core__DOT__EX_aluctrl))
                            ? (VL_LTES_III(1,32,32, 0U, mips_machine__DOT__core__DOT__EX__DOT__sa_select_mux_out)
                                ? 1U : 0U) : (VL_LTS_III(1,32,32, 0U, mips_machine__DOT__core__DOT__EX__DOT__sa_select_mux_out)
                                               ? 1U
                                               : 0U)))
                       : ((2U & (IData)(vlSelf->mips_machine__DOT__core__DOT__EX_aluctrl))
                           ? ((1U & (IData)(vlSelf->mips_machine__DOT__core__DOT__EX_aluctrl))
                               ? (VL_GTES_III(1,32,32, 0U, mips_machine__DOT__core__DOT__EX__DOT__sa_select_mux_out)
                                   ? 1U : 0U) : ((mips_machine__DOT__core__DOT__EX__DOT__sa_select_mux_out 
                                                  != mips_machine__DOT__core__DOT__EX__DOT__alu_src_mux_out)
                                                  ? 1U
                                                  : 0U))
                           : ((1U & (IData)(vlSelf->mips_machine__DOT__core__DOT__EX_aluctrl))
                               ? ((mips_machine__DOT__core__DOT__EX__DOT__sa_select_mux_out 
                                   == mips_machine__DOT__core__DOT__EX__DOT__alu_src_mux_out)
                                   ? 1U : 0U) : ((0x1fU 
                                                  >= mips_machine__DOT__core__DOT__EX__DOT__sa_select_mux_out)
                                                  ? 
                                                 VL_SHIFTRS_III(32,32,32, mips_machine__DOT__core__DOT__EX__DOT__alu_src_mux_out, mips_machine__DOT__core__DOT__EX__DOT__sa_select_mux_out)
                                                  : 
                                                 (- 
                                                  (mips_machine__DOT__core__DOT__EX__DOT__alu_src_mux_out 
                                                   >> 0x1fU)))))))
          : ((8U & (IData)(vlSelf->mips_machine__DOT__core__DOT__EX_aluctrl))
              ? ((4U & (IData)(vlSelf->mips_machine__DOT__core__DOT__EX_aluctrl))
                  ? ((2U & (IData)(vlSelf->mips_machine__DOT__core__DOT__EX_aluctrl))
                      ? ((1U & (IData)(vlSelf->mips_machine__DOT__core__DOT__EX_aluctrl))
                          ? (mips_machine__DOT__core__DOT__EX__DOT__sa_select_mux_out 
                             + mips_machine__DOT__core__DOT__EX__DOT__alu_src_mux_out)
                          : (mips_machine__DOT__core__DOT__EX__DOT__sa_select_mux_out 
                             & mips_machine__DOT__core__DOT__EX__DOT__alu_src_mux_out))
                      : ((1U & (IData)(vlSelf->mips_machine__DOT__core__DOT__EX_aluctrl))
                          ? VL_DIVS_III(32, mips_machine__DOT__core__DOT__EX__DOT__sa_select_mux_out, mips_machine__DOT__core__DOT__EX__DOT__alu_src_mux_out)
                          : (IData)(VL_MULS_QQQ(64,64,64, 
                                                VL_EXTENDS_QI(64,32, mips_machine__DOT__core__DOT__EX__DOT__sa_select_mux_out), 
                                                VL_EXTENDS_QI(64,32, mips_machine__DOT__core__DOT__EX__DOT__alu_src_mux_out)))))
                  : ((2U & (IData)(vlSelf->mips_machine__DOT__core__DOT__EX_aluctrl))
                      ? ((1U & (IData)(vlSelf->mips_machine__DOT__core__DOT__EX_aluctrl))
                          ? (mips_machine__DOT__core__DOT__EX__DOT__sa_select_mux_out 
                             + mips_machine__DOT__core__DOT__EX__DOT__alu_src_mux_out)
                          : (~ (mips_machine__DOT__core__DOT__EX__DOT__sa_select_mux_out 
                                | mips_machine__DOT__core__DOT__EX__DOT__alu_src_mux_out)))
                      : ((1U & (IData)(vlSelf->mips_machine__DOT__core__DOT__EX_aluctrl))
                          ? (mips_machine__DOT__core__DOT__EX__DOT__sa_select_mux_out 
                             | mips_machine__DOT__core__DOT__EX__DOT__alu_src_mux_out)
                          : (mips_machine__DOT__core__DOT__EX__DOT__sa_select_mux_out 
                             - mips_machine__DOT__core__DOT__EX__DOT__alu_src_mux_out))))
              : ((4U & (IData)(vlSelf->mips_machine__DOT__core__DOT__EX_aluctrl))
                  ? ((2U & (IData)(vlSelf->mips_machine__DOT__core__DOT__EX_aluctrl))
                      ? ((1U & (IData)(vlSelf->mips_machine__DOT__core__DOT__EX_aluctrl))
                          ? 0U : (VL_LTS_III(1,32,32, mips_machine__DOT__core__DOT__EX__DOT__sa_select_mux_out, mips_machine__DOT__core__DOT__EX__DOT__alu_src_mux_out)
                                   ? 1U : 0U)) : ((1U 
                                                   & (IData)(vlSelf->mips_machine__DOT__core__DOT__EX_aluctrl))
                                                   ? 
                                                  ((0x1fU 
                                                    >= mips_machine__DOT__core__DOT__EX__DOT__sa_select_mux_out)
                                                    ? 
                                                   (mips_machine__DOT__core__DOT__EX__DOT__alu_src_mux_out 
                                                    >> mips_machine__DOT__core__DOT__EX__DOT__sa_select_mux_out)
                                                    : 0U)
                                                   : 
                                                  (mips_machine__DOT__core__DOT__EX__DOT__sa_select_mux_out 
                                                   - mips_machine__DOT__core__DOT__EX__DOT__alu_src_mux_out)))
                  : ((2U & (IData)(vlSelf->mips_machine__DOT__core__DOT__EX_aluctrl))
                      ? ((1U & (IData)(vlSelf->mips_machine__DOT__core__DOT__EX_aluctrl))
                          ? ((0x1fU >= mips_machine__DOT__core__DOT__EX__DOT__sa_select_mux_out)
                              ? (mips_machine__DOT__core__DOT__EX__DOT__alu_src_mux_out 
                                 >> mips_machine__DOT__core__DOT__EX__DOT__sa_select_mux_out)
                              : 0U) : ((0x1fU >= mips_machine__DOT__core__DOT__EX__DOT__sa_select_mux_out)
                                        ? (mips_machine__DOT__core__DOT__EX__DOT__alu_src_mux_out 
                                           << mips_machine__DOT__core__DOT__EX__DOT__sa_select_mux_out)
                                        : 0U)) : ((1U 
                                                   & (IData)(vlSelf->mips_machine__DOT__core__DOT__EX_aluctrl))
                                                   ? 
                                                  ((0x1fU 
                                                    >= mips_machine__DOT__core__DOT__EX__DOT__sa_select_mux_out)
                                                    ? 
                                                   (mips_machine__DOT__core__DOT__EX__DOT__alu_src_mux_out 
                                                    << mips_machine__DOT__core__DOT__EX__DOT__sa_select_mux_out)
                                                    : 0U)
                                                   : 
                                                  (mips_machine__DOT__core__DOT__EX__DOT__sa_select_mux_out 
                                                   ^ mips_machine__DOT__core__DOT__EX__DOT__alu_src_mux_out))))));
    vlSelf->mips_machine__DOT__instruction_parts[0U] 
        = vlSelf->mips_machine__DOT____Vcellout__instruction_memory__data_out
        [0U];
    vlSelf->mips_machine__DOT__instruction_parts[1U] 
        = vlSelf->mips_machine__DOT____Vcellout__instruction_memory__data_out
        [1U];
    vlSelf->mips_machine__DOT__instruction_parts[2U] 
        = vlSelf->mips_machine__DOT____Vcellout__instruction_memory__data_out
        [2U];
    vlSelf->mips_machine__DOT__instruction_parts[3U] 
        = vlSelf->mips_machine__DOT____Vcellout__instruction_memory__data_out
        [3U];
    __Vtableidx1 = ((0x3f0U & (vlSelf->mips_machine__DOT__core__DOT__ID_inst 
                               << 4U)) | (IData)(mips_machine__DOT__core__DOT__ID__DOT__aluOp));
    if (Vmips_machine__ConstPool__TABLE_de709c0e_0[__Vtableidx1]) {
        vlSelf->mips_machine__DOT__core__DOT__aluctrl 
            = Vmips_machine__ConstPool__TABLE_4c09743f_0
            [__Vtableidx1];
    }
    if (VL_UNLIKELY(vlSelf->mips_machine__DOT__halted)) {
        VL_FINISH_MT("323src/mips_machine.sv", 87, "");
    }
    mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd = 0U;
    if (VL_UNLIKELY(((IData)(vlSelf->rst_b) & (IData)(vlSelf->mips_machine__DOT__halted)))) {
        __Vtemp6[0U] = 0x2e726567U;
        __Vtemp6[1U] = 0x64756d70U;
        __Vtemp6[2U] = 0x2f726567U;
        __Vtemp6[3U] = 0x74707574U;
        __Vtemp6[4U] = 0x6f75U;
        mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd = VL_FOPEN_MCD_N(
                                                                                VL_CVT_PACK_STR_NW(5, __Vtemp6));
        VL_WRITEF("=== Simulation Cycle %0# ===\n*** RegisterFile dump ***\n",
                  64,(VL_TIME_UNITED_Q(1) >> 1U));
        VL_FWRITEF(mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"*** RegisterFile dump ***\n");
        VL_WRITEF("r 0 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                  [0U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r 0 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                   [0U]);
        VL_WRITEF("r 1 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                  [1U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r 1 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                   [1U]);
        VL_WRITEF("r 2 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                  [2U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r 2 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                   [2U]);
        VL_WRITEF("r 3 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                  [3U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r 3 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                   [3U]);
        VL_WRITEF("r 4 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                  [4U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r 4 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                   [4U]);
        VL_WRITEF("r 5 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                  [5U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r 5 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                   [5U]);
        VL_WRITEF("r 6 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                  [6U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r 6 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                   [6U]);
        VL_WRITEF("r 7 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                  [7U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r 7 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                   [7U]);
        VL_WRITEF("r 8 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                  [8U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r 8 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                   [8U]);
        VL_WRITEF("r 9 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                  [9U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r 9 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                   [9U]);
        VL_WRITEF("r10 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                  [0xaU]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r10 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                   [0xaU]);
        VL_WRITEF("r11 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                  [0xbU]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r11 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                   [0xbU]);
        VL_WRITEF("r12 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                  [0xcU]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r12 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                   [0xcU]);
        VL_WRITEF("r13 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                  [0xdU]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r13 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                   [0xdU]);
        VL_WRITEF("r14 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                  [0xeU]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r14 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                   [0xeU]);
        VL_WRITEF("r15 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                  [0xfU]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r15 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                   [0xfU]);
        VL_WRITEF("r16 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                  [0x10U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r16 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                   [0x10U]);
        VL_WRITEF("r17 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                  [0x11U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r17 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                   [0x11U]);
        VL_WRITEF("r18 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                  [0x12U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r18 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                   [0x12U]);
        VL_WRITEF("r19 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                  [0x13U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r19 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                   [0x13U]);
        VL_WRITEF("r20 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                  [0x14U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r20 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                   [0x14U]);
        VL_WRITEF("r21 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                  [0x15U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r21 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                   [0x15U]);
        VL_WRITEF("r22 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                  [0x16U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r22 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                   [0x16U]);
        VL_WRITEF("r23 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                  [0x17U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r23 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                   [0x17U]);
        VL_WRITEF("r24 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                  [0x18U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r24 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                   [0x18U]);
        VL_WRITEF("r25 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                  [0x19U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r25 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                   [0x19U]);
        VL_WRITEF("r26 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                  [0x1aU]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r26 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                   [0x1aU]);
        VL_WRITEF("r27 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                  [0x1bU]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r27 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                   [0x1bU]);
        VL_WRITEF("r28 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                  [0x1cU]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r28 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                   [0x1cU]);
        VL_WRITEF("r29 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                  [0x1dU]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r29 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                   [0x1dU]);
        VL_WRITEF("r30 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                  [0x1eU]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r30 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                   [0x1eU]);
        VL_WRITEF("r31 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                  [0x1fU]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r31 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
                   [0x1fU]);
        VL_FCLOSE_I(mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd); mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd = 0;
    }
    mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd = 0U;
    if (VL_UNLIKELY(((IData)(vlSelf->rst_b) & (IData)(vlSelf->mips_machine__DOT__halted)))) {
        __Vtemp7[0U] = 0x2e726567U;
        __Vtemp7[1U] = 0x64756d70U;
        __Vtemp7[2U] = 0x2f726567U;
        __Vtemp7[3U] = 0x74707574U;
        __Vtemp7[4U] = 0x6f75U;
        mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd = VL_FOPEN_MCD_N(
                                                                                VL_CVT_PACK_STR_NW(5, __Vtemp7));
        VL_WRITEF("=== Simulation Cycle %0# ===\n*** RegisterFile dump ***\n",
                  64,(VL_TIME_UNITED_Q(1) >> 1U));
        VL_FWRITEF(mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"*** RegisterFile dump ***\n");
        VL_WRITEF("r 0 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                  [0U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r 0 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                   [0U]);
        VL_WRITEF("r 1 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                  [1U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r 1 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                   [1U]);
        VL_WRITEF("r 2 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                  [2U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r 2 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                   [2U]);
        VL_WRITEF("r 3 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                  [3U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r 3 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                   [3U]);
        VL_WRITEF("r 4 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                  [4U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r 4 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                   [4U]);
        VL_WRITEF("r 5 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                  [5U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r 5 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                   [5U]);
        VL_WRITEF("r 6 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                  [6U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r 6 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                   [6U]);
        VL_WRITEF("r 7 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                  [7U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r 7 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                   [7U]);
        VL_WRITEF("r 8 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                  [8U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r 8 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                   [8U]);
        VL_WRITEF("r 9 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                  [9U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r 9 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                   [9U]);
        VL_WRITEF("r10 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                  [0xaU]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r10 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                   [0xaU]);
        VL_WRITEF("r11 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                  [0xbU]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r11 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                   [0xbU]);
        VL_WRITEF("r12 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                  [0xcU]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r12 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                   [0xcU]);
        VL_WRITEF("r13 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                  [0xdU]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r13 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                   [0xdU]);
        VL_WRITEF("r14 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                  [0xeU]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r14 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                   [0xeU]);
        VL_WRITEF("r15 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                  [0xfU]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r15 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                   [0xfU]);
        VL_WRITEF("r16 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                  [0x10U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r16 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                   [0x10U]);
        VL_WRITEF("r17 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                  [0x11U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r17 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                   [0x11U]);
        VL_WRITEF("r18 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                  [0x12U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r18 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                   [0x12U]);
        VL_WRITEF("r19 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                  [0x13U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r19 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                   [0x13U]);
        VL_WRITEF("r20 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                  [0x14U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r20 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                   [0x14U]);
        VL_WRITEF("r21 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                  [0x15U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r21 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                   [0x15U]);
        VL_WRITEF("r22 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                  [0x16U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r22 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                   [0x16U]);
        VL_WRITEF("r23 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                  [0x17U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r23 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                   [0x17U]);
        VL_WRITEF("r24 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                  [0x18U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r24 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                   [0x18U]);
        VL_WRITEF("r25 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                  [0x19U]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r25 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                   [0x19U]);
        VL_WRITEF("r26 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                  [0x1aU]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r26 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                   [0x1aU]);
        VL_WRITEF("r27 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                  [0x1bU]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r27 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                   [0x1bU]);
        VL_WRITEF("r28 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                  [0x1cU]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r28 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                   [0x1cU]);
        VL_WRITEF("r29 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                  [0x1dU]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r29 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                   [0x1dU]);
        VL_WRITEF("r30 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                  [0x1eU]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r30 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                   [0x1eU]);
        VL_WRITEF("r31 = 0x%8x\n",32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                  [0x1fU]);
        VL_FWRITEF(mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd,"r31 = 0x%8x\n",
                   32,vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data
                   [0x1fU]);
        VL_FCLOSE_I(mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd); mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__unnamedblk2__DOT__fd = 0;
    }
    vlSelf->mips_machine__DOT__mem_data_in[0U] = vlSelf->mips_machine__DOT____Vcellout__core__mem_data_in
        [0U];
    vlSelf->mips_machine__DOT__mem_data_in[1U] = vlSelf->mips_machine__DOT____Vcellout__core__mem_data_in
        [1U];
    vlSelf->mips_machine__DOT__mem_data_in[2U] = vlSelf->mips_machine__DOT____Vcellout__core__mem_data_in
        [2U];
    vlSelf->mips_machine__DOT__mem_data_in[3U] = vlSelf->mips_machine__DOT____Vcellout__core__mem_data_in
        [3U];
    vlSelf->mips_machine__DOT__core__DOT____Vcellinp__f_core__data_out[0U] 
        = vlSelf->mips_machine__DOT__core__DOT__data_out
        [0U];
    vlSelf->mips_machine__DOT__core__DOT____Vcellinp__f_core__data_out[1U] 
        = vlSelf->mips_machine__DOT__core__DOT__data_out
        [1U];
    vlSelf->mips_machine__DOT__core__DOT____Vcellinp__f_core__data_out[2U] 
        = vlSelf->mips_machine__DOT__core__DOT__data_out
        [2U];
    vlSelf->mips_machine__DOT__core__DOT____Vcellinp__f_core__data_out[3U] 
        = vlSelf->mips_machine__DOT__core__DOT__data_out
        [3U];
    vlSelf->mips_machine__DOT__core__DOT____Vcellinp__MEMtoWB__data_out[0U] 
        = vlSelf->mips_machine__DOT__core__DOT__data_out
        [0U];
    vlSelf->mips_machine__DOT__core__DOT____Vcellinp__MEMtoWB__data_out[1U] 
        = vlSelf->mips_machine__DOT__core__DOT__data_out
        [1U];
    vlSelf->mips_machine__DOT__core__DOT____Vcellinp__MEMtoWB__data_out[2U] 
        = vlSelf->mips_machine__DOT__core__DOT__data_out
        [2U];
    vlSelf->mips_machine__DOT__core__DOT____Vcellinp__MEMtoWB__data_out[3U] 
        = vlSelf->mips_machine__DOT__core__DOT__data_out
        [3U];
    vlSelf->mips_machine__DOT__core__DOT____Vcellinp__MEM__mem_data_out[0U] 
        = vlSelf->mips_machine__DOT____Vcellinp__core__mem_data_out
        [0U];
    vlSelf->mips_machine__DOT__core__DOT____Vcellinp__MEM__mem_data_out[1U] 
        = vlSelf->mips_machine__DOT____Vcellinp__core__mem_data_out
        [1U];
    vlSelf->mips_machine__DOT__core__DOT____Vcellinp__MEM__mem_data_out[2U] 
        = vlSelf->mips_machine__DOT____Vcellinp__core__mem_data_out
        [2U];
    vlSelf->mips_machine__DOT__core__DOT____Vcellinp__MEM__mem_data_out[3U] 
        = vlSelf->mips_machine__DOT____Vcellinp__core__mem_data_out
        [3U];
    vlSelf->mips_machine__DOT__core__DOT__IF__DOT__next_pc_mux_out 
        = ((((~ ((0U == vlSelf->mips_machine__DOT__core__DOT__alu_out)
                  ? 1U : 0U)) & (IData)(vlSelf->mips_machine__DOT__core__DOT__EX_branch)) 
            | (IData)(vlSelf->mips_machine__DOT__core__DOT__EX_jump))
            ? ((IData)(vlSelf->mips_machine__DOT__core__DOT__EX_jump)
                ? ((0xf0000000U & vlSelf->mips_machine__DOT__core__DOT__EX_pc) 
                   | (0xffffffcU & (vlSelf->mips_machine__DOT__core__DOT__EX_inst 
                                    << 2U))) : (vlSelf->mips_machine__DOT__core__DOT__EX_pc 
                                                + (
                                                   (((0x8000U 
                                                      & vlSelf->mips_machine__DOT__core__DOT__EX_sign_extended)
                                                      ? 0x3fffU
                                                      : 0U) 
                                                    << 0x12U) 
                                                   | (0x3fffcU 
                                                      & (vlSelf->mips_machine__DOT__core__DOT__EX_sign_extended 
                                                         << 2U)))))
            : ((IData)(4U) + vlSelf->mips_machine__DOT__core__DOT__pc));
    vlSelf->mips_machine__DOT__inst = ((vlSelf->mips_machine__DOT__instruction_parts
                                        [0U] << 0x18U) 
                                       | ((vlSelf->mips_machine__DOT__instruction_parts
                                           [1U] << 0x10U) 
                                          | ((vlSelf->mips_machine__DOT__instruction_parts
                                              [2U] 
                                              << 8U) 
                                             | vlSelf->mips_machine__DOT__instruction_parts
                                             [3U])));
    vlSelf->mips_machine__DOT__core__DOT__MEM__DOT____Vcellinp__cache_core__in_from_mem[0U] 
        = vlSelf->mips_machine__DOT__core__DOT____Vcellinp__MEM__mem_data_out
        [0U];
    vlSelf->mips_machine__DOT__core__DOT__MEM__DOT____Vcellinp__cache_core__in_from_mem[1U] 
        = vlSelf->mips_machine__DOT__core__DOT____Vcellinp__MEM__mem_data_out
        [1U];
    vlSelf->mips_machine__DOT__core__DOT__MEM__DOT____Vcellinp__cache_core__in_from_mem[2U] 
        = vlSelf->mips_machine__DOT__core__DOT____Vcellinp__MEM__mem_data_out
        [2U];
    vlSelf->mips_machine__DOT__core__DOT__MEM__DOT____Vcellinp__cache_core__in_from_mem[3U] 
        = vlSelf->mips_machine__DOT__core__DOT____Vcellinp__MEM__mem_data_out
        [3U];
    vlSelf->mips_machine__DOT__core__DOT__is_float 
        = (((((0x30U == (vlSelf->mips_machine__DOT__inst 
                         >> 0x1aU)) | (0x31U == (vlSelf->mips_machine__DOT__inst 
                                                 >> 0x1aU))) 
             | (0x32U == (vlSelf->mips_machine__DOT__inst 
                          >> 0x1aU))) | (0x33U == (vlSelf->mips_machine__DOT__inst 
                                                   >> 0x1aU))) 
           | (0x34U == (vlSelf->mips_machine__DOT__inst 
                        >> 0x1aU)));
    vlSelf->mips_machine__DOT__core__DOT__float_inst 
        = ((IData)(vlSelf->mips_machine__DOT__core__DOT__is_float)
            ? vlSelf->mips_machine__DOT__inst : 0U);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__rd 
        = (0x1fU & ((1U & (IData)(((0xc0000000U == 
                                    (0xfc000030U & vlSelf->mips_machine__DOT__core__DOT__float_inst)) 
                                   & ((~ (vlSelf->mips_machine__DOT__core__DOT__float_inst 
                                          >> 3U)) | (IData)(
                                                            (0U 
                                                             == 
                                                             (7U 
                                                              & vlSelf->mips_machine__DOT__core__DOT__float_inst)))))))
                     ? (vlSelf->mips_machine__DOT__core__DOT__float_inst 
                        >> 0xbU) : (vlSelf->mips_machine__DOT__core__DOT__float_inst 
                                    >> 0x10U)));
    vlSelf->mips_machine__DOT__core__DOT__float_memtoreg 
        = (IData)((0xc4000000U == (0xfc000000U & vlSelf->mips_machine__DOT__core__DOT__float_inst)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu_control 
        = ((vlSelf->mips_machine__DOT__core__DOT__float_inst 
            >> 0x1fU) ? ((0x40000000U & vlSelf->mips_machine__DOT__core__DOT__float_inst)
                          ? ((0x20000000U & vlSelf->mips_machine__DOT__core__DOT__float_inst)
                              ? 0U : ((0x10000000U 
                                       & vlSelf->mips_machine__DOT__core__DOT__float_inst)
                                       ? ((0x8000000U 
                                           & vlSelf->mips_machine__DOT__core__DOT__float_inst)
                                           ? 0U : (
                                                   (0x4000000U 
                                                    & vlSelf->mips_machine__DOT__core__DOT__float_inst)
                                                    ? 0U
                                                    : 0xbU))
                                       : ((0x8000000U 
                                           & vlSelf->mips_machine__DOT__core__DOT__float_inst)
                                           ? ((0x4000000U 
                                               & vlSelf->mips_machine__DOT__core__DOT__float_inst)
                                               ? 0U
                                               : 0xaU)
                                           : ((0x4000000U 
                                               & vlSelf->mips_machine__DOT__core__DOT__float_inst)
                                               ? 9U
                                               : ((0x20U 
                                                   & vlSelf->mips_machine__DOT__core__DOT__float_inst)
                                                   ? 0U
                                                   : 
                                                  ((0x10U 
                                                    & vlSelf->mips_machine__DOT__core__DOT__float_inst)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & vlSelf->mips_machine__DOT__core__DOT__float_inst)
                                                     ? 
                                                    ((4U 
                                                      & vlSelf->mips_machine__DOT__core__DOT__float_inst)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelf->mips_machine__DOT__core__DOT__float_inst)
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        & vlSelf->mips_machine__DOT__core__DOT__float_inst)
                                                        ? 0U
                                                        : 8U)))
                                                     : 
                                                    ((4U 
                                                      & vlSelf->mips_machine__DOT__core__DOT__float_inst)
                                                      ? 
                                                     ((2U 
                                                       & vlSelf->mips_machine__DOT__core__DOT__float_inst)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->mips_machine__DOT__core__DOT__float_inst)
                                                        ? 7U
                                                        : 6U)
                                                       : 
                                                      ((1U 
                                                        & vlSelf->mips_machine__DOT__core__DOT__float_inst)
                                                        ? 5U
                                                        : 4U))
                                                      : 
                                                     ((2U 
                                                       & vlSelf->mips_machine__DOT__core__DOT__float_inst)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->mips_machine__DOT__core__DOT__float_inst)
                                                        ? 3U
                                                        : 2U)
                                                       : 
                                                      ((1U 
                                                        & vlSelf->mips_machine__DOT__core__DOT__float_inst)
                                                        ? 1U
                                                        : 0U))))))))))
                          : 0U) : 0U);
    mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
        = vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
        [(0x1fU & (vlSelf->mips_machine__DOT__core__DOT__float_inst 
                   >> 0x15U))];
    mips_machine__DOT__core__DOT__f_core__DOT__operand_2 
        = vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data
        [(0x1fU & (vlSelf->mips_machine__DOT__core__DOT__float_inst 
                   >> 0x10U))];
    vlSelf->mips_machine__DOT__core__DOT__final_memtoreg 
        = ((IData)(vlSelf->mips_machine__DOT__core__DOT__is_float)
            ? (IData)(vlSelf->mips_machine__DOT__core__DOT__float_memtoreg)
            : (IData)(vlSelf->mips_machine__DOT__core__DOT__MEM_memtoreg));
    vlSelf->mips_machine__DOT__core__DOT____Vcellout__f_core__in_data[3U] 
        = (mips_machine__DOT__core__DOT__f_core__DOT__operand_2 
           >> 0x18U);
    vlSelf->mips_machine__DOT__core__DOT____Vcellout__f_core__in_data[2U] 
        = (0xffU & (mips_machine__DOT__core__DOT__f_core__DOT__operand_2 
                    >> 0x10U));
    vlSelf->mips_machine__DOT__core__DOT____Vcellout__f_core__in_data[1U] 
        = (0xffU & (mips_machine__DOT__core__DOT__f_core__DOT__operand_2 
                    >> 8U));
    vlSelf->mips_machine__DOT__core__DOT____Vcellout__f_core__in_data[0U] 
        = (0xffU & mips_machine__DOT__core__DOT__f_core__DOT__operand_2);
    mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
        = ((1U & (IData)(((0xc0000000U == (0xe0000000U 
                                           & vlSelf->mips_machine__DOT__core__DOT__float_inst)) 
                          & ((0x10000000U & vlSelf->mips_machine__DOT__core__DOT__float_inst)
                              ? (IData)((0U == (0xc000000U 
                                                & vlSelf->mips_machine__DOT__core__DOT__float_inst)))
                              : (IData)((0U != (0xc000000U 
                                                & vlSelf->mips_machine__DOT__core__DOT__float_inst)))))))
            ? ((((0x8000U & vlSelf->mips_machine__DOT__core__DOT__float_inst)
                  ? 0xffffU : 0U) << 0x10U) | (0xffffU 
                                               & vlSelf->mips_machine__DOT__core__DOT__float_inst))
            : mips_machine__DOT__core__DOT__f_core__DOT__operand_2);
    vlSelf->mips_machine__DOT__core__DOT__in_data_float[0U] 
        = vlSelf->mips_machine__DOT__core__DOT____Vcellout__f_core__in_data
        [0U];
    vlSelf->mips_machine__DOT__core__DOT__in_data_float[1U] 
        = vlSelf->mips_machine__DOT__core__DOT____Vcellout__f_core__in_data
        [1U];
    vlSelf->mips_machine__DOT__core__DOT__in_data_float[2U] 
        = vlSelf->mips_machine__DOT__core__DOT____Vcellout__f_core__in_data
        [2U];
    vlSelf->mips_machine__DOT__core__DOT__in_data_float[3U] 
        = vlSelf->mips_machine__DOT__core__DOT____Vcellout__f_core__in_data
        [3U];
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__mantissa_A 
        = (0x800000U | (0x7fffffU & mips_machine__DOT__core__DOT__f_core__DOT__operand_1));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__exp_A 
        = (0xffU & (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                    >> 0x17U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__sign_A 
        = (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
           >> 0x1fU);
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__mantissa_B 
        = (0x800000U | (0x7fffffU & mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__exp_B 
        = (0xffU & (mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                    >> 0x17U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__sign_B 
        = (mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
           >> 0x1fU);
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__exp_temp 
        = (0xffU & (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__exp_A) 
                     + (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__exp_B)) 
                    - (IData)(0x7fU)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__mantissa_temp 
        = (0xffffffffffffULL & ((QData)((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__mantissa_A)) 
                                * (QData)((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__mantissa_B))));
    if ((1U & (IData)((mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__mantissa_temp 
                       >> 0x2fU)))) {
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__mantissa 
            = (0x7fffffU & (IData)((mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__mantissa_temp 
                                    >> 0x18U)));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__exp 
            = (0xffU & ((IData)(1U) + (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__exp_temp)));
    } else {
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__mantissa 
            = (0x7fffffU & (IData)((mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__mantissa_temp 
                                    >> 0x17U)));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__exp 
            = mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__exp_temp;
    }
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__sign 
        = ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__sign_A) 
           ^ (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__sign_B));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__mul_result 
        = (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__sign) 
            << 0x1fU) | (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__exp) 
                          << 0x17U) | vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__mantissa));
    if ((1U & (~ ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu_control) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu_control) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu_control) 
                          >> 1U)))) {
                if ((1U & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu_control))) {
                    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__reg2_data_temp 
                        = mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out;
                    if ((mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                         >> 0x1fU)) {
                        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__reg2_data_temp 
                            = (0x7fffffffU & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__reg2_data_temp);
                    } else if ((1U & (~ (mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                         >> 0x1fU)))) {
                        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__reg2_data_temp 
                            = (0x80000000U | vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__reg2_data_temp);
                    }
                } else {
                    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__reg2_data_temp 
                        = mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out;
                }
            }
        }
    }
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier1__DOT__mantissa_A 
        = (0x800000U | (0x7fffffU & mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier1__DOT__exp_temp = 0x7eU;
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier1__DOT__mantissa_temp 
        = (0xffffffffffffULL & (0xf0f0f1ULL * (QData)((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier1__DOT__mantissa_A))));
    if ((1U & (IData)((mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier1__DOT__mantissa_temp 
                       >> 0x2fU)))) {
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier1__DOT__mantissa 
            = (0x7fffffU & (IData)((mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier1__DOT__mantissa_temp 
                                    >> 0x18U)));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier1__DOT__exp 
            = (0xffU & ((IData)(1U) + (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier1__DOT__exp_temp)));
    } else {
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier1__DOT__mantissa 
            = (0x7fffffU & (IData)((mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier1__DOT__mantissa_temp 
                                    >> 0x17U)));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier1__DOT__exp 
            = mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier1__DOT__exp_temp;
    }
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__temp1 
        = (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier1__DOT__exp) 
            << 0x17U) | vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier1__DOT__mantissa);
    if (vlSelf->mips_machine__DOT__core__DOT__is_float) {
        vlSelf->mips_machine__DOT__core__DOT__in_data_final[0U] 
            = vlSelf->mips_machine__DOT__core__DOT__in_data_float
            [0U];
        vlSelf->mips_machine__DOT__core__DOT__in_data_final[1U] 
            = vlSelf->mips_machine__DOT__core__DOT__in_data_float
            [1U];
        vlSelf->mips_machine__DOT__core__DOT__in_data_final[2U] 
            = vlSelf->mips_machine__DOT__core__DOT__in_data_float
            [2U];
        vlSelf->mips_machine__DOT__core__DOT__in_data_final[3U] 
            = vlSelf->mips_machine__DOT__core__DOT__in_data_float
            [3U];
    } else {
        vlSelf->mips_machine__DOT__core__DOT__in_data_final[0U] 
            = vlSelf->mips_machine__DOT__core__DOT__in_data
            [0U];
        vlSelf->mips_machine__DOT__core__DOT__in_data_final[1U] 
            = vlSelf->mips_machine__DOT__core__DOT__in_data
            [1U];
        vlSelf->mips_machine__DOT__core__DOT__in_data_final[2U] 
            = vlSelf->mips_machine__DOT__core__DOT__in_data
            [2U];
        vlSelf->mips_machine__DOT__core__DOT__in_data_final[3U] 
            = vlSelf->mips_machine__DOT__core__DOT__in_data
            [3U];
    }
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__A_greater_than_B 
        = ((0xffU & (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                     >> 0x17U)) >= (0xffU & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__reg2_data_temp 
                                             >> 0x17U)));
    if (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__A_greater_than_B) {
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__mantissa_A 
            = (0x800000U | (0x7fffffU & mips_machine__DOT__core__DOT__f_core__DOT__operand_1));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__mantissa_B 
            = (0x800000U | (0x7fffffU & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__reg2_data_temp));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__exp_A 
            = (0xffU & (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                        >> 0x17U));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__exp_B 
            = (0xffU & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__reg2_data_temp 
                        >> 0x17U));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__sign_A 
            = (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
               >> 0x1fU);
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__sign_B 
            = (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__reg2_data_temp 
               >> 0x1fU);
    } else {
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__mantissa_A 
            = (0x800000U | (0x7fffffU & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__reg2_data_temp));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__mantissa_B 
            = (0x800000U | (0x7fffffU & mips_machine__DOT__core__DOT__f_core__DOT__operand_1));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__exp_A 
            = (0xffU & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__reg2_data_temp 
                        >> 0x17U));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__exp_B 
            = (0xffU & (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                        >> 0x17U));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__sign_A 
            = (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__reg2_data_temp 
               >> 0x1fU);
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__sign_B 
            = (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
               >> 0x1fU);
    }
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__exp_sub 
        = (0xffU & ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__exp_A) 
                    - (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__exp_B)));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__mantissa_B 
        = ((0x17U >= (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__exp_sub))
            ? (0xffffffU & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__mantissa_B 
                            >> (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__exp_sub)))
            : 0U);
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__carry 
        = (1U & ((((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__sign_A) 
                   ^ (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__sign_B))
                   ? (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__mantissa_A 
                      - vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__mantissa_B)
                   : (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__mantissa_A 
                      + vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__mantissa_B)) 
                 >> 0x18U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__mantissa_temp 
        = (0xffffffU & (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__sign_A) 
                         ^ (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__sign_B))
                         ? (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__mantissa_A 
                            - vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__mantissa_B)
                         : (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__mantissa_A 
                            + vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__mantissa_B)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__exp 
        = vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__exp_A;
    if (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__carry) {
        mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__mantissa_temp 
            = (0xffffffU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__mantissa_temp 
                            >> 1U));
        mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__exp 
            = (0xffU & ((IData)(1U) + (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__exp)));
    } else {
        while ((1U & (~ (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__mantissa_temp 
                         >> 0x17U)))) {
            mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__mantissa_temp 
                = (0xffffffU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__mantissa_temp 
                                << 1U));
            mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__exp 
                = (0xffU & ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__exp) 
                            - (IData)(1U)));
        }
    }
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__sign 
        = vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__sign_A;
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__mantissa 
        = (0x7fffffU & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__mantissa_temp);
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__add_result 
        = (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__sign) 
            << 0x1fU) | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__exp) 
                          << 0x17U) | mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__mantissa));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__A_greater_than_B 
        = (0x80U >= (0xffU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__temp1 
                              >> 0x17U)));
    if (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__A_greater_than_B) {
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__mantissa_A = 0xb4b4b5U;
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__mantissa_B 
            = (0x800000U | (0x7fffffU & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__temp1));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__exp_A = 0x80U;
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__exp_B 
            = (0xffU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__temp1 
                        >> 0x17U));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__sign_A = 0U;
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__sign_B = 1U;
    } else {
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__mantissa_A 
            = (0x800000U | (0x7fffffU & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__temp1));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__mantissa_B = 0xb4b4b5U;
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__exp_A 
            = (0xffU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__temp1 
                        >> 0x17U));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__exp_B = 0x80U;
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__sign_A = 1U;
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__sign_B = 0U;
    }
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__exp_sub 
        = (0xffU & ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__exp_A) 
                    - (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__exp_B)));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__mantissa_B 
        = ((0x17U >= (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__exp_sub))
            ? (0xffffffU & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__mantissa_B 
                            >> (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__exp_sub)))
            : 0U);
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__carry 
        = (1U & ((((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__sign_A) 
                   ^ (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__sign_B))
                   ? (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__mantissa_A 
                      - vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__mantissa_B)
                   : (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__mantissa_A 
                      + vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__mantissa_B)) 
                 >> 0x18U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__mantissa_temp 
        = (0xffffffU & (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__sign_A) 
                         ^ (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__sign_B))
                         ? (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__mantissa_A 
                            - vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__mantissa_B)
                         : (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__mantissa_A 
                            + vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__mantissa_B)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__exp 
        = vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__exp_A;
    if (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__carry) {
        mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__mantissa_temp 
            = (0xffffffU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__mantissa_temp 
                            >> 1U));
        mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__exp 
            = (0xffU & ((IData)(1U) + (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__exp)));
    } else {
        while ((1U & (~ (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__mantissa_temp 
                         >> 0x17U)))) {
            mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__mantissa_temp 
                = (0xffffffU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__mantissa_temp 
                                << 1U));
            mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__exp 
                = (0xffU & ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__exp) 
                            - (IData)(1U)));
        }
    }
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__sign 
        = vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__sign_A;
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__mantissa 
        = (0x7fffffU & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__mantissa_temp);
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__x0 
        = (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__sign) 
            << 0x1fU) | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__exp) 
                          << 0x17U) | mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__mantissa));
    vlSelf->mips_machine__DOT__core__DOT____Vcellinp__MEM__in_data[0U] 
        = vlSelf->mips_machine__DOT__core__DOT__in_data_final
        [0U];
    vlSelf->mips_machine__DOT__core__DOT____Vcellinp__MEM__in_data[1U] 
        = vlSelf->mips_machine__DOT__core__DOT__in_data_final
        [1U];
    vlSelf->mips_machine__DOT__core__DOT____Vcellinp__MEM__in_data[2U] 
        = vlSelf->mips_machine__DOT__core__DOT__in_data_final
        [2U];
    vlSelf->mips_machine__DOT__core__DOT____Vcellinp__MEM__in_data[3U] 
        = vlSelf->mips_machine__DOT__core__DOT__in_data_final
        [3U];
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier2__DOT__mantissa_A 
        = (0x800000U | (0x7fffffU & mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier2__DOT__mantissa_B 
        = (0x800000U | (0x7fffffU & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__x0));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier2__DOT__exp_B 
        = (0xffU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__x0 
                    >> 0x17U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier2__DOT__sign_B 
        = (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__x0 
           >> 0x1fU);
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier2__DOT__exp_temp 
        = (0xffU & ((IData)(0xffU) + (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier2__DOT__exp_B)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier2__DOT__mantissa_temp 
        = (0xffffffffffffULL & ((QData)((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier2__DOT__mantissa_A)) 
                                * (QData)((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier2__DOT__mantissa_B))));
    if ((1U & (IData)((mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier2__DOT__mantissa_temp 
                       >> 0x2fU)))) {
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier2__DOT__mantissa 
            = (0x7fffffU & (IData)((mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier2__DOT__mantissa_temp 
                                    >> 0x18U)));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier2__DOT__exp 
            = (0xffU & ((IData)(1U) + (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier2__DOT__exp_temp)));
    } else {
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier2__DOT__mantissa 
            = (0x7fffffU & (IData)((mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier2__DOT__mantissa_temp 
                                    >> 0x17U)));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier2__DOT__exp 
            = mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier2__DOT__exp_temp;
    }
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier2__DOT__sign 
        = mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier2__DOT__sign_B;
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__temp2 
        = (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier2__DOT__sign) 
            << 0x1fU) | (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier2__DOT__exp) 
                          << 0x17U) | vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier2__DOT__mantissa));
    vlSelf->mips_machine__DOT__core__DOT__MEM__DOT____Vcellinp__cache_core__in_data[0U] 
        = vlSelf->mips_machine__DOT__core__DOT____Vcellinp__MEM__in_data
        [0U];
    vlSelf->mips_machine__DOT__core__DOT__MEM__DOT____Vcellinp__cache_core__in_data[1U] 
        = vlSelf->mips_machine__DOT__core__DOT____Vcellinp__MEM__in_data
        [1U];
    vlSelf->mips_machine__DOT__core__DOT__MEM__DOT____Vcellinp__cache_core__in_data[2U] 
        = vlSelf->mips_machine__DOT__core__DOT____Vcellinp__MEM__in_data
        [2U];
    vlSelf->mips_machine__DOT__core__DOT__MEM__DOT____Vcellinp__cache_core__in_data[3U] 
        = vlSelf->mips_machine__DOT__core__DOT____Vcellinp__MEM__in_data
        [3U];
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT____Vcellinp__adder2____pinNumber2 
        = (((~ (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__temp2 
                >> 0x1fU)) << 0x1fU) | (0x7fffffffU 
                                        & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__temp2));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__A_greater_than_B 
        = (0x80U >= (0xffU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT____Vcellinp__adder2____pinNumber2 
                              >> 0x17U)));
    if (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__A_greater_than_B) {
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__mantissa_A = 0x800000U;
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__mantissa_B 
            = (0x800000U | (0x7fffffU & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT____Vcellinp__adder2____pinNumber2));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__exp_A = 0x80U;
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__exp_B 
            = (0xffU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT____Vcellinp__adder2____pinNumber2 
                        >> 0x17U));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__sign_A = 0U;
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__sign_B 
            = (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT____Vcellinp__adder2____pinNumber2 
               >> 0x1fU);
    } else {
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__mantissa_A 
            = (0x800000U | (0x7fffffU & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT____Vcellinp__adder2____pinNumber2));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__mantissa_B = 0x800000U;
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__exp_A 
            = (0xffU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT____Vcellinp__adder2____pinNumber2 
                        >> 0x17U));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__exp_B = 0x80U;
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__sign_A 
            = (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT____Vcellinp__adder2____pinNumber2 
               >> 0x1fU);
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__sign_B = 0U;
    }
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__exp_sub 
        = (0xffU & ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__exp_A) 
                    - (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__exp_B)));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__mantissa_B 
        = ((0x17U >= (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__exp_sub))
            ? (0xffffffU & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__mantissa_B 
                            >> (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__exp_sub)))
            : 0U);
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__carry 
        = (1U & ((((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__sign_A) 
                   ^ (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__sign_B))
                   ? (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__mantissa_A 
                      - vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__mantissa_B)
                   : (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__mantissa_A 
                      + vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__mantissa_B)) 
                 >> 0x18U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__mantissa_temp 
        = (0xffffffU & (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__sign_A) 
                         ^ (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__sign_B))
                         ? (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__mantissa_A 
                            - vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__mantissa_B)
                         : (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__mantissa_A 
                            + vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__mantissa_B)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__exp 
        = vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__exp_A;
    if (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__carry) {
        mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__mantissa_temp 
            = (0xffffffU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__mantissa_temp 
                            >> 1U));
        mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__exp 
            = (0xffU & ((IData)(1U) + (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__exp)));
    } else {
        while ((1U & (~ (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__mantissa_temp 
                         >> 0x17U)))) {
            mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__mantissa_temp 
                = (0xffffffU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__mantissa_temp 
                                << 1U));
            mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__exp 
                = (0xffU & ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__exp) 
                            - (IData)(1U)));
        }
    }
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__sign 
        = vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__sign_A;
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__mantissa 
        = (0x7fffffU & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__mantissa_temp);
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__temp3 
        = (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__sign) 
            << 0x1fU) | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__exp) 
                          << 0x17U) | mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__mantissa));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__mantissa_A 
        = (0x800000U | (0x7fffffU & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__x0));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__exp_A 
        = (0xffU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__x0 
                    >> 0x17U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__sign_A 
        = (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__x0 
           >> 0x1fU);
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__mantissa_B 
        = (0x800000U | (0x7fffffU & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__temp3));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__exp_B 
        = (0xffU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__temp3 
                    >> 0x17U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__sign_B 
        = (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__temp3 
           >> 0x1fU);
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__exp_temp 
        = (0xffU & (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__exp_A) 
                     + (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__exp_B)) 
                    - (IData)(0x7fU)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__mantissa_temp 
        = (0xffffffffffffULL & ((QData)((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__mantissa_A)) 
                                * (QData)((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__mantissa_B))));
    if ((1U & (IData)((mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__mantissa_temp 
                       >> 0x2fU)))) {
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__mantissa 
            = (0x7fffffU & (IData)((mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__mantissa_temp 
                                    >> 0x18U)));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__exp 
            = (0xffU & ((IData)(1U) + (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__exp_temp)));
    } else {
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__mantissa 
            = (0x7fffffU & (IData)((mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__mantissa_temp 
                                    >> 0x17U)));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__exp 
            = mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__exp_temp;
    }
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__sign 
        = ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__sign_A) 
           ^ (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__sign_B));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__x1 
        = (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__sign) 
            << 0x1fU) | (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__exp) 
                          << 0x17U) | vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__mantissa));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier4__DOT__mantissa_A 
        = (0x800000U | (0x7fffffU & mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier4__DOT__mantissa_B 
        = (0x800000U | (0x7fffffU & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__x1));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier4__DOT__exp_B 
        = (0xffU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__x1 
                    >> 0x17U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier4__DOT__sign_B 
        = (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__x1 
           >> 0x1fU);
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier4__DOT__exp_temp 
        = (0xffU & ((IData)(0xffU) + (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier4__DOT__exp_B)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier4__DOT__mantissa_temp 
        = (0xffffffffffffULL & ((QData)((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier4__DOT__mantissa_A)) 
                                * (QData)((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier4__DOT__mantissa_B))));
    if ((1U & (IData)((mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier4__DOT__mantissa_temp 
                       >> 0x2fU)))) {
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier4__DOT__mantissa 
            = (0x7fffffU & (IData)((mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier4__DOT__mantissa_temp 
                                    >> 0x18U)));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier4__DOT__exp 
            = (0xffU & ((IData)(1U) + (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier4__DOT__exp_temp)));
    } else {
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier4__DOT__mantissa 
            = (0x7fffffU & (IData)((mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier4__DOT__mantissa_temp 
                                    >> 0x17U)));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier4__DOT__exp 
            = mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier4__DOT__exp_temp;
    }
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier4__DOT__sign 
        = mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier4__DOT__sign_B;
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__temp4 
        = (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier4__DOT__sign) 
            << 0x1fU) | (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier4__DOT__exp) 
                          << 0x17U) | vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier4__DOT__mantissa));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT____Vcellinp__adder3____pinNumber2 
        = (((~ (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__temp4 
                >> 0x1fU)) << 0x1fU) | (0x7fffffffU 
                                        & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__temp4));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__A_greater_than_B 
        = (0x80U >= (0xffU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT____Vcellinp__adder3____pinNumber2 
                              >> 0x17U)));
    if (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__A_greater_than_B) {
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__mantissa_A = 0x800000U;
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__mantissa_B 
            = (0x800000U | (0x7fffffU & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT____Vcellinp__adder3____pinNumber2));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__exp_A = 0x80U;
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__exp_B 
            = (0xffU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT____Vcellinp__adder3____pinNumber2 
                        >> 0x17U));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__sign_A = 0U;
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__sign_B 
            = (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT____Vcellinp__adder3____pinNumber2 
               >> 0x1fU);
    } else {
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__mantissa_A 
            = (0x800000U | (0x7fffffU & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT____Vcellinp__adder3____pinNumber2));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__mantissa_B = 0x800000U;
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__exp_A 
            = (0xffU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT____Vcellinp__adder3____pinNumber2 
                        >> 0x17U));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__exp_B = 0x80U;
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__sign_A 
            = (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT____Vcellinp__adder3____pinNumber2 
               >> 0x1fU);
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__sign_B = 0U;
    }
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__exp_sub 
        = (0xffU & ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__exp_A) 
                    - (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__exp_B)));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__mantissa_B 
        = ((0x17U >= (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__exp_sub))
            ? (0xffffffU & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__mantissa_B 
                            >> (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__exp_sub)))
            : 0U);
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__carry 
        = (1U & ((((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__sign_A) 
                   ^ (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__sign_B))
                   ? (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__mantissa_A 
                      - vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__mantissa_B)
                   : (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__mantissa_A 
                      + vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__mantissa_B)) 
                 >> 0x18U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__mantissa_temp 
        = (0xffffffU & (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__sign_A) 
                         ^ (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__sign_B))
                         ? (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__mantissa_A 
                            - vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__mantissa_B)
                         : (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__mantissa_A 
                            + vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__mantissa_B)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__exp 
        = vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__exp_A;
    if (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__carry) {
        mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__mantissa_temp 
            = (0xffffffU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__mantissa_temp 
                            >> 1U));
        mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__exp 
            = (0xffU & ((IData)(1U) + (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__exp)));
    } else {
        while ((1U & (~ (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__mantissa_temp 
                         >> 0x17U)))) {
            mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__mantissa_temp 
                = (0xffffffU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__mantissa_temp 
                                << 1U));
            mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__exp 
                = (0xffU & ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__exp) 
                            - (IData)(1U)));
        }
    }
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__sign 
        = vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__sign_A;
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__mantissa 
        = (0x7fffffU & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__mantissa_temp);
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__temp5 
        = (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__sign) 
            << 0x1fU) | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__exp) 
                          << 0x17U) | mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__mantissa));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__mantissa_A 
        = (0x800000U | (0x7fffffU & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__x1));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__exp_A 
        = (0xffU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__x1 
                    >> 0x17U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__sign_A 
        = (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__x1 
           >> 0x1fU);
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__mantissa_B 
        = (0x800000U | (0x7fffffU & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__temp5));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__exp_B 
        = (0xffU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__temp5 
                    >> 0x17U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__sign_B 
        = (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__temp5 
           >> 0x1fU);
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__exp_temp 
        = (0xffU & (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__exp_A) 
                     + (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__exp_B)) 
                    - (IData)(0x7fU)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__mantissa_temp 
        = (0xffffffffffffULL & ((QData)((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__mantissa_A)) 
                                * (QData)((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__mantissa_B))));
    if ((1U & (IData)((mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__mantissa_temp 
                       >> 0x2fU)))) {
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__mantissa 
            = (0x7fffffU & (IData)((mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__mantissa_temp 
                                    >> 0x18U)));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__exp 
            = (0xffU & ((IData)(1U) + (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__exp_temp)));
    } else {
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__mantissa 
            = (0x7fffffU & (IData)((mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__mantissa_temp 
                                    >> 0x17U)));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__exp 
            = mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__exp_temp;
    }
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__sign 
        = ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__sign_A) 
           ^ (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__sign_B));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__x2 
        = (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__sign) 
            << 0x1fU) | (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__exp) 
                          << 0x17U) | vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__mantissa));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier6__DOT__mantissa_A 
        = (0x800000U | (0x7fffffU & mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier6__DOT__mantissa_B 
        = (0x800000U | (0x7fffffU & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__x2));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier6__DOT__exp_B 
        = (0xffU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__x2 
                    >> 0x17U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier6__DOT__sign_B 
        = (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__x2 
           >> 0x1fU);
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier6__DOT__exp_temp 
        = (0xffU & ((IData)(0xffU) + (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier6__DOT__exp_B)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier6__DOT__mantissa_temp 
        = (0xffffffffffffULL & ((QData)((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier6__DOT__mantissa_A)) 
                                * (QData)((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier6__DOT__mantissa_B))));
    if ((1U & (IData)((mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier6__DOT__mantissa_temp 
                       >> 0x2fU)))) {
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier6__DOT__mantissa 
            = (0x7fffffU & (IData)((mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier6__DOT__mantissa_temp 
                                    >> 0x18U)));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier6__DOT__exp 
            = (0xffU & ((IData)(1U) + (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier6__DOT__exp_temp)));
    } else {
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier6__DOT__mantissa 
            = (0x7fffffU & (IData)((mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier6__DOT__mantissa_temp 
                                    >> 0x17U)));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier6__DOT__exp 
            = mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier6__DOT__exp_temp;
    }
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier6__DOT__sign 
        = mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier6__DOT__sign_B;
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__temp6 
        = (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier6__DOT__sign) 
            << 0x1fU) | (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier6__DOT__exp) 
                          << 0x17U) | vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier6__DOT__mantissa));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT____Vcellinp__adder4____pinNumber2 
        = (((~ (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__temp6 
                >> 0x1fU)) << 0x1fU) | (0x7fffffffU 
                                        & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__temp6));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__A_greater_than_B 
        = (0x80U >= (0xffU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT____Vcellinp__adder4____pinNumber2 
                              >> 0x17U)));
    if (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__A_greater_than_B) {
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__mantissa_A = 0x800000U;
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__mantissa_B 
            = (0x800000U | (0x7fffffU & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT____Vcellinp__adder4____pinNumber2));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__exp_A = 0x80U;
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__exp_B 
            = (0xffU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT____Vcellinp__adder4____pinNumber2 
                        >> 0x17U));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__sign_A = 0U;
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__sign_B 
            = (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT____Vcellinp__adder4____pinNumber2 
               >> 0x1fU);
    } else {
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__mantissa_A 
            = (0x800000U | (0x7fffffU & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT____Vcellinp__adder4____pinNumber2));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__mantissa_B = 0x800000U;
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__exp_A 
            = (0xffU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT____Vcellinp__adder4____pinNumber2 
                        >> 0x17U));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__exp_B = 0x80U;
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__sign_A 
            = (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT____Vcellinp__adder4____pinNumber2 
               >> 0x1fU);
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__sign_B = 0U;
    }
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__exp_sub 
        = (0xffU & ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__exp_A) 
                    - (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__exp_B)));
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__mantissa_B 
        = ((0x17U >= (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__exp_sub))
            ? (0xffffffU & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__mantissa_B 
                            >> (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__exp_sub)))
            : 0U);
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__carry 
        = (1U & ((((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__sign_A) 
                   ^ (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__sign_B))
                   ? (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__mantissa_A 
                      - vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__mantissa_B)
                   : (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__mantissa_A 
                      + vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__mantissa_B)) 
                 >> 0x18U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__mantissa_temp 
        = (0xffffffU & (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__sign_A) 
                         ^ (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__sign_B))
                         ? (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__mantissa_A 
                            - vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__mantissa_B)
                         : (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__mantissa_A 
                            + vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__mantissa_B)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__exp 
        = vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__exp_A;
    if (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__carry) {
        mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__mantissa_temp 
            = (0xffffffU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__mantissa_temp 
                            >> 1U));
        mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__exp 
            = (0xffU & ((IData)(1U) + (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__exp)));
    } else {
        while ((1U & (~ (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__mantissa_temp 
                         >> 0x17U)))) {
            mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__mantissa_temp 
                = (0xffffffU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__mantissa_temp 
                                << 1U));
            mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__exp 
                = (0xffU & ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__exp) 
                            - (IData)(1U)));
        }
    }
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__sign 
        = vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__sign_A;
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__mantissa 
        = (0x7fffffU & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__mantissa_temp);
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__temp7 
        = (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__sign) 
            << 0x1fU) | (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__exp) 
                          << 0x17U) | mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__mantissa));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__mantissa_A 
        = (0x800000U | (0x7fffffU & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__x2));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__exp_A 
        = (0xffU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__x2 
                    >> 0x17U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__sign_A 
        = (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__x2 
           >> 0x1fU);
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__mantissa_B 
        = (0x800000U | (0x7fffffU & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__temp7));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__exp_B 
        = (0xffU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__temp7 
                    >> 0x17U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__sign_B 
        = (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__temp7 
           >> 0x1fU);
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__exp_temp 
        = (0xffU & (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__exp_A) 
                     + (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__exp_B)) 
                    - (IData)(0x7fU)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__mantissa_temp 
        = (0xffffffffffffULL & ((QData)((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__mantissa_A)) 
                                * (QData)((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__mantissa_B))));
    if ((1U & (IData)((mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__mantissa_temp 
                       >> 0x2fU)))) {
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__mantissa 
            = (0x7fffffU & (IData)((mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__mantissa_temp 
                                    >> 0x18U)));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__exp 
            = (0xffU & ((IData)(1U) + (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__exp_temp)));
    } else {
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__mantissa 
            = (0x7fffffU & (IData)((mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__mantissa_temp 
                                    >> 0x17U)));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__exp 
            = mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__exp_temp;
    }
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__sign 
        = ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__sign_A) 
           ^ (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__sign_B));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__x3 
        = (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__sign) 
            << 0x1fU) | (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__exp) 
                          << 0x17U) | vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__mantissa));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__inverse_B 
        = ((0x80000000U & mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out) 
           | ((0x7f800000U & ((((IData)(0x7eU) + (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__x3 
                                                  >> 0x17U)) 
                               - (mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                  >> 0x17U)) << 0x17U)) 
              | (0x7fffffU & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__x3)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__mantissa_A 
        = (0x800000U | (0x7fffffU & mips_machine__DOT__core__DOT__f_core__DOT__operand_1));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__exp_A 
        = (0xffU & (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                    >> 0x17U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__sign_A 
        = (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
           >> 0x1fU);
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__mantissa_B 
        = (0x800000U | (0x7fffffU & mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__inverse_B));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__exp_B 
        = (0xffU & (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__inverse_B 
                    >> 0x17U));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__sign_B 
        = (mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__inverse_B 
           >> 0x1fU);
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__exp_temp 
        = (0xffU & (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__exp_A) 
                     + (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__exp_B)) 
                    - (IData)(0x7fU)));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__mantissa_temp 
        = (0xffffffffffffULL & ((QData)((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__mantissa_A)) 
                                * (QData)((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__mantissa_B))));
    if ((1U & (IData)((mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__mantissa_temp 
                       >> 0x2fU)))) {
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__mantissa 
            = (0x7fffffU & (IData)((mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__mantissa_temp 
                                    >> 0x18U)));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__exp 
            = (0xffU & ((IData)(1U) + (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__exp_temp)));
    } else {
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__mantissa 
            = (0x7fffffU & (IData)((mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__mantissa_temp 
                                    >> 0x17U)));
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__exp 
            = mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__exp_temp;
    }
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__sign 
        = ((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__sign_A) 
           ^ (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__sign_B));
    mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__div_result 
        = (((IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__sign) 
            << 0x1fU) | (((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__exp) 
                          << 0x17U) | vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__mantissa));
    if ((8U & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu_control))) {
        if ((4U & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu_control))) {
            vlSelf->mips_machine__DOT__core__DOT__float_addr = 0U;
        } else if ((2U & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu_control))) {
            if ((1U & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu_control))) {
                vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__luiTemp 
                    = (0xffffU & mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out);
                vlSelf->mips_machine__DOT__core__DOT__float_addr 
                    = ((IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__luiTemp) 
                       << 0x10U);
            } else {
                vlSelf->mips_machine__DOT__core__DOT__float_addr 
                    = mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out;
            }
        } else if ((1U & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu_control))) {
            vlSelf->mips_machine__DOT__core__DOT__float_addr 
                = mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out;
        } else {
            vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real 
                = (0xffU & ((mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                             >> 0x17U) - (IData)(0x7fU)));
            if (VL_GTS_III(1,32,32, 0xffffffffU, VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp = 0U;
            } else if ((0xffffffffU == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp = 1U;
            } else if ((0U == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp = 1U;
                if ((0x400000U & mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp);
                }
            } else if ((1U == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                    = (2U | (1U & (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                   >> 0x16U)));
                if ((0x200000U & mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp);
                }
            } else if ((2U == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                    = (4U | (3U & (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                   >> 0x15U)));
                if ((0x100000U & mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp);
                }
            } else if ((3U == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                    = (8U | (7U & (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                   >> 0x14U)));
                if ((0x80000U & mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp);
                }
            } else if ((4U == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                    = (0x10U | (0xfU & (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                        >> 0x13U)));
                if ((0x40000U & mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp);
                }
            } else if ((5U == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                    = (0x20U | (0x1fU & (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                         >> 0x12U)));
                if ((0x20000U & mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp);
                }
            } else if ((6U == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                    = (0x40U | (0x3fU & (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                         >> 0x11U)));
                if ((0x10000U & mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp);
                }
            } else if ((7U == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                    = (0x80U | (0x7fU & (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                         >> 0x10U)));
                if ((0x8000U & mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp);
                }
            } else if ((8U == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                    = (0x100U | (0xffU & (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                          >> 0xfU)));
                if ((0x4000U & mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp);
                }
            } else if ((9U == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                    = (0x200U | (0x1ffU & (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                           >> 0xeU)));
                if ((0x2000U & mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp);
                }
            } else if ((0xaU == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                    = (0x400U | (0x3ffU & (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                           >> 0xdU)));
                if ((0x1000U & mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp);
                }
            } else if ((0xbU == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                    = (0x800U | (0x7ffU & (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                           >> 0xcU)));
                if ((0x800U & mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp);
                }
            } else if ((0xcU == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                    = (0x1000U | (0xfffU & (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                            >> 0xbU)));
                if ((0x400U & mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp);
                }
            } else if ((0xdU == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                    = (0x2000U | (0x1fffU & (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                             >> 0xaU)));
                if ((0x200U & mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp);
                }
            } else if ((0xeU == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                    = (0x4000U | (0x3fffU & (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                             >> 9U)));
                if ((0x100U & mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp);
                }
            } else if ((0xfU == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                    = (0x8000U | (0x7fffU & (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                             >> 8U)));
                if ((0x80U & mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp);
                }
            } else if ((0x10U == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                    = (0x10000U | (0xffffU & (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                              >> 7U)));
                if ((0x40U & mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp);
                }
            } else if ((0x11U == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                    = (0x20000U | (0x1ffffU & (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                               >> 6U)));
                if ((0x20U & mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp);
                }
            } else if ((0x12U == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                    = (0x40000U | (0x3ffffU & (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                               >> 5U)));
                if ((0x10U & mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp);
                }
            } else if ((0x13U == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                    = (0x80000U | (0x7ffffU & (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                               >> 4U)));
                if ((8U & mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp);
                }
            } else if ((0x14U == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                    = (0x100000U | (0xfffffU & (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                >> 3U)));
                if ((4U & mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp);
                }
            } else if ((0x15U == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                    = (0x200000U | (0x1fffffU & (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                 >> 2U)));
                if ((2U & mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp);
                }
            } else if ((0x16U == VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)))) {
                vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                    = (0x400000U | (0x3fffffU & (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                 >> 1U)));
                if ((1U & mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) {
                    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                        = ((IData)(1U) + vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp);
                }
            } else {
                vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                    = ((0x800000U | (0x7fffffU & mips_machine__DOT__core__DOT__f_core__DOT__operand_1)) 
                       * VL_POWSS_III(32,32,32, (IData)(2U), 
                                      (VL_EXTENDS_II(32,8, (IData)(vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real)) 
                                       - (IData)(0x17U)), 1,1));
            }
            vlSelf->mips_machine__DOT__core__DOT__float_addr 
                = ((0x800000U & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp)
                    ? (0xb800000U | ((0x80000000U & mips_machine__DOT__core__DOT__f_core__DOT__operand_1) 
                                     | (0x7fffffU & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp)))
                    : ((0x400000U & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp)
                        ? (0xb000000U | ((0x80000000U 
                                          & mips_machine__DOT__core__DOT__f_core__DOT__operand_1) 
                                         | (0x7ffffeU 
                                            & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                                               << 1U))))
                        : ((0x200000U & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp)
                            ? (0xa800000U | ((0x80000000U 
                                              & mips_machine__DOT__core__DOT__f_core__DOT__operand_1) 
                                             | (0x7ffffcU 
                                                & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                                                   << 2U))))
                            : ((0x100000U & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp)
                                ? (0xa000000U | ((0x80000000U 
                                                  & mips_machine__DOT__core__DOT__f_core__DOT__operand_1) 
                                                 | (0x7ffff8U 
                                                    & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                                                       << 3U))))
                                : ((0x80000U & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp)
                                    ? (0x9800000U | 
                                       ((0x80000000U 
                                         & mips_machine__DOT__core__DOT__f_core__DOT__operand_1) 
                                        | (0x7ffff0U 
                                           & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                                              << 4U))))
                                    : ((0x40000U & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp)
                                        ? (0x9000000U 
                                           | ((0x80000000U 
                                               & mips_machine__DOT__core__DOT__f_core__DOT__operand_1) 
                                              | (0x7fffe0U 
                                                 & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                                                    << 5U))))
                                        : ((0x20000U 
                                            & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp)
                                            ? (0x8800000U 
                                               | ((0x80000000U 
                                                   & mips_machine__DOT__core__DOT__f_core__DOT__operand_1) 
                                                  | (0x7fffc0U 
                                                     & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                                                        << 6U))))
                                            : ((0x10000U 
                                                & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp)
                                                ? (0x8000000U 
                                                   | ((0x80000000U 
                                                       & mips_machine__DOT__core__DOT__f_core__DOT__operand_1) 
                                                      | (0x7fff80U 
                                                         & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                                                            << 7U))))
                                                : (
                                                   (0x8000U 
                                                    & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp)
                                                    ? 
                                                   (0x7800000U 
                                                    | ((0x80000000U 
                                                        & mips_machine__DOT__core__DOT__f_core__DOT__operand_1) 
                                                       | (0x7fff00U 
                                                          & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                                                             << 8U))))
                                                    : 
                                                   ((0x4000U 
                                                     & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp)
                                                     ? 
                                                    (0x7000000U 
                                                     | ((0x80000000U 
                                                         & mips_machine__DOT__core__DOT__f_core__DOT__operand_1) 
                                                        | (0x7ffe00U 
                                                           & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                                                              << 9U))))
                                                     : 
                                                    ((0x2000U 
                                                      & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp)
                                                      ? 
                                                     (0x6800000U 
                                                      | ((0x80000000U 
                                                          & mips_machine__DOT__core__DOT__f_core__DOT__operand_1) 
                                                         | (0x7ffc00U 
                                                            & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                                                               << 0xaU))))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp)
                                                       ? 
                                                      (0x6000000U 
                                                       | ((0x80000000U 
                                                           & mips_machine__DOT__core__DOT__f_core__DOT__operand_1) 
                                                          | (0x7ff800U 
                                                             & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                                                                << 0xbU))))
                                                       : 
                                                      ((0x800U 
                                                        & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp)
                                                        ? 
                                                       (0x5800000U 
                                                        | ((0x80000000U 
                                                            & mips_machine__DOT__core__DOT__f_core__DOT__operand_1) 
                                                           | (0x7ff000U 
                                                              & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                                                                 << 0xcU))))
                                                        : 
                                                       ((0x400U 
                                                         & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp)
                                                         ? 
                                                        (0x5000000U 
                                                         | ((0x80000000U 
                                                             & mips_machine__DOT__core__DOT__f_core__DOT__operand_1) 
                                                            | (0x7fe000U 
                                                               & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                                                                  << 0xdU))))
                                                         : 
                                                        ((0x200U 
                                                          & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp)
                                                          ? 
                                                         (0x4800000U 
                                                          | ((0x80000000U 
                                                              & mips_machine__DOT__core__DOT__f_core__DOT__operand_1) 
                                                             | (0x7fc000U 
                                                                & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                                                                   << 0xeU))))
                                                          : 
                                                         ((0x100U 
                                                           & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp)
                                                           ? 
                                                          (0x4000000U 
                                                           | ((0x80000000U 
                                                               & mips_machine__DOT__core__DOT__f_core__DOT__operand_1) 
                                                              | (0x7f8000U 
                                                                 & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                                                                    << 0xfU))))
                                                           : 
                                                          ((0x80U 
                                                            & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp)
                                                            ? 
                                                           (0x3800000U 
                                                            | ((0x80000000U 
                                                                & mips_machine__DOT__core__DOT__f_core__DOT__operand_1) 
                                                               | (0x7f0000U 
                                                                  & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                                                                     << 0x10U))))
                                                            : 
                                                           ((0x40U 
                                                             & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp)
                                                             ? 
                                                            (0x3000000U 
                                                             | ((0x80000000U 
                                                                 & mips_machine__DOT__core__DOT__f_core__DOT__operand_1) 
                                                                | (0x7e0000U 
                                                                   & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                                                                      << 0x11U))))
                                                             : 
                                                            ((0x20U 
                                                              & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp)
                                                              ? 
                                                             (0x2800000U 
                                                              | ((0x80000000U 
                                                                  & mips_machine__DOT__core__DOT__f_core__DOT__operand_1) 
                                                                 | (0x7c0000U 
                                                                    & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                                                                       << 0x12U))))
                                                              : 
                                                             ((0x10U 
                                                               & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp)
                                                               ? 
                                                              (0x2000000U 
                                                               | ((0x80000000U 
                                                                   & mips_machine__DOT__core__DOT__f_core__DOT__operand_1) 
                                                                  | (0x780000U 
                                                                     & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                                                                        << 0x13U))))
                                                               : 
                                                              ((8U 
                                                                & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp)
                                                                ? 
                                                               (0x1800000U 
                                                                | ((0x80000000U 
                                                                    & mips_machine__DOT__core__DOT__f_core__DOT__operand_1) 
                                                                   | (0x700000U 
                                                                      & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                                                                         << 0x14U))))
                                                                : 
                                                               ((4U 
                                                                 & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp)
                                                                 ? 
                                                                (0x1000000U 
                                                                 | ((0x80000000U 
                                                                     & mips_machine__DOT__core__DOT__f_core__DOT__operand_1) 
                                                                    | (0x600000U 
                                                                       & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                                                                          << 0x15U))))
                                                                 : 
                                                                ((4U 
                                                                  & vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp)
                                                                  ? 
                                                                 (0x800000U 
                                                                  | ((0x80000000U 
                                                                      & mips_machine__DOT__core__DOT__f_core__DOT__operand_1) 
                                                                     | (0x400000U 
                                                                        & (vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp 
                                                                           << 0x16U))))
                                                                  : 
                                                                 (0x80000000U 
                                                                  & mips_machine__DOT__core__DOT__f_core__DOT__operand_1))))))))))))))))))))))));
            vlSelf->mips_machine__DOT__core__DOT__float_addr 
                = ((IData)(0x3f800000U) + vlSelf->mips_machine__DOT__core__DOT__float_addr);
        }
    } else {
        vlSelf->mips_machine__DOT__core__DOT__float_addr 
            = ((4U & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu_control))
                ? ((2U & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu_control))
                    ? ((1U & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu_control))
                        ? ((mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                            >> 0x1fU) ? (0x7fffffffU 
                                         & mips_machine__DOT__core__DOT__f_core__DOT__operand_1)
                            : ((mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                >> 0x1fU) ? (0x80000000U 
                                             | (0x7fffffffU 
                                                & mips_machine__DOT__core__DOT__f_core__DOT__operand_1))
                                : (0x80000000U | (0x7fffffffU 
                                                  & mips_machine__DOT__core__DOT__f_core__DOT__operand_1))))
                        : (((mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                             >> 0x1fU) > (mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                          >> 0x1fU))
                            ? 1U : (((mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                      >> 0x1fU) < (mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                                   >> 0x1fU))
                                     ? 0U : ((mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                              >> 0x1fU)
                                              ? (((0xffU 
                                                   & (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                      >> 0x17U)) 
                                                  > 
                                                  (0xffU 
                                                   & (mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                                      >> 0x17U)))
                                                  ? 1U
                                                  : 
                                                 (((0xffU 
                                                    & (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                       >> 0x17U)) 
                                                   < 
                                                   (0xffU 
                                                    & (mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                                       >> 0x17U)))
                                                   ? 0U
                                                   : 
                                                  (((0x7fffffU 
                                                     & mips_machine__DOT__core__DOT__f_core__DOT__operand_1) 
                                                    > 
                                                    (0x7fffffU 
                                                     & mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out))
                                                    ? 1U
                                                    : 0U)))
                                              : (((0xffU 
                                                   & (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                      >> 0x17U)) 
                                                  < 
                                                  (0xffU 
                                                   & (mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                                      >> 0x17U)))
                                                  ? 1U
                                                  : 
                                                 (((0xffU 
                                                    & (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                       >> 0x17U)) 
                                                   > 
                                                   (0xffU 
                                                    & (mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                                       >> 0x17U)))
                                                   ? 0U
                                                   : 
                                                  (((0x7fffffU 
                                                     & mips_machine__DOT__core__DOT__f_core__DOT__operand_1) 
                                                    < 
                                                    (0x7fffffU 
                                                     & mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out))
                                                    ? 1U
                                                    : 0U)))))))
                    : ((1U & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu_control))
                        ? (((mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                             >> 0x1fU) > (mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                          >> 0x1fU))
                            ? 1U : (((mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                      >> 0x1fU) < (mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                                   >> 0x1fU))
                                     ? 0U : ((mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                              >> 0x1fU)
                                              ? (((0xffU 
                                                   & (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                      >> 0x17U)) 
                                                  > 
                                                  (0xffU 
                                                   & (mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                                      >> 0x17U)))
                                                  ? 1U
                                                  : 
                                                 (((0xffU 
                                                    & (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                       >> 0x17U)) 
                                                   < 
                                                   (0xffU 
                                                    & (mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                                       >> 0x17U)))
                                                   ? 0U
                                                   : 
                                                  (((0x7fffffU 
                                                     & mips_machine__DOT__core__DOT__f_core__DOT__operand_1) 
                                                    > 
                                                    (0x7fffffU 
                                                     & mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out))
                                                    ? 1U
                                                    : 
                                                   (((0x7fffffU 
                                                      & mips_machine__DOT__core__DOT__f_core__DOT__operand_1) 
                                                     < 
                                                     (0x7fffffU 
                                                      & mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out))
                                                     ? 0U
                                                     : 1U))))
                                              : (((0xffU 
                                                   & (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                      >> 0x17U)) 
                                                  < 
                                                  (0xffU 
                                                   & (mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                                      >> 0x17U)))
                                                  ? 1U
                                                  : 
                                                 (((0xffU 
                                                    & (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                                       >> 0x17U)) 
                                                   > 
                                                   (0xffU 
                                                    & (mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                                       >> 0x17U)))
                                                   ? 0U
                                                   : 
                                                  (((0x7fffffU 
                                                     & mips_machine__DOT__core__DOT__f_core__DOT__operand_1) 
                                                    < 
                                                    (0x7fffffU 
                                                     & mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out))
                                                    ? 1U
                                                    : 
                                                   (((0x7fffffU 
                                                      & mips_machine__DOT__core__DOT__f_core__DOT__operand_1) 
                                                     > 
                                                     (0x7fffffU 
                                                      & mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out))
                                                     ? 0U
                                                     : 1U)))))))
                        : (((((mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                               >> 0x1fU) == (mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                             >> 0x1fU)) 
                             & ((0xffU & (mips_machine__DOT__core__DOT__f_core__DOT__operand_1 
                                          >> 0x17U)) 
                                == (0xffU & (mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out 
                                             >> 0x17U)))) 
                            & ((0x7fffffU & mips_machine__DOT__core__DOT__f_core__DOT__operand_1) 
                               == (0x7fffffU & mips_machine__DOT__core__DOT__f_core__DOT__alu_src_mux_out)))
                            ? 1U : 0U))) : ((2U & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu_control))
                                             ? ((1U 
                                                 & (IData)(mips_machine__DOT__core__DOT__f_core__DOT__alu_control))
                                                 ? mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__div_result
                                                 : mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__mul_result)
                                             : mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__add_result));
    }
    vlSelf->mips_machine__DOT__core__DOT__final_cache_addr 
        = ((IData)(vlSelf->mips_machine__DOT__core__DOT__is_float)
            ? vlSelf->mips_machine__DOT__core__DOT__float_addr
            : vlSelf->mips_machine__DOT__core__DOT__MEM_alu_out);
}

VL_ATTR_COLD void Vmips_machine___024root___eval_initial(Vmips_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_machine___024root___eval_initial\n"); );
    // Body
    Vmips_machine___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_b = vlSelf->rst_b;
}

VL_ATTR_COLD void Vmips_machine___024root___eval_settle(Vmips_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_machine___024root___eval_settle\n"); );
    // Body
    Vmips_machine___024root___settle__TOP__5(vlSelf);
}

VL_ATTR_COLD void Vmips_machine___024root___final(Vmips_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_machine___024root___final\n"); );
}

VL_ATTR_COLD void Vmips_machine___024root___ctor_var_reset(Vmips_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips_machine___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_b = VL_RAND_RESET_I(1);
    vlSelf->mips_machine__DOT__halted = VL_RAND_RESET_I(1);
    vlSelf->mips_machine__DOT__mem_addr = VL_RAND_RESET_I(32);
    vlSelf->mips_machine__DOT__inst = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_machine__DOT__instruction_parts[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_machine__DOT__mem_data_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_machine__DOT__mem_data_out[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->mips_machine__DOT__mem_write_en = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_machine__DOT____Vcellout__core__mem_data_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_machine__DOT____Vcellinp__core__mem_data_out[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_machine__DOT__mem_data_out_d1[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_machine__DOT__mem_data_out_d2[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_machine__DOT__mem_data_out_d3[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_machine__DOT__mem_data_out_d4[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_machine__DOT__mem_data_in_d1[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_machine__DOT__mem_data_in_d2[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_machine__DOT__mem_data_in_d3[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_machine__DOT__mem_data_in_d4[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->mips_machine__DOT__mem_we_d1 = VL_RAND_RESET_I(1);
    vlSelf->mips_machine__DOT__mem_we_d2 = VL_RAND_RESET_I(1);
    vlSelf->mips_machine__DOT__mem_we_d3 = VL_RAND_RESET_I(1);
    vlSelf->mips_machine__DOT__mem_we_d4 = VL_RAND_RESET_I(1);
    vlSelf->mips_machine__DOT____Vcellout__delay_out1__BRA__3__KET____q = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT____Vcellout__delay_out1__BRA__2__KET____q = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT____Vcellout__delay_out1__BRA__1__KET____q = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT____Vcellout__delay_out1__BRA__0__KET____q = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT____Vcellout__delay_out2__BRA__3__KET____q = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT____Vcellout__delay_out2__BRA__2__KET____q = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT____Vcellout__delay_out2__BRA__1__KET____q = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT____Vcellout__delay_out2__BRA__0__KET____q = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT____Vcellout__delay_out3__BRA__3__KET____q = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT____Vcellout__delay_out3__BRA__2__KET____q = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT____Vcellout__delay_out3__BRA__1__KET____q = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT____Vcellout__delay_out3__BRA__0__KET____q = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT____Vcellout__delay_out4__BRA__3__KET____q = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT____Vcellout__delay_out4__BRA__2__KET____q = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT____Vcellout__delay_out4__BRA__1__KET____q = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT____Vcellout__delay_out4__BRA__0__KET____q = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT____Vcellout__delay_in1__BRA__3__KET____q = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT____Vcellout__delay_in1__BRA__2__KET____q = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT____Vcellout__delay_in1__BRA__1__KET____q = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT____Vcellout__delay_in1__BRA__0__KET____q = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT____Vcellout__delay_in2__BRA__3__KET____q = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT____Vcellout__delay_in2__BRA__2__KET____q = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT____Vcellout__delay_in2__BRA__1__KET____q = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT____Vcellout__delay_in2__BRA__0__KET____q = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT____Vcellout__delay_in3__BRA__3__KET____q = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT____Vcellout__delay_in3__BRA__2__KET____q = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT____Vcellout__delay_in3__BRA__1__KET____q = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT____Vcellout__delay_in3__BRA__0__KET____q = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT____Vcellout__delay_in4__BRA__3__KET____q = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT____Vcellout__delay_in4__BRA__2__KET____q = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT____Vcellout__delay_in4__BRA__1__KET____q = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT____Vcellout__delay_in4__BRA__0__KET____q = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_machine__DOT____Vcellout__instruction_memory__data_out[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_machine__DOT____Vcellinp__data_memory__data_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_machine__DOT____Vcellout__data_memory__data_out[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->mips_machine__DOT__core__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->mips_machine__DOT__core__DOT__ID_pc = VL_RAND_RESET_I(32);
    vlSelf->mips_machine__DOT__core__DOT__EX_pc = VL_RAND_RESET_I(32);
    vlSelf->mips_machine__DOT__core__DOT__ID_inst = VL_RAND_RESET_I(32);
    vlSelf->mips_machine__DOT__core__DOT__EX_inst = VL_RAND_RESET_I(32);
    vlSelf->mips_machine__DOT__core__DOT__alu_out = VL_RAND_RESET_I(32);
    vlSelf->mips_machine__DOT__core__DOT__MEM_alu_out = VL_RAND_RESET_I(32);
    vlSelf->mips_machine__DOT__core__DOT__WB_alu_out = VL_RAND_RESET_I(32);
    vlSelf->mips_machine__DOT__core__DOT__EX_operand_1 = VL_RAND_RESET_I(32);
    vlSelf->mips_machine__DOT__core__DOT__EX_operand_2 = VL_RAND_RESET_I(32);
    vlSelf->mips_machine__DOT__core__DOT__MEM_operand2 = VL_RAND_RESET_I(32);
    vlSelf->mips_machine__DOT__core__DOT__EX_sign_extended = VL_RAND_RESET_I(32);
    vlSelf->mips_machine__DOT__core__DOT__sign_extended = VL_RAND_RESET_I(32);
    vlSelf->mips_machine__DOT__core__DOT__aluctrl = VL_RAND_RESET_I(5);
    vlSelf->mips_machine__DOT__core__DOT__EX_aluctrl = VL_RAND_RESET_I(5);
    vlSelf->mips_machine__DOT__core__DOT__EX_destReg = VL_RAND_RESET_I(5);
    vlSelf->mips_machine__DOT__core__DOT__MEM_destReg = VL_RAND_RESET_I(5);
    vlSelf->mips_machine__DOT__core__DOT__WB_destReg = VL_RAND_RESET_I(5);
    vlSelf->mips_machine__DOT__core__DOT__regWrite = VL_RAND_RESET_I(1);
    vlSelf->mips_machine__DOT__core__DOT__EX_regWrite = VL_RAND_RESET_I(1);
    vlSelf->mips_machine__DOT__core__DOT__MEM_regWrite = VL_RAND_RESET_I(1);
    vlSelf->mips_machine__DOT__core__DOT__WB_regWrite = VL_RAND_RESET_I(1);
    vlSelf->mips_machine__DOT__core__DOT__shift = VL_RAND_RESET_I(1);
    vlSelf->mips_machine__DOT__core__DOT__alu_src = VL_RAND_RESET_I(1);
    vlSelf->mips_machine__DOT__core__DOT__is_byte = VL_RAND_RESET_I(1);
    vlSelf->mips_machine__DOT__core__DOT__EX_MemWrite = VL_RAND_RESET_I(1);
    vlSelf->mips_machine__DOT__core__DOT__MEM_MemWrite = VL_RAND_RESET_I(1);
    vlSelf->mips_machine__DOT__core__DOT__EX_memtoreg = VL_RAND_RESET_I(1);
    vlSelf->mips_machine__DOT__core__DOT__MEM_memtoreg = VL_RAND_RESET_I(1);
    vlSelf->mips_machine__DOT__core__DOT__WB_memtoreg = VL_RAND_RESET_I(1);
    vlSelf->mips_machine__DOT__core__DOT__EX_branch = VL_RAND_RESET_I(1);
    vlSelf->mips_machine__DOT__core__DOT__EX_jump = VL_RAND_RESET_I(1);
    vlSelf->mips_machine__DOT__core__DOT__EX_shift = VL_RAND_RESET_I(1);
    vlSelf->mips_machine__DOT__core__DOT__EX_alu_src = VL_RAND_RESET_I(1);
    vlSelf->mips_machine__DOT__core__DOT__EX_is_byte = VL_RAND_RESET_I(1);
    vlSelf->mips_machine__DOT__core__DOT__MEM_is_byte = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_machine__DOT__core__DOT__in_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_machine__DOT__core__DOT__data_out[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_machine__DOT__core__DOT__WB_data_out[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->mips_machine__DOT__core__DOT__cache_ready = VL_RAND_RESET_I(1);
    vlSelf->mips_machine__DOT__core__DOT__is_float = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_machine__DOT__core__DOT__in_data_float[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_machine__DOT__core__DOT__in_data_final[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->mips_machine__DOT__core__DOT__float_addr = VL_RAND_RESET_I(32);
    vlSelf->mips_machine__DOT__core__DOT__final_cache_addr = VL_RAND_RESET_I(32);
    vlSelf->mips_machine__DOT__core__DOT__float_inst = VL_RAND_RESET_I(32);
    vlSelf->mips_machine__DOT__core__DOT__float_memtoreg = VL_RAND_RESET_I(1);
    vlSelf->mips_machine__DOT__core__DOT__final_memtoreg = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_machine__DOT__core__DOT____Vcellout__f_core__in_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_machine__DOT__core__DOT____Vcellinp__f_core__data_out[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_machine__DOT__core__DOT____Vcellout__MEM__mem_data_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_machine__DOT__core__DOT____Vcellout__MEM__data_out[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_machine__DOT__core__DOT____Vcellinp__MEM__in_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_machine__DOT__core__DOT____Vcellinp__MEM__mem_data_out[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_machine__DOT__core__DOT____Vcellout__MEMtoWB__data_out_WB[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_machine__DOT__core__DOT____Vcellinp__MEMtoWB__data_out[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_machine__DOT__core__DOT____Vcellinp__WB__data_from_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->mips_machine__DOT__core__DOT__IF__DOT__next_pc_mux_out = VL_RAND_RESET_I(32);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__rd = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp = VL_RAND_RESET_I(32);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__luiTemp = VL_RAND_RESET_I(16);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__reg2_data_temp = VL_RAND_RESET_I(32);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__mantissa_A = VL_RAND_RESET_I(24);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__mantissa_B = VL_RAND_RESET_I(24);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__sign_A = VL_RAND_RESET_I(1);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__sign_B = VL_RAND_RESET_I(1);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__exp_A = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__exp_B = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__exp = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier1__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier1__DOT__exp = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier2__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier2__DOT__exp = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__exp = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__exp = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier4__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier4__DOT__exp = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier6__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier6__DOT__exp = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__exp = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__mantissa = VL_RAND_RESET_I(23);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__exp = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__mantissa_A = VL_RAND_RESET_I(24);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__mantissa_B = VL_RAND_RESET_I(24);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__sign_A = VL_RAND_RESET_I(1);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__sign_B = VL_RAND_RESET_I(1);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__exp_A = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__exp_B = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__mantissa_A = VL_RAND_RESET_I(24);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__mantissa_B = VL_RAND_RESET_I(24);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__sign_A = VL_RAND_RESET_I(1);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__sign_B = VL_RAND_RESET_I(1);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__exp_A = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__exp_B = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__mantissa_A = VL_RAND_RESET_I(24);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__mantissa_B = VL_RAND_RESET_I(24);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__sign_A = VL_RAND_RESET_I(1);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__sign_B = VL_RAND_RESET_I(1);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__exp_A = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__exp_B = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__mantissa_A = VL_RAND_RESET_I(24);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__mantissa_B = VL_RAND_RESET_I(24);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__sign_A = VL_RAND_RESET_I(1);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__sign_B = VL_RAND_RESET_I(1);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__exp_A = VL_RAND_RESET_I(8);
    vlSelf->mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__exp_B = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_machine__DOT__core__DOT__MEM__DOT____Vcellout__cache_core__mem_data_out[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_machine__DOT__core__DOT__MEM__DOT____Vcellout__cache_core__data_out[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_machine__DOT__core__DOT__MEM__DOT____Vcellinp__cache_core__in_data[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mips_machine__DOT__core__DOT__MEM__DOT____Vcellinp__cache_core__in_from_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<2048; ++__Vi0) {
        vlSelf->mips_machine__DOT__core__DOT__MEM__DOT__cache_core__DOT__cache[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2048; ++__Vi0) {
        vlSelf->mips_machine__DOT__core__DOT__MEM__DOT__cache_core__DOT__tag_array[__Vi0] = VL_RAND_RESET_I(19);
    }
    VL_RAND_RESET_W(2048, vlSelf->mips_machine__DOT__core__DOT__MEM__DOT__cache_core__DOT__valid_array);
    VL_RAND_RESET_W(2048, vlSelf->mips_machine__DOT__core__DOT__MEM__DOT__cache_core__DOT__dirty_array);
    vlSelf->mips_machine__DOT__core__DOT__MEM__DOT__cache_core__DOT__clock_counter = VL_RAND_RESET_I(4);
    vlSelf->mips_machine__DOT__core__DOT__MEM__DOT__cache_core__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4097; ++__Vi0) {
        vlSelf->mips_machine__DOT__instruction_memory__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<65536; ++__Vi0) {
        vlSelf->mips_machine__DOT__data_memory__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->mips_machine__DOT__data_memory__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
}
