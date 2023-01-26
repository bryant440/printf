#include "main.h"

/**
 * _printf_x - a function that prints lowercase hexadecimal to stdout
 * @low_hex: the input character to convert to hexadecimal
 * Return: the counter
 */
int _printf_x(va_list low_hex)
{
	unsigned int arr[8], num1, num2, num3, sum;
	char hex;
	int counter;

	num1 = va_arg(low_hex, unsigned int);
	hex = 'a' - ':';
	num2 = 268435456;
	arr[0] = num1 / num2;

	for (num3 = 1; num3 < 8; num3++)
	{
		num2 /= 16;
		arr[num3] = (num1 / num2) % 16;
	}

	counter = 0;
	sum = 0;
	for (num3 = 0; num3 < 8; num3++)
	{
		sum += arr[num3];
		if (sum || num3 == 7)
		{
			if (arr[num3] < 10)
				_putchar('0' + arr[num3]);
			else
				_putchar('0' + hex + arr[num3]);
			counter++;
		}
	}
	return (counter);
}
