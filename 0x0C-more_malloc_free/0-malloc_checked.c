#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - check malloc
 * @b: size
 * Return: p
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == 0)
		exit(98);
	return (p);
}
