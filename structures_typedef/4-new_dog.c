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
	char *savename;
	char *saveowner;

	newdog = malloc(sizeof(dog_t));
	savename = malloc(strlen(name) + 1);
	saveowner = malloc(strlen(owner) + 1);

	savename = name;
	saveowner = owner;
	(void)savename;
	(void)saveowner;

	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}
	if (name != NULL && owner != NULL)
	{
		newdog->name = name;
		newdog->age = age;
		newdog->owner = owner;
	}
	else
	{
		free(newdog);
		return (NULL);
	}
	return (newdog);
}
