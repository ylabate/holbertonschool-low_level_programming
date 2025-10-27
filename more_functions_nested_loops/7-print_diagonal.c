#include "main.h"
/**
* print_diagonal - print a diagonal of the longer of n
* @n: the number of line
*/

void print_diagonal(int n)
{
	int i;
	int a;

	if (n > 0)
	{
		for (i = 0; i != n; i++)
		{
			for (a = 0; a != i; a++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
