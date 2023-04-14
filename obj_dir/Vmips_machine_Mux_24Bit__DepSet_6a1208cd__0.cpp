// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmips_machine.h for the primary calling header

#include "verilated.h"

#include "Vmips_machine_Mux_24Bit.h"

VL_INLINE_OPT void Vmips_machine_Mux_24Bit___combo__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__M011__DOT__M01__1(Vmips_machine_Mux_24Bit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vmips_machine_Mux_24Bit___combo__TOP__mips_machine__DOT__core__DOT__f_core__DOT__alu__DOT__adder__M011__DOT__M01__1\n"); );
    // Body
    vlSelf->__PVT__out = (((IData)(vlSelf->__Vcellout__M03__out) 
                           << 0x10U) | (((IData)(vlSelf->__Vcellout__M02__out) 
                                         << 8U) | (IData)(vlSelf->__Vcellout__M01__out)));
}
