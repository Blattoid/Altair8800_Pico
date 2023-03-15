#include "instructions.h"

#ifndef ALTAIR_CPU_H
#define ALTAIR_CPU_H

// How much RAM should be available to the system
#define MEMORY_SIZE 256

// Global variables
extern Opcode instruction_set[];
extern char memory[];

#endif