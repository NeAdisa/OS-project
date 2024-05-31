#ifndef MEM_H
#define MEM_H

#include <stddef.h>
#include <stdint.h>

void memory_copy(uint8_t * source, uint8_t * destination, int n_bytes);
void memory_set(uint8_t * destination, uint8_t value, uint32_t length);

uint32_t free_memory_address = 0x10000;

uint32_t kmalloc(size_t size, int align, uint32_t * physical_address);

#endif
