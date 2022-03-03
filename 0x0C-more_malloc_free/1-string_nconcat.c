#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - fonction
 * @s1: param
 * @s2: param
 * @n: param
 * Return: rien
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	int size;
	char *s3;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	size = i + n + 1;

	s3 = malloc(sizeof(char) * size);

	if (s3 == 0)
		return (NULL);

	for (i = 0; s1[i] != 0; i++)
		s3[i] = s1[i];
	for (j = 0; j < n; j++)
		s3[i + j] = s2[j];
	s3[i + j] = '\0';
	return (s3);
}
