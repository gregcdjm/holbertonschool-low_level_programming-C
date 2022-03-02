#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - check the code
 * @dest: string
 * @src: n
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i >= 0)
	{
		dest[i] = src[i];
		if (src[i] == 0)
			return (dest);
		i++;
	}
	return (dest);
}
