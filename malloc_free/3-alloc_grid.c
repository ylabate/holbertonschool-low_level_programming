#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocates a 2D grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to newly allocated 2D array of integers
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **s;

	if (width <= 0 || height <= 0)
		return (NULL);

	s = malloc(height * sizeof(int *));
	if (s == NULL)
		return (NULL);

	for (i = 0 ; i < height ; i++)
	{
		s[i] = malloc(sizeof(int) * (width));
		if (s[i] == NULL)
		{
			for (j = 0; j < i ; j++)
				free(s[j]);
			free(s);
			return (NULL);
		}
	}

	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			s[j][i] = 0;
	return (s);
}
