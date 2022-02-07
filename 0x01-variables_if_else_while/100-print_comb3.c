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
  
putchar(g);
putchar(d);
putchar(',');
putchar(' ');
 
if (d == 9)
{
g++;
d = g + 1;
}
else
{
d++;
}
}
return (0);
}
