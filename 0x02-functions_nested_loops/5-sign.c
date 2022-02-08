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
		return (1);
		_putchar('+');
	}
	else if (n == 48)
	{
		return (0);
		_putchar('0')
	}
	else
	{	return (-1);
		_putchar('-');
	}
}
