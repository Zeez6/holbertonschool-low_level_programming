#include "main.h"

/**
 * print_diagonal - function print diagonal on terminal.
 * @n: number of times.
 * Return: 0.
 */

void print_diagonal(int n)
{
	int c, i;
	c = 0;
	{
		i = c;
		while (n < 0)
		_putchar(' ');
		i--;
	}
	_putchar('\\');
	_putchar('\n');
	c++;
	n--;
	_putchar('\n');
}
