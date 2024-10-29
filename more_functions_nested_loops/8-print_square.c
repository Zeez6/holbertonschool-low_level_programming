#include "main.h"

/**
 * print_square - function print square on terminal.
 * @size: number of times.
 * Return: 0.
 */

void print_square(int size)
{
	int c, i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (c = 0; c < size; c++)
	{
	for (i = 0; i < size; i++)
	{
	_putchar('#');
	}
	_putchar('\n');
}
}
