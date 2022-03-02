#include "main.h"

/**
* print_most_numbers - writes the character c to stdout
*
* Return: On success 1.
*/

void print_most_numbers(void)
{

int a;

for (a = 0; a <= 9; a++)
{
if (a <= 9 && a != 2 && a != 4)
_putchar(a + 48);
}
_putchar('\n');
}
