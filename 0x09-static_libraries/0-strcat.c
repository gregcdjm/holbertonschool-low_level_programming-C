#include "main.h"

/**
 * _strcat - cat str
 * @dest: argum 1
 * @src: argum 2
 * Return: - dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0, c = 0;

	while (dest[a] != 0)
		a++;
	while (src[b] != 0)
		b++;
	while (b >= c)
	{
		dest[a] = src[c];
		c++;
		a++;
	}
	return (dest);
}
