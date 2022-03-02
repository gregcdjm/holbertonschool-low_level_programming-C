#include "main.h"

/**
* leet - ok
* @str: oka
*
* Return: str
*/

char *leet(char *str)
{
	int i;
	int j;
	int min_char[] = {97, 101, 111, 116, 108};
	int maj_char[] = {65, 69, 79, 84, 76};
	int leet_num[] = {52, 51, 48, 55, 49};

	for (i = 0; str[i] != 0; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == min_char[j] || str[i] == maj_char[j])
				str[i] = leet_num[j];
		}
	}
	return (str);
}
