#include "main.h"
/**
* print_line - function draws line in terminal.
* @n: Number of times.
* Return : 0
**/

void print_line(int n)
{
int i;

if (n <= 0)
{
_putchar('\n');

}
else
{
for (i = 0; i < n; i++)
{
_putchar(95);
}
_putchar('\n');
}
}
