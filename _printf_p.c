#include "main.h"

/**
 * _printf_p - a function that prints the address of a memory to stdout.
 * @p: the memory address to print
 * Return: the counter
 */
int _printf_p(va_list p)
{
	unsigned int arr[16], sum, num1;
	unsigned long num2, num3;
	int counter;
	char *string;

	num2 = va_arg(p, unsigned long), string = "(nil)";
	counter = 0;
	if (num2 == 0)
	{
		for (num1 = 0; string[num1]; num1++)
		{
			_putchar(string[num1]);
			counter++;
		}
		return (counter);
	}
	_putchar('0');
	_putchar('x');
	counter = 2, num3 = 1152921504606846976, arr[0] = num2 / num3;

	for (num1 = 1; num1 < 16; num1++)
	{
		num3 /= 16;
		arr[num1] = (num2 / num3) % 16;
	}

	sum = 0;
	for (num1 = 0; num1 < 16; num1++)
	{
		sum += arr[num1];
		if (sum || num1 == 15)
		{
			if (arr[num1] < 10)
				_putchar('0' + arr[num1]);
			else
				_putchar('0' + ('a' - ':') + arr[num1]);
			counter++;
		}
	}
	return (counter);
}
