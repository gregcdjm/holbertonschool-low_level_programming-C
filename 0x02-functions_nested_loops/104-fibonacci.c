#include <stdio.h>

/**
 * main - main
 *
 * @Fn: Toujours égal à F0+F1
 * @F0: Toujours égal à
 * @F1: Toujours
 * @C: Toujours
 *
 * Return: return
 */

int main(void)
{
	unsigned long F0 = 1;
	unsigned long F1 = 2;
	unsigned long Fn;
	int C = 0;

	printf("%lu, ", F0);
	printf("%lu, ", F1);
	while (C <= 89)
	{
		1Fxx00 = F1 % 100;
		1F11xx = F1 / 100;
		0Fxx00 = F0 % 100;
		0F11xx = F0 / 100;
		1F0Fxx00 = 1Fxx00 + 0Fxx00;
		1F0F00xx = 1F00xx + 0F00xx;
		if (1F0Fxx00 > 100)
		{
			1F0F00xx = 1F0F00xx + 1;
			1F0Fxx00 = 1F0Fxx00 - 100;
		}
		FN = 1F0F00xx + 1F0Fxx00;
		F0 = 0Fxx00 = 
		
		Fn = F1 + F0;
		F0 = F1;
		F1 = Fn;
		printf("%lu, ", Fn);
		C++;
	}
	add_2();
	return (0);
}
