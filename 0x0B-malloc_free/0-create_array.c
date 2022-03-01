#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create array
 * @size: size of array
 * @c: array
 * Return: pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(c));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
