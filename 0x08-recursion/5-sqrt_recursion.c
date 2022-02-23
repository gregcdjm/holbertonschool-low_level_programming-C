#include "main.h"
/**
 * sqr - like the return
 * @n: numb
 * @i: square
 * Return: power 1/2 of x
 */

int sqr(int n, int i)
{
	if (n == i * i)
		return (i);
	else if (n <= i)
		return (-1);
	i++;
	return (sqr(n, i));
}

/**
 * _sqrt_recursion - like the return
 * @n: numb
 * Return: power 1/2 of x
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	return (sqr(n, i));
}
