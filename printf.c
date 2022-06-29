#include "main.h"

int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0;
	char *str;
	int count = 0;

	va_start(ap, format);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			switch(format[i])
			{
				case 'c':
					break;
				case 's':
					break;
				case '%'
					break;
				case 'd':
					break;
				case 'i':
					break;
				default
					exit(98);
			}


		}
		else
			_putchar(format[i]);
		i++;
	}
	return (count);
