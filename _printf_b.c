#include "main.h"

/**
 * _printf_b - a function to print a binary number to stdout
 * @bin: unsigned int being converted to binary
 * Return: the total number of the printed number
 */
int _printf_b(va_list bin)
{
	int counter, num2, *arr;
	unsigned int num1, num3;

	num1 = va_arg(bin, unsigned int), counter = 0, num3 = num1;

	while (num1 / 2 != 0)
	{
		num1 /= 2;
		counter++;
	}
	counter++;

	arr = malloc(sizeof(int) * counter);

	if (arr == NULL)
	{
		free(arr);
		return (0);
	}

	for (num2 = 0; num2 < counter; num2++)
	{
		arr[num2] = num3 % 2;
		num3 /= 2;
	}

	for (num2 = counter - 1; num2 >= 0; num2--)
	{
		_putchar(arr[num2] + '0');
	}
	free(arr);
	return (counter);
}
