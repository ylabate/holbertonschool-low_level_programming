#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to concatenate
 *
 * Return: pointer to the allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s = malloc(sizeof(s1) + sizeof(s2));
	if (s == NULL)
		return (NULL);

	for (i = 0 ; s1[i] != '\0' ; i++)
		s[i] = s1[i];
	for (j = 0 ; s2[j] != '\0' && j < n; j++)
		s[i + j] = s2[j];
	s[i + j] = '\0';
return (s);
}
