#include "main.h"

/**
 * _strncat - cat str
 * @dest: argum 1
 * @src: argum 2
 * @n: argum 3
 * Return:  dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0, c = 0;

	while (dest[a] != 0)
		a++;
	while (src[b] != 0)
		b++;
	while (n > 0 && src[c] != 0)
	{
		n = n - sizeof(src[c]);
		dest[a] = src[c];
		c++;
		a++;
	}
	return (dest);
}
