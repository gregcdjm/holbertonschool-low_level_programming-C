#include "main.h"

/**
 * times_table - tanleau
 *
 * Return: return
 */

void times_table(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (i * j / 10 > 0)
				_putchar(i * j / 10 + 48);
			_putchar(i * j % 10 + 48);
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (i * (j + 1) < 10 && ((j != 9) || (i != 0)))
				_putchar(' ');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
