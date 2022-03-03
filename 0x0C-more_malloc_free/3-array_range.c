#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - fonction
 * @min: param
 * @max: param
 * Return: 0
 */

int *array_range(int min, int max)
{
	int *p;
	int i;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	if (p == 0)
		return (NULL);

	for (i = min; i <= max; i++)
		p[i - min] = i;
	return (p);
}
