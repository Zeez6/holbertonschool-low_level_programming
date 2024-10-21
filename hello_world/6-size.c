#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main (void)
{
printf("sizeof(int)       = %d\n", sizeof(4));
printf("sizeof(float)     = %d\n", sizeof(4));
printf("sizeof(double)    = %d\n", sizeof(8));
printf("sizeof(char)      = %d\n", sizeof(1));
printf("sizeof(167)       = %d\n", sizeof(4));
printf("sizeof(3.1415926) = %d\n", sizeof(8));
printf("sizeof('$')       = %d\n", sizeof(4));

return (0);
}
