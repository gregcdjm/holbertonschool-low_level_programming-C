#include <stdio.h>

/**
 * main - main
 * @Fn: Toujours égal à F0+F1
 * @F0: Toujours égal à
 * @F1: Toujours
 * @C: Toujours
 * Return: return
 */

int main(void)
{
	int F0 = 1;
	int F1 = 2;
	int Fn;
	int C = 0;

	printf("%d, ",F0);
        printf("%d, ",F1);
	while (C <= 98)
	{
		Fn = F1 + F0;
		F0 = F1;
		F1 = Fn;
		printf("%d, ",Fn);
		C++;
	}
	return (0);
}
