#include "main.h"

/**
 * _strncpy - cat strxsy
 * @dest: argum 1
 * @src: argum 2
 * @n: argum 3
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *dest0 = dest;
	int i;

	for (i = 0; i < n; i++)
	{
		if (*src)
		{
			*dest = *src;
			dest++;
			src++;
		}
		else
		{
			*dest = '\0';
			dest++;
		}
	}
	return (dest0);
}
