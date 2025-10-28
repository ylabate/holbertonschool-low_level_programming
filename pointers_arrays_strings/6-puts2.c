#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to reverse
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else if (i == 0)
			_putchar('0');
	}
	_putchar('\n');
}