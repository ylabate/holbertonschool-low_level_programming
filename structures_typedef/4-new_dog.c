#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}
	if (name != NULL && owner != NULL)
	{
		newdog->name = strdup(name);
		newdog->age = age;
		newdog->owner = strdup(owner);
	}
	else
	{
		free(newdog);
		return (NULL);
	}
	return (newdog);
}
