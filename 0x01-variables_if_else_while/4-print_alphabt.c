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
for (ch = 'a'; ch <= 'd'; ch++)
for (ch = 'f'; ch <= 'q'; ch++)
for (ch = 'r'; ch <= 'z'; ch++)
putchar(ch);
puts("");
return (0);
}
