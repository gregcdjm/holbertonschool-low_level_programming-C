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
	unsigned int i = 0, j = 0, c;

	if (s1)
	for (; s1[i]; i++)
		;
	if (s2)
	for (; s2[j]; j++)
		;
	a = malloc(sizeof(char) * i + j + 1);
	if (!a)
		return (NULL);
	if (s1)
	for (c = 0; c <= i; c++)
		a[c] = s1[c];
	if (s2)
	for (c = 0; c <= j + i; c++)
		a[c + i] = s2[c];
	return (a);
}
