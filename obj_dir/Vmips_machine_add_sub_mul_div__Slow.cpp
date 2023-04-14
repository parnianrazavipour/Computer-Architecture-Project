// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmips_machine.h for the primary calling header

#include "verilated.h"

#include "Vmips_machine__Syms.h"
#include "Vmips_machine_add_sub_mul_div.h"

void Vmips_machine_add_sub_mul_div___ctor_var_reset(Vmips_machine_add_sub_mul_div* vlSelf);

Vmips_machine_add_sub_mul_div::Vmips_machine_add_sub_mul_div(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vmips_machine_add_sub_mul_div___ctor_var_reset(this);
}

void Vmips_machine_add_sub_mul_div::__Vconfigure(Vmips_machine__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vmips_machine_add_sub_mul_div::~Vmips_machine_add_sub_mul_div() {
}
