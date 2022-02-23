#include "main.h"
/**
 * sqr - like the return
 * @n: numb
 * @i: square
 * Return: power 1/2 of x
 */

int sqr(int n, int i)
{
	if (n % i == 0)
		return (1);
	else if (i == n - 1)
		return (1);
	i++;
	return (sqr(n, i));
}

/**
 * is_prime_number - like the return
 * @n: numb
 * Return: power 1/2 of x
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	return (sqr(n, i));
}
