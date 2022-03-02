#include "main.h"

/**
 * _strspn - get things
 * @s: string
 * @accept: chars
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b, c = 0;

	for (a = 0; accept[a] != 0; a++)
		for (b = 0; s[b] != 0 && s[b] != ','; b++)
			if (s[b] == accept[a])
				c++;
	return (c);
}
