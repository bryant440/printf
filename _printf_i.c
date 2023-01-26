#include "main.h"

/**
 * _printf_i - a function that prints a decimal number in base 10 to stdout.
 * @i: the base 10 decimal to print
 * Return: the total number of the decimals
 */
int _printf_i(va_list i)
{
	int num1, result, len;
	unsigned int num2;

	num1 = va_arg(i, int), result = 1, len = 0;

	if (num1 < 0)
	{
		len += _putchar('-');
		num2 = num1 * -1;
	}
	else
		num2 = num1;

	while ((num2 / result) > 9)
		result *= 10;

	while (result != 0)
	{
		len += _putchar((num2 / result) + '0');
		num2 %= result;
		result /= 10;
	}
	return (len);
}
