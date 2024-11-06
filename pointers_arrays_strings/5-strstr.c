#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring.
 * @needle: substring.
 * @haystack: string.
 * Return: NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (*needle == '\0')
	return (haystack);

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		return (haystack);

		haystack++;
	}

	return ('\0');
}
