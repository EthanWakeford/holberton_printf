#include "main.h"

int (*get_func(char conv_spec))(va_list)
{
    int i = 0;
    type_t get_type[] = {
        {'c', print_char},
        {'s', print_str},
        {'d', print_dec},
        {NULL, NULL}
	};

    for (i = 0; get_type[i].form_match != conv_spec; i++)
    {
        if (get_type[i].form_match == NULL)
            return (NULL);
	}
        return (get_type[i].func);
}

int _printf (const char *format, ...)
{
	va_list ap;
	int i, count = 0;
	int (*print)(va_list);

	va_start(ap, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			print = get_func(format[i]);
			if (print == NULL)
			{
				if (format[i] != '%')
					count += _putchar('%');
				count += _putchar(format[i]);
			}
			else
				count += print(ap);
		}
		else
			count += _putchar(format[i]);
		i++;
	}
	return (count);
}
