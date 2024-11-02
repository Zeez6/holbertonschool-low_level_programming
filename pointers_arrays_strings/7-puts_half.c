#include "main.h"

/**
 *  puts_half - function print half of string.
 * @str: The input string.
 */

void puts_half(char *str)
{
	int i, a;

	i = 0;
	{
		while (str[i] != '\0')
		i++;
	}
	a = i / 2;
	{
		if (i % 2 == 1)
		a++;
	}

		while (a < i)
		{
			_putchar(str[a]);
			a++;
		}
		_putchar('\n');
}
