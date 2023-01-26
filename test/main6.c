#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main6 - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main6(void)
{
	int len, len2;

	_printf("\nSTART OF TEST4\n");
        _printf("=====================\n");
	len = _printf("%c\n", 'S');
	len2 = printf("%c\n", 'S');
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
