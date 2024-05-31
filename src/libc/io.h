#ifndef IO_H
#define IO_H

#include <stdint.h>

#include "../drivers/screen_colors.h"

void print_char(char character, char attribute);
void print(char * str, char attribute);
void println(char * str, char attribute);

char read_char(void);
char * input(void);

void cls(void);

#endif
