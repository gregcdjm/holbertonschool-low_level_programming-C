#include "main.h"

/**
 * print_last_digit - check if it's lower
 * @n: ok bla bla
 * Return: return
 */

int print_last_digit(int n)
{
	n = n % 10;
	if (n > 0)
	{
		_putchar(n + 48);
		return (n);
	}
	else
	{
		_putchar (-n + 48);
		return (-n);
	}
}
