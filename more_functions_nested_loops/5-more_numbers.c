#include "main.h"
/**
* more_numbers - prints 10 times the numbers from 0 to 14.
* followed by new line.
* Return : always 0.
**/
int more_numbers(void);
{
int number;
for (number = '0'; number <= "14"; number++)
putchar(number++);
putchar(number);
putchar('\n');
}
