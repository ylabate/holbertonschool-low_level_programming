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
	char *s;
	int i;
	int j;


	if (s1 == NULL || s2 == NULL)
		return (NULL);
	for (i = 0 ; s1[i] != '\0' ; i++)
	;
	for (j = 0 ; s2[j] != '\0' ; j++)
	;
	s = malloc(sizeof(char) * (i + j) + 1);
	for (i = 0 ; s1[i] != '\0' ; i++)
		s[i] = s1[i];
	for (j = 0 ; s2[j] != '\0' ; j++)
		s[i + j] = s2[j];
	s[j + i] = '\0';
return (s);
}
