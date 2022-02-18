#include "main.h"
/**
 * print_number - print
 * @n: argum
 * Return: return
 */

void print_number(int n)
{
	int Div = 1;

	if (n == 0)
		_putchar(48);
	else if (n < 0)
	{
		_putchar(45);
		n = n * -1;
	}
	while (n / Div * 10 != 0)
		Div = Div * 10;
	Div /= 10;
	while (Div > 0)
	{
		_putchar((n / Div) + 48);
		n = n % Div;
		Div = Div / 10;
	}
}
