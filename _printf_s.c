#include "main.h"

/**
 * _printf_s - a function that prints a string to stdout.
 * @str: the string to print
 * Return: 0 as (Success)
 */
int _printf_s(va_list str)
{
	char *string;
	int len;

	string = va_arg(str, char *);
	if (string == NULL)
		string = "(null)";

	len = 0;
	while (string[len])
		_putchar(string[len++]);
	return (len);
}
