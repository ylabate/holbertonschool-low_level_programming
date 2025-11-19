#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - affiche des nombres suivis d'une nouvelle ligne
 * @separator: chaîne à imprimer entre les nombres
 * @n: nombre de paramètres à imprimer
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i + 1 < n)
			printf("%s", separator);
	}
	printf("\n");

va_end(args);
return;
}
