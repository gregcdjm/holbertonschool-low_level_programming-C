#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - fonction
 * @size: param
 * @nmemb: param
 * Return: rien
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == 0)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;
	return (p);
}
