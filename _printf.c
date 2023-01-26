#include "main.h"

/**
 * format_checker - a function to check if the format specifier is valid.
 * @format: the format to check
 * Return: a pointer to the format
 */
int (*format_checker(const char *format))(va_list)
{
	int num;
	print_f print[] = {
		{"c", _printf_c},
		{"s", _printf_s},
		{"i", _printf_i},
		{"d", _printf_d},
		{"b", _printf_b},
		{"u", _printf_u},
		{"o", _printf_o},
		{"x", _printf_x},
		{"X", _printf_X},
		{"p", _printf_p},
		{"S", _printf_S},
		{"r", _printf_r},
		{"R", _printf_R},
		{NULL, NULL}
	};

	for (num = 0; print[num].type != NULL; num++)
	{
		if (*print[num].type == *format)
			break;
	}
	return (print[num].variadic_function);
}


/**
 * _printf - a function that prints the format argument
 * @format: an input array of characters to print
 * Return: the characters to print
 */
int _printf(const char *format, ...)
{
	int num, counter;
	va_list ap;

	va_start(ap, format), num = 0, counter = 0;
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format && format[num])
	{
		if (format[num] != '%')
		{
			_putchar(format[num]);
			counter++, num++;
			continue;
		}
		else
		{
			if (format[num + 1] == '%')
			{
				_putchar('%');
				counter++, num += 2;
				continue;
			}
			else
			{
				variadic_function = format_checker(&format[num + 1]);
				if (variadic_function == NULL)
				{
					_putchar(format[num]), counter++, num++;
					continue;
				}
				num += 2, counter += variadic_function(ap);
				continue;
			}
		}
		num++;
	}
	va_end(ap);
	return (counter);
}
