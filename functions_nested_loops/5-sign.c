#include "main.h"

/**
* print_sign - check if the entry is greater equal or less than 0
* @n: is a int 
*/
int print_sign(int n)
{
	int r;

	if (n == 0)
	{
		_putchar('0');
		r = 0;
	}
	else if (n > 0)
	{
		_putchar('+');
		r = 1;
	}
	else
	{
		_putchar('-');
		r = -1;
	}
return (r);
}
