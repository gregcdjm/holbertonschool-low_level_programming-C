#include "main.h"

/**
 * print_last_digit - check if it's lower
 * @n: ok bla bla
 * Return: return
 */

int print_last_digit(int n)
{
	int x;
	int y;
	if ( n >= 0)
	{
		x = n % 10;
		_putchar(x);
	}
	else
	{
		y = -n;
		x = y % 10;
		_putchar(x);
	}
return(0);
}
