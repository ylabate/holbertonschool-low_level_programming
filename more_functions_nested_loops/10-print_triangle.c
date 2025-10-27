#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: the size of the square
 */

 void print_triangle(int n)
 {
	int a;
	int b;

	if (!(n <= 0))
		for (a = n; a > 0; a--)
		{
			for (b = 0; b < n; b++)
			{
				if (b < (a - 1))
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	else
		_putchar('\n')
 }