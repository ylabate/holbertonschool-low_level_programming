#include "main.h"
/**
*main - check the code
*
*Return: Always 0.
*/
void print_alphabet(void)
{
	char *a;
	int nbr;
	int i;

	a = "abcdefghijklmnopqrstuvwxyz";
	nbr = 0;

	while (a[nbr] != '\0')
		nbr++;
	for (i = 0; i <= nbr; i++)
		_putchar(a[i]);
	_putchar('\n');
}
