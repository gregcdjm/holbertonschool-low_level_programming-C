#include "main.h"

/**
 * print_sign - check if it's lower
 * @n: ok bla bla
 * Return: return
 */

int print_sign(int n)
{
	if (n > 48)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 48)
	{
		_putchar('0');
		return (0);

	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
