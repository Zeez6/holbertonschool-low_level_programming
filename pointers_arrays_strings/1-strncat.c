#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strings, using at most n bytes from src
 * @dest: The destination.
 * @src: The source.
 * @n: The maximum number of bytes to use.
 * Return: string dest.
 */

char *_strncat(char *dest, char *src, int n)

{
	char *ptr = dest;
	int i = 0;

	while (*ptr != '\0')
		ptr++;

	while (i < n && src[i] != '\0')
	{
		*ptr = src[i];
		ptr++;
		i++;
	}

	*ptr = '\0';
	return (dest);
}
