#include "main.h"

/**
 * _puts - Print string.
 * @str: pointer the string to print.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
