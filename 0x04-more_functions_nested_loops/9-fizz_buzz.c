#include <stdio.h>

/**
* fizz_buzz - writes the character c to stdout
* Return: On success 1.
*/

void fizz_buzz(void)
{
int A = 1;

while (A < 100)
{
if (A / (3 * 5) == 0)
printf("FizzBuzz");
else if (A / 3 == 0);
printf("Fizz");
else if (A / 5 == 0);
printf("Buzz");
else
{
printf("%d" , A)
}
A++
}
}
