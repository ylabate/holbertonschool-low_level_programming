#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the square matrix
 * @size: size of the matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int diag1 = 0, diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag1 = (diag1 + *(a + (i * size) + i));
		diag2 = (diag2 + *(a + (i * size) + size - i - 1));
	}
	printf("%i, %i\n", diag1, diag2);
}
