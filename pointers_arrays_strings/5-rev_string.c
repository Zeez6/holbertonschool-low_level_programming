#include "main.h"

/**
 * rev_string - function that reverse a string.
 * @s: Function to reverse a string.
 * Return: nothing.
 */

void rev_string(char *s)
{
	int i, j;
	char gisele[500];

	j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i = 0; i < j; i++)
	{
		gisele[i] = s[i - 1 - i];
	}
	gisele[i] = '\0';
	for (i = 0; i < j; i++)
	{
		s[i] = gisele[i];
	}
}
