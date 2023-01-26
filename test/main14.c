#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * main14 - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main14(void)
{
	int len, len2;

	_printf("\nSTART OF TEST14\n");
        _printf("=====================\n");
	len = _printf("%x\n", UINT_MAX);
	len2 = printf("%x\n", UINT_MAX);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
