#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space in memory containing
 * concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *s = NULL;
	int i = 0;
	int j = 0;

	if (s1 != NULL)
		for (; s1[i] != '\0' ; i++)
		;
	if (s2 != NULL)
		for (; s2[j] != '\0' ; j++)
		;
	s = malloc(sizeof(char) * (i + j) + 1);
	if (s == NULL)
		return (NULL);
	if (s1 != NULL)
		for (i = 0 ; s1[i] != '\0' ; i++)
			s[i] = s1[i];
	if (s2 != NULL)
		for (j = 0 ; s2[j] != '\0' ; j++)
			s[i + j] = s2[j];
	s[j + i] = '\0';
return (s);
}
