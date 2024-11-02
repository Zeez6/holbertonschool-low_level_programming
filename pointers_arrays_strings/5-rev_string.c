#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: The string to reverse.
 * Return: nothing.
 */

void rev_string(char *s)
{
	int i = 0, length = 0;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}
	length--;

	while (i < length)
	{
		temp = s[i];
		s[i] = s[length];
		s[length] = temp;
		i++;
		length--;
	}
}
