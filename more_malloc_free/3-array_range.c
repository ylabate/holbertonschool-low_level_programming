#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to allocated memory, or NULL on failure
 */

int *array_range(int min, int max)
{
	int i;
	int *s;

	if (max < min)
		return (NULL);

	s = malloc(sizeof(int) * (max - min));

	for (i = 0; min < max ; min++, i++)
	{
		s[i] = min;
	}
return (s);
}
