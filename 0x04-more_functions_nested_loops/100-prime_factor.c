#include <stdio.h>

/**
* main - writes the character c to stdout
* Return: On success 1.
*/

int main(void)
{
	long int  A = 612852475143, D = 2;

	while (A > D)
	{
		if ((A % D) == 0)
			A = (A / D);
		else
		{
			D++;
		}
	}
	printf("%ld\n", A);
	return (0);
}
