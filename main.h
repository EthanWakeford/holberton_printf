#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int print_char(char c);
int print_str(char *c);
int stringlength(char *str);
int find_print(va_list ap, const char *format);
int _putchar(char c);
int print_dec(int c);
int int_len(int c);

#endif
