#include <stdio.h>

/*nooo*/int/*no descrit*/ main(void)/*no desciption found*/
{
gcc 6-size.c -m32 -o size32 2> /tmp/32
gcc 6-size.c -m64 -o size64 2> /tmp/64
return (0);
}
