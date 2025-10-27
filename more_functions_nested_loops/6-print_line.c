#include "main.h"

/**
 * print_line - print the number of line in n
 *@n: the number of line will be printed
 * Return: Always 0.
 */

void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
