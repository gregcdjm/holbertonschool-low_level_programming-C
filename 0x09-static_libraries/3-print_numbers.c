#include "main.h"

/**
* print_numbers - writes the character c to stdout
*
* Return: On success 1.
*/

void print_numbers(void)
{

int a;

for (a = 0; a <= 9; a++)
{
_putchar(a + 48);
}
_putchar('\n');
}
