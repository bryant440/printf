#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main13 - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main13(void)
{
	int len, len2;

	_printf("\nSTART OF TEST13\n");
        _printf("=====================\n");
	len = _printf("%x\n", -1024);
	len2 = printf("%x\n", -1024);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
