#include <stdarg.h>

/**
 * sum_them_all - calcule la somme de tous ses paramètres
 * @n: nombre de paramètres à additionner
 *
 * Return: la somme de tous les paramètres, ou 0 si n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0 ; i < n ; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
