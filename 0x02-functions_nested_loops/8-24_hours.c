#include "main.h"

/**
* main - main
* Return: return
*/

int main(void)
{
	int a = 48;
	int b = 48;
	int c = 48;
	int d = 48;

	while (a != 3)
	{
		_putchar(a);
		_putchar(b);
		_putchar(':');
		_putchar(c);
		_putchar(d);
		_putchar('\n');
		if (b == 51 && c == 53 && d == 57)
		{
			a++;
			b = 48;
			c = 48;
			d = 48;
		}
		else if (c == 53 && d == 57)
		{
			b++;
			c = 48;
			d = 48;
		}
		else if (d == 57)
		{
			c++;
			d = 48;
		}
		else
		{
			d++;
		}
	}
	
return (0);
}
