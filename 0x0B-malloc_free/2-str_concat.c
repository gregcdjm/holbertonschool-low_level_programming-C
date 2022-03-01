#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concat array
 * @s1: fst array
 * @s2: snd array
 * Return: pointer of s1+s2 or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	unsigned int i, j, c;

	if (!s1 || !s2)
		return (NULL);
	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;
	a = malloc(sizeof(char) * i + j + 1);
	if (!a)
		return (NULL);
	for (c = 0; c < i; c++)
		a[c] = s1[c];
	for (c = 0; c < j + i; c++)
		a[c + i] = s2[c];
	return (a);
}
