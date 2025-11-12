#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value (included)
 * @max: maximum value (included)
 *
 * Return: pointer to allocated memory, or NULL on failure
 */

int *array_range(int min, int max)
{
	int i;
	int *s;

	if (max < min)
		return (NULL);

	s = malloc(sizeof(int) * (max - min + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; min < max ; min++, i++)
		s[i] = min;
	s[i] = min;
return (s);
}
