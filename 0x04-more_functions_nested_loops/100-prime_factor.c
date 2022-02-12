#include <stdio.h>

/**
* main - writes the character c to stdout
* Return: On success 1.
*/

int main(void)
{
unsigned long A, D, B;

A = 612852475143;
D = 2;
while (D < 50829599)
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
printf("%lu\n" , B);
putchar('\n');
return (0);
}
