#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates character in a string.
 * @s: the string.
 * @c: first occurence of the character.
 * Return: 0.
 */

char *_strchr(char *s, char c)
{
	int i;
	{
	for (i = 0; s[i] != '\0'; i++)
	if (s[i] == c)
	return (s + i);
	}

	if (c == '\0')
	return (s + i);
	return ('\0');
}
