#include "main.h"

/**
 *_memset - fils the first n bytes
 * @s: pointer to s
 * @b: constant byte
 * @n: the n byte
 * Return: s memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
