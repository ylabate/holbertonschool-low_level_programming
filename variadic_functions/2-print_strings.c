#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - affiche des chaînes suivies d'une nouvelle ligne
 * @separator: chaîne à imprimer entre les chaînes
 * @n: nombre de paramètres à imprimer
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
/*		if (va_arg(args, int) == NULL) */
/*			printf("(nil)"); */

		printf("%s", va_arg(args, char *));
		if (separator != NULL && i + 1 < n)
			printf("%s", separator);
	}
	printf("\n");

va_end(args);
return;
}
