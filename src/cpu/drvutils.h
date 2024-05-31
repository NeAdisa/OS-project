#ifndef TYPES_H
#define TYPES_H

#include <stdint.h>

#define UNUSED(x) (void)(x)

#define low16(address) (uint16_t)((address) & 0xFFFF)
#define high16(address) (uint16_t)(((address) >> 16) & 0xFFFF)

void int_to_ascii(int n, char str[]);
void reverse(char str[]);
int strlen(char str[]);

#endif
