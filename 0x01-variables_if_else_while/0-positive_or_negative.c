#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*more*/
/*lll*/int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
  /*you*/
if (n == 0)
{
printf("%d is zero\n", n);
}
if (n > 0)
{
printf("%d is positive\n", n);
}
if (n < 0)
{
printf("%d is negative\n", n);
}
return (0);
}
