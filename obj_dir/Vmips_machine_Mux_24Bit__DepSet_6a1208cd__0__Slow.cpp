// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmips_machine.h for the primary calling header

#include "verilated.h"

#include "Vmips_machine_Mux_24Bit.h"

VL_ATTR_COLD void Vmips_machine_Mux_24Bit___ctor_var_reset(Vmips_machine_Mux_24Bit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmips_machine_Mux_24Bit___ctor_var_reset\n"); );
    // Body
    vlSelf->in0 = VL_RAND_RESET_I(24);
    vlSelf->in1 = VL_RAND_RESET_I(24);
    vlSelf->sl = VL_RAND_RESET_I(1);
    vlSelf->out = VL_RAND_RESET_I(24);
    vlSelf->__Vcellout__M01__out = VL_RAND_RESET_I(8);
    vlSelf->__Vcellout__M02__out = VL_RAND_RESET_I(8);
    vlSelf->__Vcellout__M03__out = VL_RAND_RESET_I(8);
}
