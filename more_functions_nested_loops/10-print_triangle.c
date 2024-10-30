#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: size of the triangle.
 */

void print_triangle(int size)
{
	int c, i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (c = 1; c <= size; c++)
	{
		for (i = 0; i < size - c; i++)
		{
			_putchar(' ');
		}
		for (i = 0; i < c; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
