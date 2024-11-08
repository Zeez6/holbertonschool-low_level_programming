#include "main.h"

/**
 * is_prime_number - Checks if a number is prime.
 * @n: number to check.
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - Recursively checks if a number is prime.
 * @n: number to check.
 * @divisor: current divisor to check.
 * Return: 1 if prime, 0 otherwise.
 */

int check_prime(int n, int divisor)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if (n % 2 == 0)
		return (0);
	if (divisor * divisor > n)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (check_prime(n, divisor + 2));
}
