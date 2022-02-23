#include "main.h"
/**
 * factorial - fact of n
 * @n: number
 * Return: fact of n
 */
int factorial(int n)
{
	if (n > 0)
		return (n*factorial(n - 1));
	else if (n == 0)
		return (1);
	else
		return (-1);
}
