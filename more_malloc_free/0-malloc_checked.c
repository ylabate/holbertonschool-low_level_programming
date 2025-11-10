#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *s;
	int r = 98;

	s = malloc(b);
	if (s == NULL)
	{
		*s = r;
		return (s);
	}
	(void)r;
return (s);
}
