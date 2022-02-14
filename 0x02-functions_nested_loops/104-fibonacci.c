#include <stdio.h>

/**
 * main - main
 * Return: return
 */

int main(void)
{
	unsigned long C = 0, Axx00, A00xx, Bxx00, B00xx, Cxx00, C00xx;

	Axx00 = 2, A00xx = 0, Bxx00 = 1, B00xx = 0, printf("1, 2, ");
	while (C <= 95)
	{
		Cxx00 = Axx00 + Bxx00, C00xx = A00xx + B00xx;
		if (Cxx00 > 1000)
			C00xx = C00xx + 1, Cxx00 = Cxx00 - 1000;
		if (C < 13)
			printf("%lu, ", Cxx00);
		else if (Cxx00 < 100 && C <= 94)
		{
			printf("%lu", C00xx), putchar(48);
			printf("%lu, ", Cxx00);
		}
		else if (C <= 94)
		{
			printf("%lu%lu, ", C00xx, Cxx00);
		}
		Bxx00 = Axx00, B00xx = A00xx, A00xx = C00xx;
		Axx00 = Cxx00, C++;
	}
	printf("%lu%lu\n", C00xx, Cxx00);
	return (0);
}
