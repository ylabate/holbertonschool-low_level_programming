#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @a: the size of the square
 */

void print_square(int a)
{
	int b;
	int c;

	if (a > 0)
		for (b = 0; b != a; b++)
		{
			for (c = 0; c != a; c++)
				_putchar('#');
			_putchar('\n');
		}
	else
		_putchar('\n');

}
