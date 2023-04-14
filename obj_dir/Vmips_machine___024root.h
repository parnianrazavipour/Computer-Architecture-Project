// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmips_machine.h for the primary calling header

#ifndef VERILATED_VMIPS_MACHINE___024ROOT_H_
#define VERILATED_VMIPS_MACHINE___024ROOT_H_  // guard

#include "verilated.h"

class Vmips_machine__Syms;
VL_MODULE(Vmips_machine___024root) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_b,0,0);
        CData/*0:0*/ mips_machine__DOT__halted;
        CData/*0:0*/ mips_machine__DOT__mem_write_en;
        CData/*0:0*/ mips_machine__DOT__mem_we_d1;
        CData/*0:0*/ mips_machine__DOT__mem_we_d2;
        CData/*0:0*/ mips_machine__DOT__mem_we_d3;
        CData/*0:0*/ mips_machine__DOT__mem_we_d4;
        CData/*7:0*/ mips_machine__DOT____Vcellout__delay_out1__BRA__3__KET____q;
        CData/*7:0*/ mips_machine__DOT____Vcellout__delay_out1__BRA__2__KET____q;
        CData/*7:0*/ mips_machine__DOT____Vcellout__delay_out1__BRA__1__KET____q;
        CData/*7:0*/ mips_machine__DOT____Vcellout__delay_out1__BRA__0__KET____q;
        CData/*7:0*/ mips_machine__DOT____Vcellout__delay_out2__BRA__3__KET____q;
        CData/*7:0*/ mips_machine__DOT____Vcellout__delay_out2__BRA__2__KET____q;
        CData/*7:0*/ mips_machine__DOT____Vcellout__delay_out2__BRA__1__KET____q;
        CData/*7:0*/ mips_machine__DOT____Vcellout__delay_out2__BRA__0__KET____q;
        CData/*7:0*/ mips_machine__DOT____Vcellout__delay_out3__BRA__3__KET____q;
        CData/*7:0*/ mips_machine__DOT____Vcellout__delay_out3__BRA__2__KET____q;
        CData/*7:0*/ mips_machine__DOT____Vcellout__delay_out3__BRA__1__KET____q;
        CData/*7:0*/ mips_machine__DOT____Vcellout__delay_out3__BRA__0__KET____q;
        CData/*7:0*/ mips_machine__DOT____Vcellout__delay_out4__BRA__3__KET____q;
        CData/*7:0*/ mips_machine__DOT____Vcellout__delay_out4__BRA__2__KET____q;
        CData/*7:0*/ mips_machine__DOT____Vcellout__delay_out4__BRA__1__KET____q;
        CData/*7:0*/ mips_machine__DOT____Vcellout__delay_out4__BRA__0__KET____q;
        CData/*7:0*/ mips_machine__DOT____Vcellout__delay_in1__BRA__3__KET____q;
        CData/*7:0*/ mips_machine__DOT____Vcellout__delay_in1__BRA__2__KET____q;
        CData/*7:0*/ mips_machine__DOT____Vcellout__delay_in1__BRA__1__KET____q;
        CData/*7:0*/ mips_machine__DOT____Vcellout__delay_in1__BRA__0__KET____q;
        CData/*7:0*/ mips_machine__DOT____Vcellout__delay_in2__BRA__3__KET____q;
        CData/*7:0*/ mips_machine__DOT____Vcellout__delay_in2__BRA__2__KET____q;
        CData/*7:0*/ mips_machine__DOT____Vcellout__delay_in2__BRA__1__KET____q;
        CData/*7:0*/ mips_machine__DOT____Vcellout__delay_in2__BRA__0__KET____q;
        CData/*7:0*/ mips_machine__DOT____Vcellout__delay_in3__BRA__3__KET____q;
        CData/*7:0*/ mips_machine__DOT____Vcellout__delay_in3__BRA__2__KET____q;
        CData/*7:0*/ mips_machine__DOT____Vcellout__delay_in3__BRA__1__KET____q;
        CData/*7:0*/ mips_machine__DOT____Vcellout__delay_in3__BRA__0__KET____q;
        CData/*7:0*/ mips_machine__DOT____Vcellout__delay_in4__BRA__3__KET____q;
        CData/*7:0*/ mips_machine__DOT____Vcellout__delay_in4__BRA__2__KET____q;
        CData/*7:0*/ mips_machine__DOT____Vcellout__delay_in4__BRA__1__KET____q;
        CData/*7:0*/ mips_machine__DOT____Vcellout__delay_in4__BRA__0__KET____q;
        CData/*4:0*/ mips_machine__DOT__core__DOT__aluctrl;
        CData/*4:0*/ mips_machine__DOT__core__DOT__EX_aluctrl;
        CData/*4:0*/ mips_machine__DOT__core__DOT__EX_destReg;
        CData/*4:0*/ mips_machine__DOT__core__DOT__MEM_destReg;
        CData/*4:0*/ mips_machine__DOT__core__DOT__WB_destReg;
        CData/*0:0*/ mips_machine__DOT__core__DOT__regWrite;
        CData/*0:0*/ mips_machine__DOT__core__DOT__EX_regWrite;
        CData/*0:0*/ mips_machine__DOT__core__DOT__MEM_regWrite;
        CData/*0:0*/ mips_machine__DOT__core__DOT__WB_regWrite;
        CData/*0:0*/ mips_machine__DOT__core__DOT__shift;
        CData/*0:0*/ mips_machine__DOT__core__DOT__alu_src;
        CData/*0:0*/ mips_machine__DOT__core__DOT__is_byte;
        CData/*0:0*/ mips_machine__DOT__core__DOT__EX_MemWrite;
        CData/*0:0*/ mips_machine__DOT__core__DOT__MEM_MemWrite;
        CData/*0:0*/ mips_machine__DOT__core__DOT__EX_memtoreg;
        CData/*0:0*/ mips_machine__DOT__core__DOT__MEM_memtoreg;
        CData/*0:0*/ mips_machine__DOT__core__DOT__WB_memtoreg;
        CData/*0:0*/ mips_machine__DOT__core__DOT__EX_branch;
        CData/*0:0*/ mips_machine__DOT__core__DOT__EX_jump;
        CData/*0:0*/ mips_machine__DOT__core__DOT__EX_shift;
        CData/*0:0*/ mips_machine__DOT__core__DOT__EX_alu_src;
        CData/*0:0*/ mips_machine__DOT__core__DOT__EX_is_byte;
        CData/*0:0*/ mips_machine__DOT__core__DOT__MEM_is_byte;
        CData/*0:0*/ mips_machine__DOT__core__DOT__cache_ready;
    };
    struct {
        CData/*0:0*/ mips_machine__DOT__core__DOT__is_float;
        CData/*0:0*/ mips_machine__DOT__core__DOT__float_memtoreg;
        CData/*0:0*/ mips_machine__DOT__core__DOT__final_memtoreg;
        CData/*4:0*/ mips_machine__DOT__core__DOT__f_core__DOT__rd;
        CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__exp_1_real;
        CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__sign_A;
        CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__sign_B;
        CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__exp_A;
        CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__exp_B;
        CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__exp;
        CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier1__DOT__exp;
        CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier2__DOT__exp;
        CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__exp;
        CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__exp;
        CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier4__DOT__exp;
        CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier6__DOT__exp;
        CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__exp;
        CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__exp;
        CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__sign_A;
        CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__sign_B;
        CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__exp_A;
        CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__exp_B;
        CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__sign_A;
        CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__sign_B;
        CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__exp_A;
        CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__exp_B;
        CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__sign_A;
        CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__sign_B;
        CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__exp_A;
        CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__exp_B;
        CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__sign_A;
        CData/*0:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__sign_B;
        CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__exp_A;
        CData/*7:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__exp_B;
        CData/*3:0*/ mips_machine__DOT__core__DOT__MEM__DOT__cache_core__DOT__clock_counter;
        CData/*0:0*/ __Vclklast__TOP__clk;
        CData/*0:0*/ __Vclklast__TOP__rst_b;
        SData/*15:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__luiTemp;
        IData/*31:0*/ mips_machine__DOT__mem_addr;
        IData/*31:0*/ mips_machine__DOT__inst;
        IData/*31:0*/ mips_machine__DOT__core__DOT__pc;
        IData/*31:0*/ mips_machine__DOT__core__DOT__ID_pc;
        IData/*31:0*/ mips_machine__DOT__core__DOT__EX_pc;
        IData/*31:0*/ mips_machine__DOT__core__DOT__ID_inst;
        IData/*31:0*/ mips_machine__DOT__core__DOT__EX_inst;
        IData/*31:0*/ mips_machine__DOT__core__DOT__alu_out;
        IData/*31:0*/ mips_machine__DOT__core__DOT__MEM_alu_out;
        IData/*31:0*/ mips_machine__DOT__core__DOT__WB_alu_out;
        IData/*31:0*/ mips_machine__DOT__core__DOT__EX_operand_1;
        IData/*31:0*/ mips_machine__DOT__core__DOT__EX_operand_2;
        IData/*31:0*/ mips_machine__DOT__core__DOT__MEM_operand2;
        IData/*31:0*/ mips_machine__DOT__core__DOT__EX_sign_extended;
        IData/*31:0*/ mips_machine__DOT__core__DOT__sign_extended;
        IData/*31:0*/ mips_machine__DOT__core__DOT__float_addr;
        IData/*31:0*/ mips_machine__DOT__core__DOT__final_cache_addr;
        IData/*31:0*/ mips_machine__DOT__core__DOT__float_inst;
        IData/*31:0*/ mips_machine__DOT__core__DOT__IF__DOT__next_pc_mux_out;
        IData/*31:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__result_temp;
        IData/*31:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__reg2_data_temp;
        IData/*23:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__mantissa_A;
        IData/*23:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__DOT__mantissa_B;
        IData/*22:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__muler__DOT__mantissa;
        IData/*22:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier1__DOT__mantissa;
        IData/*22:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier2__DOT__mantissa;
    };
    struct {
        IData/*22:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier3__DOT__mantissa;
        IData/*22:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier5__DOT__mantissa;
        IData/*22:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier4__DOT__mantissa;
        IData/*22:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier6__DOT__mantissa;
        IData/*22:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier7__DOT__mantissa;
        IData/*22:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__multiplier8__DOT__mantissa;
        IData/*23:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__mantissa_A;
        IData/*23:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder1__DOT__mantissa_B;
        IData/*23:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__mantissa_A;
        IData/*23:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder2__DOT__mantissa_B;
        IData/*23:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__mantissa_A;
        IData/*23:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder3__DOT__mantissa_B;
        IData/*23:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__mantissa_A;
        IData/*23:0*/ mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__diver__DOT__adder4__DOT__mantissa_B;
        VlWide<64>/*2047:0*/ mips_machine__DOT__core__DOT__MEM__DOT__cache_core__DOT__valid_array;
        VlWide<64>/*2047:0*/ mips_machine__DOT__core__DOT__MEM__DOT__cache_core__DOT__dirty_array;
        IData/*31:0*/ mips_machine__DOT__core__DOT__MEM__DOT__cache_core__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ mips_machine__DOT__data_memory__DOT__unnamedblk1__DOT__i;
        VlUnpacked<CData/*7:0*/, 4> mips_machine__DOT__instruction_parts;
        VlUnpacked<CData/*7:0*/, 4> mips_machine__DOT__mem_data_in;
        VlUnpacked<CData/*7:0*/, 4> mips_machine__DOT__mem_data_out;
        VlUnpacked<CData/*7:0*/, 4> mips_machine__DOT____Vcellout__core__mem_data_in;
        VlUnpacked<CData/*7:0*/, 4> mips_machine__DOT____Vcellinp__core__mem_data_out;
        VlUnpacked<CData/*7:0*/, 4> mips_machine__DOT__mem_data_out_d1;
        VlUnpacked<CData/*7:0*/, 4> mips_machine__DOT__mem_data_out_d2;
        VlUnpacked<CData/*7:0*/, 4> mips_machine__DOT__mem_data_out_d3;
        VlUnpacked<CData/*7:0*/, 4> mips_machine__DOT__mem_data_out_d4;
        VlUnpacked<CData/*7:0*/, 4> mips_machine__DOT__mem_data_in_d1;
        VlUnpacked<CData/*7:0*/, 4> mips_machine__DOT__mem_data_in_d2;
        VlUnpacked<CData/*7:0*/, 4> mips_machine__DOT__mem_data_in_d3;
        VlUnpacked<CData/*7:0*/, 4> mips_machine__DOT__mem_data_in_d4;
        VlUnpacked<CData/*7:0*/, 4> mips_machine__DOT____Vcellout__instruction_memory__data_out;
        VlUnpacked<CData/*7:0*/, 4> mips_machine__DOT____Vcellinp__data_memory__data_in;
        VlUnpacked<CData/*7:0*/, 4> mips_machine__DOT____Vcellout__data_memory__data_out;
        VlUnpacked<CData/*7:0*/, 4> mips_machine__DOT__core__DOT__in_data;
        VlUnpacked<CData/*7:0*/, 4> mips_machine__DOT__core__DOT__data_out;
        VlUnpacked<CData/*7:0*/, 4> mips_machine__DOT__core__DOT__WB_data_out;
        VlUnpacked<CData/*7:0*/, 4> mips_machine__DOT__core__DOT__in_data_float;
        VlUnpacked<CData/*7:0*/, 4> mips_machine__DOT__core__DOT__in_data_final;
        VlUnpacked<CData/*7:0*/, 4> mips_machine__DOT__core__DOT____Vcellout__f_core__in_data;
        VlUnpacked<CData/*7:0*/, 4> mips_machine__DOT__core__DOT____Vcellinp__f_core__data_out;
        VlUnpacked<CData/*7:0*/, 4> mips_machine__DOT__core__DOT____Vcellout__MEM__mem_data_in;
        VlUnpacked<CData/*7:0*/, 4> mips_machine__DOT__core__DOT____Vcellout__MEM__data_out;
        VlUnpacked<CData/*7:0*/, 4> mips_machine__DOT__core__DOT____Vcellinp__MEM__in_data;
        VlUnpacked<CData/*7:0*/, 4> mips_machine__DOT__core__DOT____Vcellinp__MEM__mem_data_out;
        VlUnpacked<CData/*7:0*/, 4> mips_machine__DOT__core__DOT____Vcellout__MEMtoWB__data_out_WB;
        VlUnpacked<CData/*7:0*/, 4> mips_machine__DOT__core__DOT____Vcellinp__MEMtoWB__data_out;
        VlUnpacked<CData/*7:0*/, 4> mips_machine__DOT__core__DOT____Vcellinp__WB__data_from_mem;
        VlUnpacked<IData/*31:0*/, 32> mips_machine__DOT__core__DOT__f_core__DOT__RegisterFile__DOT__data;
        VlUnpacked<IData/*31:0*/, 32> mips_machine__DOT__core__DOT__ID__DOT__RegisterFile__DOT__data;
        VlUnpacked<CData/*7:0*/, 4> mips_machine__DOT__core__DOT__MEM__DOT____Vcellout__cache_core__mem_data_out;
        VlUnpacked<CData/*7:0*/, 4> mips_machine__DOT__core__DOT__MEM__DOT____Vcellout__cache_core__data_out;
        VlUnpacked<CData/*7:0*/, 4> mips_machine__DOT__core__DOT__MEM__DOT____Vcellinp__cache_core__in_data;
        VlUnpacked<CData/*7:0*/, 4> mips_machine__DOT__core__DOT__MEM__DOT____Vcellinp__cache_core__in_from_mem;
        VlUnpacked<IData/*31:0*/, 2048> mips_machine__DOT__core__DOT__MEM__DOT__cache_core__DOT__cache;
        VlUnpacked<IData/*18:0*/, 2048> mips_machine__DOT__core__DOT__MEM__DOT__cache_core__DOT__tag_array;
        VlUnpacked<CData/*7:0*/, 4097> mips_machine__DOT__instruction_memory__DOT__mem;
        VlUnpacked<CData/*7:0*/, 65536> mips_machine__DOT__data_memory__DOT__mem;
    };

    // INTERNAL VARIABLES
    Vmips_machine__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vmips_machine___024root(const char* name);
    ~Vmips_machine___024root();
    VL_UNCOPYABLE(Vmips_machine___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vmips_machine__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
