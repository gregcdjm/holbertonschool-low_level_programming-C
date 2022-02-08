#include "main.h"

/**
 * print_last_digit - check if it's lower
 * @n: ok bla bla
 * Return: return
 */

int print_last_digit(int n)
{
	if ( n >= 0)
	{
		n = n % 10;
		_putchar(n);
		return (n);
	}
	else
	{
		n = -n;
		n = n % 10;
		_putchar(n);
		return(n);
	}
}
