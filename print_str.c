#include <string.h>
#include "main.h"

/**
 * print_str - returns a string
 * @c: pointer to string to be printed
 * Return: string
 */

int print_str(char *c)
{
	return (write(1, &c, strlen(c)));
}
