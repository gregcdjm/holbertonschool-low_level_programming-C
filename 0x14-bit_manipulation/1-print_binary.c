#include "main.h"

/**
 * print_binary - binaire to unit
 * @n: chaîne de int
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int i = 1, j = 0;

	if (n == 0)
		printf("0");
	else if (n == 1)
		printf("1");
	else
	{
		while (i <= n)
			i *= 2, j++;
		i /= 2;
		while ((n != 0 && i != 0) || j)
		{
			if (i <= n)
				n -= i, printf("1");
			else
				printf("0");
			i /= 2;
			j--;
		}
	}
}
