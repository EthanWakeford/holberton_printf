#include "main.h"

int find_print(va_list ap, const char *format)
{
	int i, count = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					count += print_char(va_arg(ap, int));
					break;
				case 's':
					count += print_str(va_arg(ap, char*));
					break;
				case '%':
					count += print_char(format[i]);
					break;
			}
		}
		else
			print_char(format[i]);
	count++;
	}
	return (count);
}
