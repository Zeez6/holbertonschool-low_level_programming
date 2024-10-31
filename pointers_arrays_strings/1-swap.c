#include "main.h"
#include <stdio.h>

/**
 * swap_int - main function.
 * @a: parameter.
 * @b: parameter.
 */

void swap_int(int *a, int *b)

{
	int temp = *a;
	*a = *b;
	*b = temp;
}
