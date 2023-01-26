#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * main7 - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main7(void)
{
	int len, len2;

	_printf("\nSTART OF TEST7\n");
        _printf("=====================\n");
	len = _printf("%d\n", INT_MIN);
	len2 = printf("%d\n", INT_MIN);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
