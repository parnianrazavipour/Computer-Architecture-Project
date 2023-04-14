// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmips_machine.h for the primary calling header

#ifndef VERILATED_VMIPS_MACHINE_ADD_SUB_MUL_DIV_H_
#define VERILATED_VMIPS_MACHINE_ADD_SUB_MUL_DIV_H_  // guard

#include "verilated.h"

class Vmips_machine__Syms;
class Vmips_machine_Mux_24Bit;

VL_MODULE(Vmips_machine_add_sub_mul_div) {
  public:
    // CELLS
    Vmips_machine_Mux_24Bit* __PVT__AS__DOT__M04;
    Vmips_machine_Mux_24Bit* __PVT__AS__DOT__M05;
    Vmips_machine_Mux_24Bit* __PVT__M__DOT__M02;
    Vmips_machine_Mux_24Bit* __PVT__D__DOT__M02;
    Vmips_machine_Mux_24Bit* __PVT__M01__DOT__M01;
    Vmips_machine_Mux_24Bit* __PVT__M02__DOT__M01;
    Vmips_machine_Mux_24Bit* __PVT__M09__DOT__M01;
    Vmips_machine_Mux_24Bit* __PVT__M010__DOT__M01;
    Vmips_machine_Mux_24Bit* __PVT__M011__DOT__M01;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(oper,1,0);
        VL_OUT8(Overflow,0,0);
        VL_OUT8(Underflow,0,0);
        VL_OUT8(Exception,0,0);
        CData/*0:0*/ __PVT__AS__DOT__real_oper;
        CData/*0:0*/ __PVT__AS__DOT__M_carry;
        CData/*7:0*/ __PVT__AS__DOT__One_Added_E;
        CData/*7:0*/ __PVT__AS__DOT__new_E;
        CData/*7:0*/ __PVT__AS__DOT__exp_diff;
        CData/*7:0*/ __PVT__AS__DOT__E;
        CData/*7:0*/ __PVT__AS__DOT__complemented_E2;
        CData/*7:0*/ __PVT__AS__DOT__complemented_shift_E;
        CData/*0:0*/ AS__DOT____Vcellinp__M05__sl;
        CData/*3:0*/ AS__DOT__ADD01__DOT____Vcellout__ADD01__sum;
        CData/*3:0*/ AS__DOT__ADD01__DOT____Vcellout__ADD02__sum;
        CData/*7:0*/ __PVT__AS__DOT__C023__DOT__outtemp;
        CData/*3:0*/ AS__DOT__C023__DOT__ADD01__DOT____Vcellout__ADD01__sum;
        CData/*3:0*/ AS__DOT__C023__DOT__ADD01__DOT____Vcellout__ADD02__sum;
        CData/*7:0*/ AS__DOT__C02__DOT____Vcellout__C01__out;
        CData/*7:0*/ AS__DOT__C02__DOT____Vcellout__C02__out;
        CData/*7:0*/ AS__DOT__C02__DOT____Vcellout__C03__out;
        CData/*3:0*/ AS__DOT__ADD02__DOT__ADD01__DOT____Vcellout__ADD01__sum;
        CData/*3:0*/ AS__DOT__ADD02__DOT__ADD01__DOT____Vcellout__ADD02__sum;
        CData/*3:0*/ AS__DOT__ADD02__DOT__ADD02__DOT____Vcellout__ADD01__sum;
        CData/*3:0*/ AS__DOT__ADD02__DOT__ADD02__DOT____Vcellout__ADD02__sum;
        CData/*3:0*/ AS__DOT__ADD02__DOT__ADD03__DOT____Vcellout__ADD01__sum;
        CData/*3:0*/ AS__DOT__ADD02__DOT__ADD03__DOT____Vcellout__ADD02__sum;
        CData/*3:0*/ AS__DOT__ADD0212__DOT____Vcellout__ADD01__sum;
        CData/*3:0*/ AS__DOT__ADD0212__DOT____Vcellout__ADD02__sum;
        CData/*7:0*/ AS__DOT__C03__DOT__C01__DOT____Vcellout__C01__out;
        CData/*7:0*/ AS__DOT__C03__DOT__C01__DOT____Vcellout__C02__out;
        CData/*7:0*/ AS__DOT__C03__DOT__C01__DOT____Vcellout__C03__out;
        CData/*3:0*/ AS__DOT__C03__DOT__ADD01__DOT__ADD01__DOT____Vcellout__ADD01__sum;
        CData/*3:0*/ AS__DOT__C03__DOT__ADD01__DOT__ADD01__DOT____Vcellout__ADD02__sum;
        CData/*3:0*/ AS__DOT__C03__DOT__ADD01__DOT__ADD02__DOT____Vcellout__ADD01__sum;
        CData/*3:0*/ AS__DOT__C03__DOT__ADD01__DOT__ADD02__DOT____Vcellout__ADD02__sum;
        CData/*3:0*/ AS__DOT__C03__DOT__ADD01__DOT__ADD03__DOT____Vcellout__ADD01__sum;
        CData/*3:0*/ AS__DOT__C03__DOT__ADD01__DOT__ADD03__DOT____Vcellout__ADD02__sum;
        CData/*3:0*/ AS__DOT__ADD03__DOT____Vcellout__ADD01__sum;
        CData/*3:0*/ AS__DOT__ADD03__DOT____Vcellout__ADD02__sum;
        CData/*0:0*/ __PVT__M__DOT__carry_E;
        CData/*0:0*/ __PVT__M__DOT__final_product_round;
        CData/*3:0*/ M__DOT__ADD23__DOT__ADD01__DOT____Vcellout__ADD01__sum;
        CData/*3:0*/ M__DOT__ADD23__DOT__ADD01__DOT____Vcellout__ADD02__sum;
        CData/*3:0*/ M__DOT__ADD23__DOT__ADD02__DOT____Vcellout__ADD01__sum;
        CData/*3:0*/ M__DOT__ADD23__DOT__ADD02__DOT____Vcellout__ADD02__sum;
        CData/*3:0*/ M__DOT__ADD23__DOT__ADD03__DOT____Vcellout__ADD01__sum;
        CData/*3:0*/ M__DOT__ADD23__DOT__ADD03__DOT____Vcellout__ADD02__sum;
        CData/*3:0*/ M__DOT__ADD01__DOT____Vcellout__ADD01__sum;
        CData/*3:0*/ M__DOT__ADD01__DOT____Vcellout__ADD02__sum;
        CData/*3:0*/ M__DOT__ADD02__DOT__ADD01__DOT____Vcellout__ADD01__sum;
        CData/*3:0*/ M__DOT__ADD02__DOT__ADD01__DOT____Vcellout__ADD02__sum;
        CData/*7:0*/ __PVT__D__DOT__complemented_E2;
        CData/*7:0*/ __PVT__D__DOT__complemented_shift_E1;
        CData/*7:0*/ __PVT__D__DOT__final_E;
        CData/*3:0*/ D__DOT__ADD01__DOT____Vcellout__ADD01__sum;
        CData/*3:0*/ D__DOT__ADD01__DOT____Vcellout__ADD02__sum;
        CData/*3:0*/ D__DOT__ADD02__DOT____Vcellout__ADD01__sum;
        CData/*3:0*/ D__DOT__ADD02__DOT____Vcellout__ADD02__sum;
        CData/*3:0*/ D__DOT__ADD03__DOT____Vcellout__ADD01__sum;
        CData/*3:0*/ D__DOT__ADD03__DOT____Vcellout__ADD02__sum;
        CData/*3:0*/ D__DOT__ADD04__DOT____Vcellout__ADD01__sum;
        CData/*3:0*/ D__DOT__ADD04__DOT____Vcellout__ADD02__sum;
        CData/*3:0*/ D__DOT__ADD05__DOT____Vcellout__ADD01__sum;
    };
    struct {
        CData/*3:0*/ D__DOT__ADD05__DOT____Vcellout__ADD02__sum;
        CData/*7:0*/ M01__DOT____Vcellout__M02__out;
        CData/*7:0*/ M02__DOT____Vcellout__M02__out;
        CData/*7:0*/ M09__DOT____Vcellout__M02__out;
        CData/*7:0*/ M010__DOT____Vcellout__M02__out;
        CData/*7:0*/ M011__DOT____Vcellout__M02__out;
        SData/*8:0*/ __PVT__M__DOT__final_E;
        SData/*8:0*/ __PVT__D__DOT__temp_E2;
        SData/*8:0*/ __PVT__D__DOT__temp_E3;
        SData/*8:0*/ __PVT__D__DOT__temp_E1;
        VL_IN(n1,31,0);
        VL_IN(n2,31,0);
        VL_OUT(result,31,0);
        IData/*31:0*/ __PVT__temp_result;
        IData/*31:0*/ __PVT__result1;
        IData/*31:0*/ __PVT__result2;
        IData/*31:0*/ __PVT__result3;
        IData/*31:0*/ __PVT__result4;
        IData/*31:0*/ __PVT__result5;
        IData/*31:0*/ __PVT__result6;
        IData/*23:0*/ __PVT__AS__DOT__M1;
        IData/*23:0*/ __PVT__AS__DOT__M2;
        IData/*23:0*/ __PVT__AS__DOT__complemented_M2;
        IData/*23:0*/ __PVT__AS__DOT__complemented_M_result;
        IData/*23:0*/ __PVT__AS__DOT__M_result;
        IData/*22:0*/ __PVT__AS__DOT__final_M;
        IData/*23:0*/ __PVT__AS__DOT__NM__DOT__M_temp;
        IData/*22:0*/ __PVT__D__DOT__normalized_M1;
        IData/*22:0*/ __PVT__D__DOT__normalized_M2;
        IData/*23:0*/ __PVT__D__DOT__NM1__DOT__M_temp;
        IData/*23:0*/ __PVT__D__DOT__NM2__DOT__M_temp;
        QData/*47:0*/ __PVT__M__DOT__M_mul_result;
        QData/*47:0*/ __PVT__D__DOT__DIV01__DOT__div_temp;
    };

    // INTERNAL VARIABLES
    Vmips_machine__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vmips_machine_add_sub_mul_div(const char* name);
    ~Vmips_machine_add_sub_mul_div();
    VL_UNCOPYABLE(Vmips_machine_add_sub_mul_div);

    // INTERNAL METHODS
    void __Vconfigure(Vmips_machine__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
