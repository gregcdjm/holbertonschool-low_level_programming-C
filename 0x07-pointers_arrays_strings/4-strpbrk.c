#include "main.h"

/**
 * _strpbrk - get things
 * @s: string
 * @accept: chars
 * Return: length
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;
	char *c;

	for (a = 0; accept[a] != 0; a++)
	{
		c = &s[a];
		for (b = 0; s[b] != 0 && s[b] != ','; b++)
			if (s[b] == accept[a])
				return (c);
	}
	if (accept[a] == 0)
		return (c);
	return ('\0');
}
