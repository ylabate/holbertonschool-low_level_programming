#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root, or -1 if n does not have a natural
 * square root
 */

int _sqrt_recursion(int n)
{
	int i = n;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	if (i * i == n)
		return (i);
	i = _sqrt_recursion(i - 1);
return (-1);
}
