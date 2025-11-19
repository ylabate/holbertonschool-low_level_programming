#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: the string to measure
 *
 * Return: the length of the string
 */

int _strlen(const char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;
	return (l);
}

/**
 * print_all - affiche tout selon le format donné
 * @format: liste des types d'arguments à imprimer
 *
 * Return: void
 */

void print_all(const char *const format, ...)
{
	va_list args;
	int i = 0;
	int int_print;
	double float_print;
	char *string_print;

	va_start(args, format);
	while (format != NULL && i < _strlen(format))
	{
		switch (format[i])
		{
			case 'c':
				int_print = va_arg(args, int);
				printf("%c", int_print);
				break;
			case 'i':
				int_print = va_arg(args, int);
				printf("%d", int_print);
				break;
			case 'f':
				float_print = va_arg(args, double);
				printf("%f", float_print);
				break;
			case 's':
				string_print = va_arg(args, char *);
				if (string_print == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string_print);
				break;
			default:
				i++;
				continue;
		}
		if (i + 1 < _strlen(format))
			printf(", ");
		i++;
	}
	printf("\n");

	va_end(args);
}
