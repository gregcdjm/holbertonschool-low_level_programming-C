#include "main.h"

/**
* _isdigit - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
*/

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
