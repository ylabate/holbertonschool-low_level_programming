#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string
 *
 * Return: the integer value
 */

void print_number(int n)
{
	unsigned int i;
	int m;

	if (n == 0)
		_putchar('0');
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	m = n;

	for (i = 1; m / i >= 10; i *= 10)
	;

	for (; n > 0; i /= 10)
	{
		_putchar((n / i) + '0');
		n %= i;
	}

}
