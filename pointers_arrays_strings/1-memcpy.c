#include "main.h"
#include <stdio.h>

/**
 * _memcpy - function that copies memory area.
 * @n: bytes.
 * @src:source.
 * @dest: destination.
 * Return: pointer dest.
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
