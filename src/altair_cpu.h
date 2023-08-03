#include "instructions.h"

#ifndef ALTAIR_CPU_H
#define ALTAIR_CPU_H

// How much RAM should be "installed"?
// Note: User code can access up 65536 locations in a 16 bit address space.
// If this value is less than that, programs may try to read/modify beyond the available range.
#define MEMORY_SIZE 65536

// Virtual RAM
extern char memory[];

// CPU registers
extern char reg_Flags;
extern char reg_A;
extern char reg_B;
extern char reg_C;
extern char reg_D;
extern char reg_E;
extern char reg_H;
extern char reg_L;
extern char reg_IR[3];
extern unsigned short int reg_SP;
extern unsigned short int reg_PC;

void cpu_step();

#endif
