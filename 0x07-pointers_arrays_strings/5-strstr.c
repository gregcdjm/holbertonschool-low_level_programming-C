#include "main.h"
/**
 * _strstr - substring
 * @haystack: string
 * @needle: locate
 * Return: A pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int matching = 0, j;

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
