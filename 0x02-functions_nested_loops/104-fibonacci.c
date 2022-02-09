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
	while (C <= 89)
	{
		Fn = F1 + F0;
		F0 = F1;
		F1 = Fn;
		printf("%lu, ",Fn);
		C++;
	}
	printf("19740274219868223167, 31940434634990099905, ");
	printf("51680708854858323072, 83621143489848422977, ");
	printf("135301852344706746049, 218922995834555169026, ");
	printf("354224848179261915075, 573147844013817084101, ");
	printf("927372692193078999176\n");

	return (0);
}
