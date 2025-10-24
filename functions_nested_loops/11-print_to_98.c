#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print the all number between n and 98
 * @n: this number to 98
 */

void print_to_98(int n)
{
	int i;

	i = n;
	if (i > 98)
	{
		for (; i != 98; i--)
			printf("%d, ", i);
	}
	else
	{
		for (; i != 98; i++)
			printf("%d, ", i);
	}
	printf("%i", i);
	printf("\n");
}
