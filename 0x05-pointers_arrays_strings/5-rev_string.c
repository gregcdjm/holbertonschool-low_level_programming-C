#include "main.h"

/**
 * rev_string - check the code
 * @s: string
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int a = 0, b = 0;
	char c;

	while (s[a] != 0)
		a++;
	while (b < a / 2)
	{
		c = s[b];
		s[b] = s[a - b - 1];
		s[a - b - 1] = c;
		b++;
	}
}
