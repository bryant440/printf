#ifndef MAIN_H
#define MAIN_H

/* normal standard c library */
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

/* macros */
#define BUFSIZE 1024 

/**
 * struct _print - a structure to define our printf value types
 * @print_type: the type to print
 * @variadic_function: the function to print
 */
typedef struct print_type
{
	char *type;
	int (*variadic_function)(va_list);
} print_f;

int _putchar(char c);
int _printf(const char *format, ...);
int _printf_c(va_list c);
int _printf_s(va_list str);
int _printf_d(va_list dig);
int _printf_i(va_list i);
int _printf_b(va_list bin);
int _printf_u(va_list un_i);
int _printf_o(va_list oct);
int _printf_x(va_list low_hex);
int _printf_X(va_list upp_hex);
int _printf_S(va_list S);
int _printf_p(va_list p);
int _printf_r(va_list rev);
int _printf_R(va_list rot13);

int (*variadic_function)(va_list);
int var_func_checker(char *format, int n);
int _printf_S_x(unsigned int num);

int main1(void);
int main2(void);
int main3(void);
int main4(void);
int main5(void);
int main6(void);
int main7(void);
int main8(void);
int main9(void);
int main10(void);
int main11(void);
int main12(void);
int main13(void);
int main14(void);
int main15(void);

#endif
