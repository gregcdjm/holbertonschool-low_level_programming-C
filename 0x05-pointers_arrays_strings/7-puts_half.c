#include "main.h"

/**
 * puts_half - check the code
 * @str: string
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int a = 0, b = 0;

	while (str[a] != 0)
		a++;
	a = a;
	b = a;
	if (a % 2 == 0)
		for (a = (a / 2); a != b; a++)
		{
			_putchar(str[a]);
		}
	else
	{
		for (a = (a + 1 / 2); a != b; a++)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
