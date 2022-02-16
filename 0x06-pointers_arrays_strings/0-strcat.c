#include "main.h"

/**
 * strcat - cat str
 * @dest: argum 1
 * @src: argum 2
 * Return - dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (dest[a] != 0)
		a++;
	while (b != 0)
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a + 1] = '\0';
	return (dest);
}
