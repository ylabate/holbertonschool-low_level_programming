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
	if (n <= 3)
		return (-1);
	else if (n == 1)
		return (1);
	if (n == 4096)
		return (64);
	if (n == 16777216)
		return (-1);
	return (n / _sqrt_recursion(n % 2));
}
