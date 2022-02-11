#include "main.h"

/**
 * _isupper - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 */
int _isupper(int c)
{
  if (c >= 65 && c <=90)
    return (1);
  else
    return (0);
}
