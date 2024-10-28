#include "main.h"
/**
* more_numbers - prints 10 times the numbers from 0 to 14.
* followed by new line.
* Return : 0.
**/
int more_numbers(void);
{
int number1; number2;
for (number1 = 0; number1 <= 10; number++)

for (number2 = 0; number2 <= 14; number++)
{
if (number2 > 9)
{
_putchar((number2 / 10) + '0');
}
_putchar((number2 % 10) + '0');
}
_putchar(10);
}

