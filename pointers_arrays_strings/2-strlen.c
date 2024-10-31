#include<string.h>
#include <stdio.h>

/**
 * _strlen - function return length of a string.
 * @s: pointer.
 * @len: length.
 * Return: 0.
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
