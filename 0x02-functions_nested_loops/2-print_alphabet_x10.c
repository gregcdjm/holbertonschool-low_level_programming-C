#include "main.h"

/**
 * print_alphabet_x10 - programm print[a..z]x10
 *
 * Return: return
 */

void print_alphabet_x10(void)
{
	char a;
	int i = 48;
	while (i < 58)
	{
		for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
		i++;
	}
	_putchar('\n');
}
