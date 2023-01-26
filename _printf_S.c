#include "main.h"

/**
 * _printf_S - a function that prints strings and ASCII characters to stdout.
 * @S: the string to print
 * Return: counter
 */
int _printf_S(va_list S)
{
	unsigned int num;
	int counter, var;
	char *string;

	string = va_arg(S, char *);

	if (string == NULL)
		string = "(null)";

	counter = 0;
	for (num = 0; string[num]; num++)
	{
		if (string[num] < 31 || string[num] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			counter += 2;
			var = string[num];
			if (var < 16)
			{
				_putchar('0');
				counter++;
			}
			counter += _printf_S_x(var);
		}
		else
		{
			_putchar(string[num]);
			counter++;
		}
	}
	return (counter);
}
