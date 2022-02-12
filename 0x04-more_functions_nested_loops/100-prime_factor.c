#include <stdio.h>

/**
* main - writes the character c to stdout
* Return: On success 1.
*/

int main(void)
{
long int  A, D, B;

A = 612852475143;
D = 2;
while (D < 782849)
{
if ((A % D) <= 0)
{
A = A / D;
B = D;
}
else
{
D++;
}
}
printf("%ld\n", B);
return (0);
}
