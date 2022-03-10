#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints an string
 * @separator: the integer to print
 * @n: number of arg
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *h;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n ; i++)
	{
		h = va_arg(args, char*);
		printf("%s", h);
		if (separator && i < n - 1)
			printf("%s", separator);
		if (args == NULL)
			printf("(nil)");
	}
	printf("\n");
	va_end(args);
}
