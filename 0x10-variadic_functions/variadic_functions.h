#ifndef _VARIADIC__
#define _VARIADIC_

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct print{
	char *c;
	void (*f)(va_list args);
}print;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
