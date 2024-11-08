#include <stdio.h>
#include "main.h"

/**
 * _memcpy - Copies memory area.
 * main - main function.
 * @dest: Destination.
 * @src: Source.
 * @n: Number.
 * Return: Pointer destination.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
