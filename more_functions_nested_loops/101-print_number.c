#include "main.h"
/**
 * print_number - prints an integer
 * @n: the integer to print
 *
 * Return: void
 */

void print_number(int n)
{
	int i;
	int m;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	m = n;

	for (i = 1; m / i >= 10; i *= 10)
	;

	for (; n > 0; i /= 10, n %= i)
		_putchar((n / i) + '0');

}
