#include "main.h"

/**
 * swap_int - swap the two entry integer
 * @a: the first number to get swapped
 * @b: the second number to get swapped
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
