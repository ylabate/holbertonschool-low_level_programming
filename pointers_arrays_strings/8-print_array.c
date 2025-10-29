#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: the array to print
 * @n: the number of elements to print
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
