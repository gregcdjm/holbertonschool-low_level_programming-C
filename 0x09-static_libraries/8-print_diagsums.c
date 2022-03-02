#include <stdio.h>

/**
 * print_diagsums - Print the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: The square
 * @size: The size of the square
 */

void print_diagsums(int *a, int size)
{
	int i;
	int res = 0;

	for (i = 0; i < size; i++)
	{
		res += a[i * size + i];
	}
	printf("%d, ", res);

	res = 0;
	for (i = 0; i < size; i++)
	{
		res += a[(size - 1) * (i + 1)];
	}
	printf("%d\n", res);
}
