#ifndef INSTRUCTIONS_H
#define INSTRUCTIONS_H

#define OPCODE_EXTRA_CYCLES 6 // Some instructions take extra cycles. Specifically, 6 cycles. Figured I'd best make it a constant.
typedef struct {
  char name[10]; // Opcode name
  char length; // How many bytes of memory the instruction uses,
  char cycles;  // Base number of cycles required for this instruction. It will always take this long to execute.
  int* execute; // Pointer to the function for this opcode. Returns the number of extra cycles the instruction took on top of the base cycle count, which is usually 0.
} Opcode;

int opcode_NOP();
int opcode_UNDEF();

#endif // INSTRUCTIONS_H

