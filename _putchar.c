#include <unistd.h>

/**
 * _putchar - writes the character c to stdout.
 * @c: the characte rto print
 * Return: on Success 1
 * On error, -1 is returned, an errno is set appropraitely
 * Description: implementing a local buffer of 1024 bytes to call write
 * as little as possible
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - a function that prints a string to stdout
 * @str: pointer to the string to print
 * Return: number of chars written
 */
int _puts(char *str)
{
	register int num;

	for (num = 0; str[num]; num++)
		_putchar(str[num]);
	return (num);
}
