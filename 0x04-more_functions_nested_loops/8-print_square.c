#include "main.h"

/**
* print_square - writes the character c to stdout
* @size: vava
* Return: On success 1.
*/

void print_square(int size)
{
int a = size;
int b = size;

while (a > 0)
{
for (size = b; size > 0; size--)
{
_putchar('#');
}
a--;
_putchar('\n');
}
}
