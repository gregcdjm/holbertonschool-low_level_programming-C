#include "main.h"

/**
 * print_square - writes the character c to stdout
* @n: vava
* Return: On success 1.
*/

void print_square(int n)
{
    int a = n;

    while (a > 0)
    {
    for (n = n; n > 0; n--)
    {
	putchar('#');
    }
    a--;
    }
_putchar('\n');
}
