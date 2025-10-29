#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: the string to print
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i != n; i++)
	{
		printf("%i", a[i]);
		if (i != (n - 1))
			printf(", ");
	}
printf("\n");
}
