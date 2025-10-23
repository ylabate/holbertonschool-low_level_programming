#include "main.h"
#include <stdio.h>
/**
* print_last_digit - print the last digit of a list of digit
* @n: is a int
* Return: return the last digit
*/
int print_last_digit(int n)
{
	int r;

	r = n % 10;
	if (n < 0)
		r = -r;
	else
		r = r;
_putchar('0' + r);
return (r);
}
