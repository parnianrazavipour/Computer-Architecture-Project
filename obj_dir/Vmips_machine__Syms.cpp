// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vmips_machine__Syms.h"
#include "Vmips_machine.h"
#include "Vmips_machine___024root.h"

// FUNCTIONS
Vmips_machine__Syms::~Vmips_machine__Syms()
{
}

Vmips_machine__Syms::Vmips_machine__Syms(VerilatedContext* contextp, const char* namep,Vmips_machine* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP(namep)
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
}
