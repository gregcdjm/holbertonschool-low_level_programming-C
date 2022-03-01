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
	unsigned int i, j;

	if (str == 0)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	a = malloc(sizeof(char) * i + 1);
	if (a == 0)
		return (NULL);
	for (j = 0; j < i; j++)
		a[j] = str[j];
	return (a);
}
