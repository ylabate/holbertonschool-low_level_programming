#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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
	for (i = 1 ; str[i] != '\0' ; i++)
	;
	s = malloc(sizeof(char) * i);
	if (s == NULL)
		return (NULL);
	for (; i >= 0 ; i--)
		s[i] = str[i];
return (s);
}
