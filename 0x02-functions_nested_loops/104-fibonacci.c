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
	unsigned long F0 = 1;
	unsigned long F1 = 2;
	unsigned long Fn;
	int C = 0;

	printf("%lu, ",F0);
        printf("%lu, ",F1);
	while (C <= 98)
	{
		Fn = F1 + F0;
		F0 = F1;
		F1 = Fn;
		printf("%lu, ",Fn);
		C++;
	}
	return (0);
}
