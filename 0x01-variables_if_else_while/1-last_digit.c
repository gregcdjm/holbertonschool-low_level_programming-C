#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - main
* Return: return
*/
int main(void)
{
int n;
int a;

srand(time(0));
n = rand() - RAND_MAX / 2;
a = n % 10;
  /*you*/
if (n == 0)
{
printf("Last digit of %d is %d and is zero\n", n, a);
}
if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, a);
}
if (n < 6 && n != 0)
{
printf("Last digit of %d is %d and is less than 6 and 0\n", n, a);
}
return (0);
}
