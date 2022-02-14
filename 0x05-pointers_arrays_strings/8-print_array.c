#include "main.h"
#include <stdio.h>

/**
 * print_array - check the code
 * @a: string
 * @n: n
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n - 1; b++)
	{
		printf("%d, ", a[b]);
	}
	printf("%d\n", a[b]);
}
