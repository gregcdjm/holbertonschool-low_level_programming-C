#include "main.h"

/**
* rot13 - ok
* @str: oka
*
* Return: str
*/

char *rot13(char *str)
{
	int i;
	int j;

	for (i = 0; str[i] != 0; i++)
	{
		str[i] += 13;
		if (str[i] > 122 && str[i] > 96)
			str[i] -= 26
	}
	return (str);
}
