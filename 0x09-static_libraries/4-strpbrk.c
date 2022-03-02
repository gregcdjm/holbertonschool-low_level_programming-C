#include "main.h"

/**
 * _strpbrk - get things
 * @s: string
 * @accept: chars
 * Return: length
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b = 0;
	char *c;

	for (a = 0; s[a] != 0; a++)
	{
		c = &s[a];
		for (b = 0; accept[b] != 0; b++)
			if (s[a] == accept[b])
				return (c);
	}
	return ('\0');
}
