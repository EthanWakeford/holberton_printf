#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int (*get_func(char conv_spec))(va_list, int);
int print_char(char c);
int print_str(char *c);
int stringlength(char *str);
int _putchar(char c);
int print_dec(int c);
int int_len(int c);
int _putchar(char c);

/**
*struct type - matches format specifier and function pointer
*@form_match: format specifier to match
*@func: function to run
*/

typedef struct type
{
	char form_match;
	int (*func)(va_list, int);
} type_t;

#endif
