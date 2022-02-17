#include "main.h"

/**
 * cap_string - check the code
 * @s: ok
 * Return: Always 0.
 */
char *cap_string(char *s)
{
	int i;
	int isworld = 1;

	for (i = 0; s[i] != 0; i++)
	{
		if (isworld == 1 && s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
		if (
			s[i] == '\n' ||
			s[i] == '\t' ||
			s[i] == ' ' ||
			s[i] == ',' ||
			s[i] == ';' ||
			s[i] == '.' ||
			s[i] == '!' ||
			s[i] == '?' ||
			s[i] == '"' ||
			s[i] == '(' ||
			s[i] == ')' ||
			s[i] == '{' ||
			s[i] == '}')
		{
			isworld = 1;
		}
		else
		{
			isworld = 0;
		}
	}
	return (s);
}
