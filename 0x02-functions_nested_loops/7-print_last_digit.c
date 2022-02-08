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

	c = n % 10;
	if (n < 0 || c < 0)
	{
		n = -n;
		c = -c;
	}

	if (c < 0 && c > 9)
	{
		_putchar (56);
		return (8);
	}
	a = n % 10;
	b = a + 48;
	_putchar (b);
	return (a);
}
