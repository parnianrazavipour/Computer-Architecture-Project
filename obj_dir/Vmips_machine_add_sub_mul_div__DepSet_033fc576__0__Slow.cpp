// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmips_machine.h for the primary calling header

#include "verilated.h"

#include "Vmips_machine_add_sub_mul_div.h"

VL_ATTR_COLD void Vmips_machine_add_sub_mul_div___ctor_var_reset(Vmips_machine_add_sub_mul_div* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vmips_machine_add_sub_mul_div___ctor_var_reset\n"); );
    // Body
    vlSelf->n1 = VL_RAND_RESET_I(32);
    vlSelf->n2 = VL_RAND_RESET_I(32);
    vlSelf->oper = VL_RAND_RESET_I(2);
    vlSelf->Overflow = VL_RAND_RESET_I(1);
    vlSelf->Underflow = VL_RAND_RESET_I(1);
    vlSelf->Exception = VL_RAND_RESET_I(1);
    vlSelf->result = VL_RAND_RESET_I(32);
    vlSelf->__PVT__temp_result = VL_RAND_RESET_I(32);
    vlSelf->__PVT__result1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__result2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__result3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__result4 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__result5 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__result6 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__AS__DOT__real_oper = VL_RAND_RESET_I(1);
    vlSelf->__PVT__AS__DOT__M_carry = VL_RAND_RESET_I(1);
    vlSelf->__PVT__AS__DOT__One_Added_E = VL_RAND_RESET_I(8);
    vlSelf->__PVT__AS__DOT__new_E = VL_RAND_RESET_I(8);
    vlSelf->__PVT__AS__DOT__exp_diff = VL_RAND_RESET_I(8);
    vlSelf->__PVT__AS__DOT__E = VL_RAND_RESET_I(8);
    vlSelf->__PVT__AS__DOT__complemented_E2 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__AS__DOT__complemented_shift_E = VL_RAND_RESET_I(8);
    vlSelf->__PVT__AS__DOT__M1 = VL_RAND_RESET_I(24);
    vlSelf->__PVT__AS__DOT__M2 = VL_RAND_RESET_I(24);
    vlSelf->__PVT__AS__DOT__complemented_M2 = VL_RAND_RESET_I(24);
    vlSelf->__PVT__AS__DOT__complemented_M_result = VL_RAND_RESET_I(24);
    vlSelf->__PVT__AS__DOT__M_result = VL_RAND_RESET_I(24);
    vlSelf->__PVT__AS__DOT__final_M = VL_RAND_RESET_I(23);
    vlSelf->AS__DOT____Vcellinp__M05__sl = VL_RAND_RESET_I(1);
    vlSelf->AS__DOT__ADD01__DOT____Vcellout__ADD01__sum = VL_RAND_RESET_I(4);
    vlSelf->AS__DOT__ADD01__DOT____Vcellout__ADD02__sum = VL_RAND_RESET_I(4);
    vlSelf->__PVT__AS__DOT__C023__DOT__outtemp = VL_RAND_RESET_I(8);
    vlSelf->AS__DOT__C023__DOT__ADD01__DOT____Vcellout__ADD01__sum = VL_RAND_RESET_I(4);
    vlSelf->AS__DOT__C023__DOT__ADD01__DOT____Vcellout__ADD02__sum = VL_RAND_RESET_I(4);
    vlSelf->AS__DOT__C02__DOT____Vcellout__C01__out = VL_RAND_RESET_I(8);
    vlSelf->AS__DOT__C02__DOT____Vcellout__C02__out = VL_RAND_RESET_I(8);
    vlSelf->AS__DOT__C02__DOT____Vcellout__C03__out = VL_RAND_RESET_I(8);
    vlSelf->AS__DOT__ADD02__DOT__ADD01__DOT____Vcellout__ADD01__sum = VL_RAND_RESET_I(4);
    vlSelf->AS__DOT__ADD02__DOT__ADD01__DOT____Vcellout__ADD02__sum = VL_RAND_RESET_I(4);
    vlSelf->AS__DOT__ADD02__DOT__ADD02__DOT____Vcellout__ADD01__sum = VL_RAND_RESET_I(4);
    vlSelf->AS__DOT__ADD02__DOT__ADD02__DOT____Vcellout__ADD02__sum = VL_RAND_RESET_I(4);
    vlSelf->AS__DOT__ADD02__DOT__ADD03__DOT____Vcellout__ADD01__sum = VL_RAND_RESET_I(4);
    vlSelf->AS__DOT__ADD02__DOT__ADD03__DOT____Vcellout__ADD02__sum = VL_RAND_RESET_I(4);
    vlSelf->AS__DOT__ADD0212__DOT____Vcellout__ADD01__sum = VL_RAND_RESET_I(4);
    vlSelf->AS__DOT__ADD0212__DOT____Vcellout__ADD02__sum = VL_RAND_RESET_I(4);
    vlSelf->AS__DOT__C03__DOT__C01__DOT____Vcellout__C01__out = VL_RAND_RESET_I(8);
    vlSelf->AS__DOT__C03__DOT__C01__DOT____Vcellout__C02__out = VL_RAND_RESET_I(8);
    vlSelf->AS__DOT__C03__DOT__C01__DOT____Vcellout__C03__out = VL_RAND_RESET_I(8);
    vlSelf->AS__DOT__C03__DOT__ADD01__DOT__ADD01__DOT____Vcellout__ADD01__sum = VL_RAND_RESET_I(4);
    vlSelf->AS__DOT__C03__DOT__ADD01__DOT__ADD01__DOT____Vcellout__ADD02__sum = VL_RAND_RESET_I(4);
    vlSelf->AS__DOT__C03__DOT__ADD01__DOT__ADD02__DOT____Vcellout__ADD01__sum = VL_RAND_RESET_I(4);
    vlSelf->AS__DOT__C03__DOT__ADD01__DOT__ADD02__DOT____Vcellout__ADD02__sum = VL_RAND_RESET_I(4);
    vlSelf->AS__DOT__C03__DOT__ADD01__DOT__ADD03__DOT____Vcellout__ADD01__sum = VL_RAND_RESET_I(4);
    vlSelf->AS__DOT__C03__DOT__ADD01__DOT__ADD03__DOT____Vcellout__ADD02__sum = VL_RAND_RESET_I(4);
    vlSelf->__PVT__AS__DOT__NM__DOT__M_temp = VL_RAND_RESET_I(24);
    vlSelf->AS__DOT__ADD03__DOT____Vcellout__ADD01__sum = VL_RAND_RESET_I(4);
    vlSelf->AS__DOT__ADD03__DOT____Vcellout__ADD02__sum = VL_RAND_RESET_I(4);
    vlSelf->__PVT__M__DOT__final_E = VL_RAND_RESET_I(9);
    vlSelf->__PVT__M__DOT__M_mul_result = VL_RAND_RESET_Q(48);
    vlSelf->__PVT__M__DOT__carry_E = VL_RAND_RESET_I(1);
    vlSelf->__PVT__M__DOT__final_product_round = VL_RAND_RESET_I(1);
    vlSelf->M__DOT__ADD23__DOT__ADD01__DOT____Vcellout__ADD01__sum = VL_RAND_RESET_I(4);
    vlSelf->M__DOT__ADD23__DOT__ADD01__DOT____Vcellout__ADD02__sum = VL_RAND_RESET_I(4);
    vlSelf->M__DOT__ADD23__DOT__ADD02__DOT____Vcellout__ADD01__sum = VL_RAND_RESET_I(4);
    vlSelf->M__DOT__ADD23__DOT__ADD02__DOT____Vcellout__ADD02__sum = VL_RAND_RESET_I(4);
    vlSelf->M__DOT__ADD23__DOT__ADD03__DOT____Vcellout__ADD01__sum = VL_RAND_RESET_I(4);
    vlSelf->M__DOT__ADD23__DOT__ADD03__DOT____Vcellout__ADD02__sum = VL_RAND_RESET_I(4);
    vlSelf->M__DOT__ADD01__DOT____Vcellout__ADD01__sum = VL_RAND_RESET_I(4);
    vlSelf->M__DOT__ADD01__DOT____Vcellout__ADD02__sum = VL_RAND_RESET_I(4);
    vlSelf->M__DOT__ADD02__DOT__ADD01__DOT____Vcellout__ADD01__sum = VL_RAND_RESET_I(4);
    vlSelf->M__DOT__ADD02__DOT__ADD01__DOT____Vcellout__ADD02__sum = VL_RAND_RESET_I(4);
    vlSelf->__PVT__D__DOT__temp_E2 = VL_RAND_RESET_I(9);
    vlSelf->__PVT__D__DOT__temp_E3 = VL_RAND_RESET_I(9);
    vlSelf->__PVT__D__DOT__temp_E1 = VL_RAND_RESET_I(9);
    vlSelf->__PVT__D__DOT__complemented_E2 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__D__DOT__complemented_shift_E1 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__D__DOT__final_E = VL_RAND_RESET_I(8);
    vlSelf->__PVT__D__DOT__normalized_M1 = VL_RAND_RESET_I(23);
    vlSelf->__PVT__D__DOT__normalized_M2 = VL_RAND_RESET_I(23);
    vlSelf->D__DOT__ADD01__DOT____Vcellout__ADD01__sum = VL_RAND_RESET_I(4);
    vlSelf->D__DOT__ADD01__DOT____Vcellout__ADD02__sum = VL_RAND_RESET_I(4);
    vlSelf->D__DOT__ADD02__DOT____Vcellout__ADD01__sum = VL_RAND_RESET_I(4);
    vlSelf->D__DOT__ADD02__DOT____Vcellout__ADD02__sum = VL_RAND_RESET_I(4);
    vlSelf->__PVT__D__DOT__NM1__DOT__M_temp = VL_RAND_RESET_I(24);
    vlSelf->__PVT__D__DOT__NM2__DOT__M_temp = VL_RAND_RESET_I(24);
    vlSelf->__PVT__D__DOT__DIV01__DOT__div_temp = VL_RAND_RESET_Q(48);
    vlSelf->D__DOT__ADD03__DOT____Vcellout__ADD01__sum = VL_RAND_RESET_I(4);
    vlSelf->D__DOT__ADD03__DOT____Vcellout__ADD02__sum = VL_RAND_RESET_I(4);
    vlSelf->D__DOT__ADD04__DOT____Vcellout__ADD01__sum = VL_RAND_RESET_I(4);
    vlSelf->D__DOT__ADD04__DOT____Vcellout__ADD02__sum = VL_RAND_RESET_I(4);
    vlSelf->D__DOT__ADD05__DOT____Vcellout__ADD01__sum = VL_RAND_RESET_I(4);
    vlSelf->D__DOT__ADD05__DOT____Vcellout__ADD02__sum = VL_RAND_RESET_I(4);
    vlSelf->M01__DOT____Vcellout__M02__out = VL_RAND_RESET_I(8);
    vlSelf->M02__DOT____Vcellout__M02__out = VL_RAND_RESET_I(8);
    vlSelf->M09__DOT____Vcellout__M02__out = VL_RAND_RESET_I(8);
    vlSelf->M010__DOT____Vcellout__M02__out = VL_RAND_RESET_I(8);
    vlSelf->M011__DOT____Vcellout__M02__out = VL_RAND_RESET_I(8);
}
