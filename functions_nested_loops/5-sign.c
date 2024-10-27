#include "main.h"
/**
*print_sing - check fir int n relative to 0.
*@n: Character to check.
*Return : 1 if "n" > 0
*0 if "n" == > 0
*-1 if "n" < 0
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
