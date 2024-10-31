#include<string.h>
#include <stdio.h>

/**
 * int_strlen - function return length of a string.
 * @s: pointer.
 * Return: 0.
 */
int int_strlen(char *s)
{
	char str[500] = "My first strlen!";

	int len = strlen(str);
	{
		printf("Length of the String is %d", len);
	}
	return (0);
}
