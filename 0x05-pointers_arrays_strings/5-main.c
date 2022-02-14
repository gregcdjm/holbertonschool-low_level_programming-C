#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[10] = "My School";

	printf("%s", s);
	rev_string(s);
	printf("%s", s);
	return (0);
}
