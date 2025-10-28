#include "main.h"

/**
 * print_rev - prints a string reversed followed by a new line
 * @s: the string to print
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int a;
	int max;

	for (max = 0; s[max] != '\0'; max++)
		;
	for (a = (max + 1); a != 0; a--)
		_putchar(s[a]);
	_putchar('\n');
}
