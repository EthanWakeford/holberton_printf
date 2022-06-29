#include "main.h"

/**
*_printf - prints to standard output
*@format: the format to print out
*Return: the count of characters printed if successful, -1 if failure
*/

int _printf(const char *format, ...)
{
	va_list ap;
	int count;
	
	va_start(ap, format);
	if (format == NULL)
		return (-1);
	count = find_print(ap, format);
	return (count);
}
