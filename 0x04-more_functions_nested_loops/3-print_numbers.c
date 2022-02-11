#include "main.h"

/**
* _isdigit - writes the character c to stdout
* @c: The character to print
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
return (0);
}
