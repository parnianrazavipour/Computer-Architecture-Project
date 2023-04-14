// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmips_machine.h for the primary calling header

#ifndef VERILATED_VMIPS_MACHINE_MUX_24BIT_H_
#define VERILATED_VMIPS_MACHINE_MUX_24BIT_H_  // guard

#include "verilated.h"

class Vmips_machine__Syms;
VL_MODULE(Vmips_machine_Mux_24Bit) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(sl,0,0);
    CData/*7:0*/ __Vcellout__M01__out;
    CData/*7:0*/ __Vcellout__M02__out;
    CData/*7:0*/ __Vcellout__M03__out;
    VL_IN(in0,23,0);
    VL_IN(in1,23,0);
    VL_OUT(out,23,0);

    // INTERNAL VARIABLES
    Vmips_machine__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vmips_machine_Mux_24Bit(const char* name);
    ~Vmips_machine_Mux_24Bit();
    VL_UNCOPYABLE(Vmips_machine_Mux_24Bit);

    // INTERNAL METHODS
    void __Vconfigure(Vmips_machine__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
