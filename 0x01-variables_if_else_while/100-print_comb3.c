#include <stdio.h>

/**
* main - main
* Return: return
*/
int main(void)
{
int g = 0;
int d = 1;
while (d == 8 && g == 9)
{
if (d==9)
{
g = g + 1;
d = g + 1;
putchar(g);
putchar(d);
putchar(',');
putchar(' ');
}
else
{
d = d + 1;
putchar(g);
putchar(d);
putchar(',');
putchar(' ');
}
}
 
putchar('\n');
 
return (0);
}
