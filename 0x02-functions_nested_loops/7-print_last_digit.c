#include "main.h"

/**
 * print_last_digit - check if it's lower
 * @n: ok bla bla
 * Return: return
 */

int print_last_digit(int n)
{
	int a;
	int b;
	int c;

	if (n < 0)
	{
		n = -n;
	}
	c = n % 10;
	if (c == 8)
	{
		_putchar (56);
		return (8);
	}
	a = n % 10;
	b = a + 48;
	_putchar (b);
	return (a);
}
