#include "main.h"

/**
 * main3 - Entry point
 *
 * Return: Always 0
 */
int main3(void)
{
	int alen, elen;
	char c = 'z';
	char *str = NULL;
	_printf("\nSTART OF TEST3\n");
	_printf("=====================\n");
	printf("printf(NULL)  : %d\n", printf("%s", str));
	printf("_printf(NULL) : %d\n", _printf("%s", str));
	printf("printf(\"%%\") : %d\n", printf("%%"));
	printf("_printf(\"%%\"): %d\n", _printf("%%"));
	str = "hello, world";
	printf("=====================\n");
	printf("*****CHAR*****\n");
	printf("=====================\n");
	printf("Expected   : %c\n", 'a');
	_printf("Actual     : %c\n", 'a');
	elen = printf("Expected   : %c\n", c);
	alen = _printf("Actual     : %c\n", c);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	printf("Expected   : %cc\n", 'a');
	_printf("Actual     : %cc\n", 'a');
	printf("Expected   : %c\n", 53);
	_printf("Actual     : %c\n", 53);
	printf("Expected   : %c.\n", '\0');
	_printf("Actual     : %c.\n", '\0');
	printf("Expected   : %%%c\n", 'y');
	_printf("Actual     : %%%c\n", 'y');
	printf("=====================\n");
	printf("*****STRINGS*****\n");
	printf("=====================\n");
	alen = elen = 0;
	printf("Expected   : %s\n", "holberton");
	_printf("Actual     : %s\n", "holberton");
	printf("Expected   : %s$\n", "");
	_printf("Actual     : %s$\n", "");
	elen = printf("Expected   : %s\n", str);
	alen = _printf("Actual     : %s\n", str);
	elen = printf("%s", "");
	alen = _printf("%s", "");
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	printf("Expected   : %sschool\n", "holberton");
	_printf("Actual     : %sschool\n", "holberton");
	elen = printf("Expected: %c%%%c%%%%%s%c%s%d\n", INT_MAX, INT_MIN, "hello", 0, "holberton", 0);
	alen = _printf("Actual  : %c%%%c%%%%%s%c%s%d\n", INT_MAX, INT_MIN, "hello", 0, "holberton", 0);
	printf("Expected: %d\n", elen);
	_printf("Actual  : %d\n", alen);
	printf("Expected  %i %d\n", 0032, 0032);
	_printf("Actual %i %d \n\n\n", 0032, 0032);
	_printf("%K\n");
	_printf("%!\n");
	return (0);
}
