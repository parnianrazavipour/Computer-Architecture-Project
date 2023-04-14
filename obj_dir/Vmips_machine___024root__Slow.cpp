// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmips_machine.h for the primary calling header

#include "verilated.h"

#include "Vmips_machine__Syms.h"
#include "Vmips_machine___024root.h"

void Vmips_machine___024root___ctor_var_reset(Vmips_machine___024root* vlSelf);

Vmips_machine___024root::Vmips_machine___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vmips_machine___024root___ctor_var_reset(this);
}

void Vmips_machine___024root::__Vconfigure(Vmips_machine__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vmips_machine___024root::~Vmips_machine___024root() {
}
