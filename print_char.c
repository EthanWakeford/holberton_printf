#include "main.h"
#include <string.h>

/**
 * print_char - prints a string
 * @c: character to be printed
 * Return: char
 */

int print_char(char c)
{
	return (write(1, &c, 1));
}