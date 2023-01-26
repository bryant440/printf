#include "main.h"

/**
 * _printf_u - a function that prints an usigned int to stdout.
 * @un_i: an unsigned int to print
 * Return: the total number of integer
 */
int _printf_u(va_list un_i)
{
	unsigned int num1;
	int num2, counter;

	num1 = va_arg(un_i, unsigned int), num2 = 1;

	while ((num1 / num2) > 9)
		num2 *= 10;

	counter = 0;
	while (num2 != 0)
	{
		counter += _putchar((num1 / num2) + '0');
		num1 %= num2;
		num2 /= 10;
	}
	return (counter);
}
