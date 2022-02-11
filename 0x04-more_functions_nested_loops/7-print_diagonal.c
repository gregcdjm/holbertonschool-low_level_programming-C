#include "main.h"

/**
 * print_diagonal - writes the character c to stdout
* @n: vava
* Return: On success 1.
*/

void print_diagonal(int n)
{
int b = -1, a;

if (n > 0)
{
while (b + 1 > -n)
{
for (a = b + n; a < n; a++)
{
_putchar('.');
}
_putchar('\\');
_putchar('\n');
b--;
}
}
_putchar('\n');
}
