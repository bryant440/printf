#include "main.h"

/**
 * _printf_S_x - a function that prints Non printable characters
 * @num: the non printable characters to print
 * Return: counter
 */
int _printf_S_x(unsigned int num)
{
	int num1, *num2, counter;
	unsigned int hold;

	hold = num;
	counter = 0;
	while ((num / 16) != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	num2 = malloc(sizeof(int) * counter);

	for (num1 = 0; num1 < counter; num1++)
	{
		num2[num1] = hold % 16;
		hold /= 16;
	}

	for (num1 = counter - 1; num1 >= 0; num1--)
	{
		if (num2[num1] > 9)
			num2[num1] = num2[num1] + 7;
		_putchar(num2[num1] + '0');
	}
	free(num2);
	return (counter);
}
