#include "main.h"

/**
 * print_alphabet() - writes the alphabet,in lowercase
 *
 * Return: return
 */

void print_alphabet(void)
{
	char a;
	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
