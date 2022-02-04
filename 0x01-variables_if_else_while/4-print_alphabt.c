#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - main
* Return: return
*/
int main(void)
{
int ch;
int hc;
int chc;
for (ch = 'a'; ch <= 'd'; ch++)
for (hc = 'f'; hc <= 'q'; hc++)
for (chc = 'r'; chc <= 'z'; chc++)
putchar(ch,hc,chc);
puts("");
return (0);
}
