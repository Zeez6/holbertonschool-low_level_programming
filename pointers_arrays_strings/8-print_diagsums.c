#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals of a square matrix of integers.
 * @a: pointer.
 * @size: size.
 * Return: .
 */

void print_diagsums(int *a, int size)
{
	int diagA = 0;
	int diagB = 0;
	int i;
	for (i = 0; i < size; i++)
	{
		diagA += a[i * size + i];
		diagB += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", diagA, diagB);
}
