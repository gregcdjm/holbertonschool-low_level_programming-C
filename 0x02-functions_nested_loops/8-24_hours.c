#include "main.h"

/**
 * jack_bauer - programm print[Time]
 *
 * Return: return
 */

void jack_bauer(void)
{
	int h = 00;
	int m = 0;

	for (m = 0; m <= 59; m++)
	{
		_putchar(h / 10 + 48);
		_putchar(h % 10 + 48);
		_putchar(':');
		_putchar(m / 10 + 48);
		_putchar(m % 10 + 48);
		_putchar('\n');
		if (m == 59 && h != 23)
		{
			h++;
			m = -1;
		}
	}
}
