#include <stdio.h>
#include <math.h>

/**
* main - writes the character c to stdout
* Return: On success 1.
*/

int main(void)
{
unsigned long A, D, B;
float s;

A = 612852475143;
D = 2;
s = sqrt(612852475143);
while (D < s)
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
return (0);
}
