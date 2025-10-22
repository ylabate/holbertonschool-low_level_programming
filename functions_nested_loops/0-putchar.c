#include "main.h"
#include <stdio.h>
/**
*main - check the code
*
*Return: Always 0.
*/
int main(void)
{
	char *a;
	int nbr;
	int i;

	a = "_putchar";
	nbr = 0;

	while (a[nbr] != '\0')
		nbr++;
	for (i = 0; i <= nbr; i++)
		_putchar(a[i]);
return (0);
}
