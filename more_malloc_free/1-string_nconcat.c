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
/* gere les cas NULL */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
/* limite la longueure de j a s2 ou a n si n < s2 */
	for (j = 0 ; s2[j] != '\0' && j < n; j++)
	;
	j = (j * sizeof(int));
/* alloue la mémoire necessaire et return si malloc rate */
	s = malloc(sizeof(s1) + j);
	if (s == NULL)
		return (NULL);
/* fait une copie de s1 dans s*/
	for (i = 0 ; s1[i] != '\0' ; i++)
		s[i] = s1[i];
/* fait une copie de s2 dans s a la suite de strlen de s1*/
	for (j = 0 ; s2[j] != '\0' && j < n; j++)
		s[i + j] = s2[j];
/* rajoute un caractère "fin de chaine de caractère" */
	s[i + j] = '\0';
return (s);
}
