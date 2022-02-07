#include <stdio.h>
/**
* main - main
* Return: return
*/
int main(void)
{
int a = 48;
int b = 48;
int c = 48;
int d = 49;
while (a < 58)
{
putchar(a);
putchar(b);
putchar(' ');
putchar(c);
putchar(d);
if (a != 57 || b != 56)
{
putchar(',');
putchar(' ');
}
if (b == 56 && c == 57 && d == 57)
{
a++;
b = 48;
c = a;
d = b + 1;
}
else if (c == 57 && d == 57)
{
b++;
c = a;
d = b + 1;
}
else if (d == 57)
{
c++;
d = 48;
}
else
{
d++;
}
}
putchar('\n');
return (0);
}
