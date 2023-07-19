#include "instructions.h"

#ifndef ALTAIR_CPU_H
#define ALTAIR_CPU_H

// How much RAM should be allocated? Max for 16 bit address space is 65536
#define MEMORY_SIZE 256

// Global variables
extern Opcode instruction_set[];
extern char memory[];

// CPU registers
extern char instruction_reg;
extern char program_counter_reg;

void cpu_step();

#endif