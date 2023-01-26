#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * main8 - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main8(void)
{
	int len, len2;

	_printf("\nSTART OF TEST8\n");
        _printf("=====================\n");
	len = _printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	len2 = printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
