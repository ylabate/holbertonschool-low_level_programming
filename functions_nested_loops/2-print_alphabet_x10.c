#include "main.h"
/**
*print_alphabet - that print the alphabet broo
*
*Return: Always 0.
*/
void print_alphabet_x10(void)
{
	int i;
	int a;
	for (a = 0; a <= 10; a++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}

