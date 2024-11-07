#include "main.h"

/**
 * _puts_recursion - function that print string with recursion.
 * @s: pointerto the string
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
