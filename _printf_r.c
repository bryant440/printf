#include "main.h"

/**
 * _printf_r - a function that prints a string in reverse to stdout.
 * @rev: the string to reverse
 * Return: counter
 */
int _printf_r(va_list rev)
{
	int num, counter;
	char *string;

	string = va_arg(rev, char *);

	if (string == NULL)
		string = ")lin(";

	for (num = 0; string[num]; num++)
		continue;

	counter = 0;

	for (num -= 1; num >= 0; num--)
	{
		_putchar(string[num]);
		counter++;
	}
	return (counter);
}
