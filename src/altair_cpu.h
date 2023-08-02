#include "instructions.h"

#ifndef ALTAIR_CPU_H
#define ALTAIR_CPU_H

// How much RAM should be allocated? Max for 16 bit address space is 65536
#define MEMORY_SIZE 256

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
extern char reg_SP;
extern char reg_PC;

void cpu_step();

#endif