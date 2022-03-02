#include "main.h"

/**
 * _strcmp - cat strxsy
 * @s1: argum 1
 * @s2: argum 2
 * Return: dest
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != 0; i++)
	{
		if (s1[i] != s2[i])
		{
			break;
		}
	}
	return (s1[i] - s2[i]);
}
