#include "main.h"
/**
*print_last_digit - print last digit of number
*@r: the number given
*Return: the last digit stored in the variable i
*/
int print_last_digit(int r)
{
int i = r % 10;
if (i < 0)
{
i = i * -1;
}
_putchar('0' + i);
return (i);
}
