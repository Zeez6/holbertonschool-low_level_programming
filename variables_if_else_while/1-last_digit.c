#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Description: Prints a specific message to stdout using puts.
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
int lastdigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastdigit = n % 10;

if (last digit of > 5)
{
printf("Last digit of %d is %d and is greather than 5\n", n, lastdigit);
}
else if (last digit of == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastdigit);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);
}
return (0);
}
