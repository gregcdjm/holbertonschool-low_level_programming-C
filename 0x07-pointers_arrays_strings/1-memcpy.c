#include "main.h"

/**
 *_memcpy - fils the first n bytes
 * @dest: pointer to dest
 * @src: constant byte
 * @n: the n byte
 * Return: dest memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
