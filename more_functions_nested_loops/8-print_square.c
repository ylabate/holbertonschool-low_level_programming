#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
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
