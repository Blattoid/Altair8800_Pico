#ifndef INSTRUCTIONS_H
#define INSTRUCTIONS_H

typedef struct {
  char name[11]; // Opcode mnemonic
  char length; // How many bytes of memory the instruction uses
  char cycles;  // Base number of cycles required for this instruction. It will always take at least this long to execute.
  int (*execute)(); // Pointer to the function for this opcode. Returns the number of extra cycles the instruction took to execute, which is usually 0.
} Opcode;

extern Opcode instruction_set[];

#endif // INSTRUCTIONS_H
