#include "main.h"

/**
 * puts2 - function print every other character of string.
 * @s: This pointer point to a char or string
 *
 */

void puts2(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(s[a]);
		}
	}
	_putchar('\n');
}
