#include "main.h"

/**
 * _sqrt_recursion - function return the natural square root of numb.
 * sqrt_helper - recursive function that does the real computational work.
 * @n: number calculate square root.
 * @i: estimate.
 * Return: natural square.
 */

int _sqrt_recursion(int n)
{
	return sqrt_helper(n, 1);
}

int sqrt_helper(int n, int i)
{
	if (i * i == n)
	{
	return i;
	}
	if (i * i > n)
	{
		return -1;
	}
	return sqrt_helper(n, i + 1);
}
