#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main11 - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main11(void)
{
	int len, len2;

	_printf("\nSTART OF TEST11\n");
        _printf("=====================\n");
	len = _printf("_printf: %\n");
	len2 = printf(" printf: %%\n");
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
