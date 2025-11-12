#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
		newdog->name = malloc(sizeof(name));
		newdog->owner = malloc(sizeof(owner));

		if (newdog->name == NULL || newdog->owner == NULL)
		{
			free(newdog->name);
			free(newdog->owner);
			free(newdog);
			return (NULL);
		}
		newdog->age = age;
		newdog->name = name;
		newdog->owner = owner;
		return (newdog);
	}
	free(newdog);
	return (NULL);

}


