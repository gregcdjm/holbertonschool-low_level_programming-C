#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 *
 * @haystack: The string
 * @needle: The substring
 *
 * Return: The pointer of the first occurence of the needle
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i]; i++)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			for (j = 1; needle[j]; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
			}

			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
	}

	return (0);
}
