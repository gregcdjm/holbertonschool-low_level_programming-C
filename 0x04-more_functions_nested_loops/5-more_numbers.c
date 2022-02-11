#include "main.h"

/**
* more_numbers - writes the character c to stdout
*
* Return: On success 1.
*/

void more_numbers(void)
{

int a;
int b = 0;

while (b < 10)
{
for (a = 0; a <= 14; a++)
{
if ( a >= 10)
{
_putchar(a / 10 + 48);
}
_putchar(a % 10 + 48);
}
b++;
_putchar('\n');
}
}
