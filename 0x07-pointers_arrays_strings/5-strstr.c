#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: char *haystack
 * @needle: char *needle
 * Return: pointer to the beggining of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int n = 0, m = 0, c = 0, lenght = 0;
	char *b;

	for (m = 0; needle[m + 1] != '\0'; m++)
	length = (m - 1);
	for (n = 0; haystack[n + 1] != '\0'; n++)
	{
		b = &haystack[n];
		for (m = 0; needle[m + 1] != '\0'; m++)
		{
			if (c == length)
				return (b);
			else
			{
				if (haystack[n] == needle[m])
					c++, break;
				else
					c = 0, continue;
			}
		}
	}
	return ('\0');
}
