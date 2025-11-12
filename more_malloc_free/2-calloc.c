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

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;

	if (size == < 1 || nmemb < 1)
		exit(NULL);
	s = malloc(size * nmemb);
	if (s == NULL)
		exit(NULL);
	return (s);
}
