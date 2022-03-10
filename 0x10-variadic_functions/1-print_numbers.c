#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints an integer
 * @separator: the integer to print
 * @n: number of arg
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int h = 0, i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n ; i++)
	{
		h = (int) va_arg(args, int);
		printf("%d", h);
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
