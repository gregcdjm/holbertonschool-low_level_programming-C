#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

void main(void)
{
        int i;

        printf("Infinite loop incoming :(
");

        i = 0;

        while (i < 10)
        {
                putchar(i);
        }

        printf("Infinite loop avoided! \o/
");

        return (0);
}