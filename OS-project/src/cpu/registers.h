#ifndef REGISTERS_H
#define REGISTERS_H

#include <stdint.h>

// Registers struct
typedef struct
{
   uint32_t ds;
   uint32_t edi, esi, ebp, useless, ebx, edx, ecx, eax;
   uint32_t interrupt_no, error_code;
   uint32_t eip, cs, eflags, esp, ss;
} registers_struct_type;

#endif
