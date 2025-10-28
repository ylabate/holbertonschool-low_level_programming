#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string to reverse
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int a;
	int b = 0;
	int max;
	char c[10];

	max = _strlen(s); /**for (max = 0; s[max] != '\0'; max++)*/
	for (a = max; a != 0; a--)
	{
		c[b] = s[a - 1];
		b++;
	}
	for (a = 0; a != max; a++)
		s[a] = c[a];
	_putchar('\n');
}
