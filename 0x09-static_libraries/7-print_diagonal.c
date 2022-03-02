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
for (a = b + n; a < n - 1; a++)
{
_putchar(' ');
}
_putchar('\\');
b--;
if (b >= -n)
_putchar('\n');
}
}
_putchar('\n');
}
