#include "main.h"
/**
 * _strstr - Locates a substring
 * @haystack: The string to search in
 * @needle: The substring to locate
 *
 * Return: A pointer to the beginning of the located substring,
 * NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int matching = 0;
	int j;

	for (j = 0; haystack[j] != 0; j++)
	{
		if (needle[0] == haystack[j])
		{
			int i;

			for (i = 1; needle[i] != 0; i++)
			{
				if (needle[i] != haystack[j + i])
				{
					matching = 0;
					break;
				}
				else
					matching = 1;
			}

			if (matching > 0)
				return (&haystack[j]);
		}
	}

	return (0);
}
