#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - g
 * @s: string
 * Return: string
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return(_strlen_recursion(s + 1) + 1);
	return (0);
}
