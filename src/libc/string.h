#ifndef STRING_H
#define STRING_H

#include <stdint.h>

void int_to_ascii(int n, char str[]);
void hex_to_ascii(int n, char str[]);

void reverse(char str[]);
int strlen(char str[]);

void backspace(char str[]);
void append(char str[], char n);
int strcmp(char str_1[], char str_2[]);
void strcpy(char str_1[], char str_2[]);

#endif
