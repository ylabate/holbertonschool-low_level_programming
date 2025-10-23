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
	if (n < 0)
		r = -n % 10;
	else
		r = n % 10;
_putchar('0' + r);
return (r);
}
