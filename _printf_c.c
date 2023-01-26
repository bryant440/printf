#include "main.h"

/**
 * _printf_c - a function that prints to stdout a character.
 * @c: the character to print
 * Return: 0 as (Success)
 */
int _printf_c(va_list c)
{
	char character;

	character = va_arg(c, int);
	_putchar(character);
	return (1);
}
