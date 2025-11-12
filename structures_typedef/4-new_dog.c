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
		newdog->name = _strdup(name);
		newdog->age = age;
		newdog->owner = _strdup(owner);
	}
	else
	{
		free(newdog);
		return (NULL);
	}
	return (newdog);
}

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *s;
	int i;

	if (str == NULL)
		return (NULL);
	for (i = 0 ; str[i] != '\0' ; i++)
	;
	s = malloc(sizeof(char) * i + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0 ; str[i] != '\0' ; i++)
		s[i] = str[i];
	s[i] = str[i];
return (s);
}
