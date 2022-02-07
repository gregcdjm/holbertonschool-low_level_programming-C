#include <stdio.h>

/**
* main - main
* Return: return
*/
int main(void)
{
int g = 48;
int d = 49;
while (g < 57)
{
putchar(g);
putchar(d);
if (g < 56)
{
putchar(',');
putchar(' ');
}
if (d == 57)
{
g++;
d = g + 1;
}
else
{
d++;
}
}
putchar('\n');
return (0);
}
