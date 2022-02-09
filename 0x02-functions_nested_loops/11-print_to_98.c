#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - check if it's lower
 * @n: 1st ereg
 * Return: return
 */

void print_to_98(int n)
{
	if (n == 98)
	{
		printf("98\n");
	}
	if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
			printf("%d",n);
			if (n != 98)
			{
				printf(", ");
			}
		}
		putchar('\n');
	}
	if (n > 98)
	{
		for (n = n; n >= 98; n--)
		{
			printf("%d",n);
			if (n != 98)
				printf(", ");
		}
	}

}
