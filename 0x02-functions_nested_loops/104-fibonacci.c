#include <stdio.h>

/**
 * main - main
 * Return: return
 */

int main(void)
{
	unsigned long C = 0, Axx00, A00xx, Bxx00, B00xx, Cxx00, C00xx;

	Axx00 = 2, A00xx = 0, Bxx00 = 1, B00xx = 0;
	printf("1, \n2, \n");
	while (C <= 97)
	{
		Cxx00 = Axx00 + Bxx00;
		C00xx = A00xx + B00xx;
		if (Cxx00 > 1000)/*Here we add 1 to the right group numbers*/
		{/*               if the left group numbers > 1000*/
			C00xx = C00xx + 1;
			Cxx00 = Cxx00 - 1000;
		}
		if (C < 13)
			printf("%lu, \n", Cxx00);
		else if (Cxx00 < 100 && C <= 96)
			printf("%lu0%lu, \n", C00xx, Cxx00);
		else if (C <= 96)
		{
			printf("%lu%lu, \n", C00xx, Cxx00);
		} /*             above we print Fn(+1)*/
		Bxx00 = Axx00;/*Here we do Fn(-1) = Fn*/
		B00xx = A00xx;
		A00xx = C00xx;/*Here we do Fn = Fn(+1)*/
		Axx00 = Cxx00;
		C++;
	}
	printf("%lu%lu\n", C00xx, Cxx00);
	return (0);
}
