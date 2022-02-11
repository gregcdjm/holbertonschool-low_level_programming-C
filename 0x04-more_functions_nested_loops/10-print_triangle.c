#include "main.h"

/**
* print_triangle - writes the character c to stdout
* @size: vava
* Return: On success 1.
*/

void print_triangle(int size)
{
int a = size;
int b = size;
int c = size;

while (a > 0)
{
for (size = a; size > 1; size--)
{
_putchar(' ');
}
for (b = a; b - 1 < c; b++)
{
_putchar('#');
}
a--;
size = c;
b = c;
_putchar('\n');
}
if (size <= 0)
_putchar('\n');
}
