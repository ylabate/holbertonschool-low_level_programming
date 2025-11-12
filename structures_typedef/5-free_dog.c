#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_dog - frees memory allocated for a dog structure
 * @d: pointer to dog structure to free
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
