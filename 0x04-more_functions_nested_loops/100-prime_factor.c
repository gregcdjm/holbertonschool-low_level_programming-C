#include <stdio.h>

/**
* main - writes the character c to stdout
* Return: On success 1.
*/

int main(void)
{
unsigned long A, D;

A = 612852475143;
D = 2;
while (D < 782850)
{
if ((A % D) <= 0)
{
A = A / D;
if (D == 4019)
{
printf("%lu\n" , D);
}
else
printf("%lu, " , D);
}
else
D++;
}
return (0);
}
