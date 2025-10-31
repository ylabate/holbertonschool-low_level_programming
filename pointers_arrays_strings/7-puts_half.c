#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string to print
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i;
	int n;
	int start;

	for (n = 0; str[n] != '\0'; n++)
		;

	if ((n % 2) == 0)
	{
		start = n / 2;
	}
	else
	{
		start = (n + 1) / 2;
	}

	for (i = start; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
