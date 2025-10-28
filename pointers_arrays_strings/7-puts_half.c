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

	for (n = 0; str[n] != '\0'; n++)
	;
	if ((n % 2) != 0)
	{
		n++;
	}

	for (i = 0; i != n; i++)
	{
		if (i >= (n / 2))
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
