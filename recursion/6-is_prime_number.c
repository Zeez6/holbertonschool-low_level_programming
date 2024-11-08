#include "main.h"

/**
 * is_prime_nummber - main function.
 * check_prime - function recursive.
 * @n: number to divide.
 * Return: 0.
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

int check_prime(int n, int divisor)
{
	if (n <= 1)
	{
	   return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	if (divisor * divisor > n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (check_prime(n, divisor + 2));
}
