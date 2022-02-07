#include <stdio.h>

/**
* main - main
* Return: return
*/
int main(void)
{
int g = 48;
int d = 49;
int dd = 48;
while (dd < 56)
{
putchar(dd);
putchar(g);
putchar(d);
if (dd < 56)
{
putchar(',');
putchar(' ');
}
if (g == 56)
{
dd++;
g = dd + 1;
d = g + 1;
}
else if (d == 57)
{
g++;
d = gg +1;
}
else
{
d++;
}
}
putchar('\n');
return (0);
}
