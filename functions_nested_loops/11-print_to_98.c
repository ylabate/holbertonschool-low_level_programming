#include <stdio.h>
#include "main.h"
/**
 *
 *
 */

void print_to_98(int n)
{
	int i;

	i = n;
	if (i > 98)
	{
		for (;i != 98;i--)
			printf("%d, ", i);
	}
	else
	{
		
		for (;i != 98;i++)
			printf("%d, ", i);
	}
	printf("%i", i);
	printf("\n");
}
