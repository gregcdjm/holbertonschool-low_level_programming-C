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

	if (str[0] == '\0')
		return (NULL);
	for (i = 0; str[i]; i++)
	a = malloc(i * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		a[j] = str[j];
	return (a);
}
