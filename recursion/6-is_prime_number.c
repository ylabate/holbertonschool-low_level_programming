#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	n = bucky_prime_masterclass(n, n - 1);
	return (n);
}

/**
 * bucky_prime_masterclass - helper function to check primality
 * @n: the number to check
 * @r: the current divisor to test
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int bucky_prime_masterclass(int n, int r)
{
	if (r == 1)
		return (1);
	else if (n % r == 0)
		return (0);
	return (bucky_prime_masterclass(n, r - 1));
}
