#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - copy array
 * @str: pointer of array
 * Return: pointer or NULL
 */
char *_strdup(char *str)
{
	char *a;
	unsigned int i;
	unsigned int j;

	for (i = 0; str[i]; i++)
	{
	}
	if (i == 0)
		return (NULL);
	a = malloc(i * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		a[j] = str[j];
	return (a);
}
