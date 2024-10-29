#include "stdio.h"

/**
 * print_square - print square on terminal.
 * @num: number.
 * Return: 0.
 */

int main(void)
{
	int num;

	for (num = 0; num <= 100; num++)
	printf("%d", num);
	{
	if (num % 3 == 0)
	printf("Fizz");
	}
	if (num % 5 == 0)
	printf("Buzz");
	{
		else (num % 5 == 0 && num % 3 == 0)
		printf("FizzBuzz");
	}
	printf("%d", num);
}