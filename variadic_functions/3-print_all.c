#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_all - affiche tout selon le format donné
 * @format: liste des types d'arguments à imprimer
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	int int_print;
	double float_print;
	char *string_print;

	va_start(args, format);
	for (i = 0; i < strlen(format); i++)
	{
		if (format[i] == 'c')
		{
			int_print = va_arg(args, int);
			printf("%c, ", int_print);
		}
		if (format[i] == 'i')
		{
			int_print = va_arg(args, int);
			printf("%d, ", int_print);
		}
		else if (format[i] == 'f')
		{
			float_print = va_arg(args, double);
			printf("%f, ", float_print);
		}
		else if (format[i] == 's')
		{
			string_print = va_arg(args, char *);
			printf("%s, ", string_print);
		}
	}
	printf("\n");

va_end(args);
return;
}
