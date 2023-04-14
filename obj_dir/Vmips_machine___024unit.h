// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmips_machine.h for the primary calling header

#ifndef VERILATED_VMIPS_MACHINE___024UNIT_H_
#define VERILATED_VMIPS_MACHINE___024UNIT_H_  // guard

#include "verilated.h"

class Vmips_machine__Syms;
VL_MODULE(Vmips_machine___024unit) {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;

    // INTERNAL VARIABLES
    Vmips_machine__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vmips_machine___024unit(const char* name);
    ~Vmips_machine___024unit();
    VL_UNCOPYABLE(Vmips_machine___024unit);

    // INTERNAL METHODS
    void __Vconfigure(Vmips_machine__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
