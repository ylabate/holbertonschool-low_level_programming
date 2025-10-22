#include "main.h"

int main(void)
{
	char * a;
	int nbr;
	int i;

	a = "_putchar";
	nbr = 0;

	while (a[nbr] != '\0')
		nbr++;
	for (i = 0; i <= nbr; i++)
		_putchar(a[nbr]);
return(0);
}
