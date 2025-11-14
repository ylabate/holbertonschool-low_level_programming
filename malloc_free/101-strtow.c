#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: pointer to an array of strings (words), or NULL on failure
 * ---------------------------------
 * h = position actuelle dans le mot
 * i = position dans str
 * c = position dans ptr
 * j = longueur du mot
 * a = copie de i pour le garder en buffer
 * ptr **= le pointeur des string résultant
 */

char **strtow(char *str)
{
	int h, i, j, c, a = 0;
	char **ptr;

	/* gere les NULL */
	if (str == NULL || str[0] == '\0')
		return (NULL);

	/* compte le nombre de mots pour allouer le double pointeur */
	for (i = 0 ; str[i] != '\0' ; i++)
		if (str[i] != ' ')
		{
			/* compte la taille de chaque mot*/
			for (; str[i] != ' ' && str[i] != '\0'; i++)
			;
			c++;
		}
	ptr = malloc(sizeof(char *) * c + 1);

	/* parcours les mots pour copier */
	c = 0;
	for (i = 0 ; str[i] != '\0' ; i++)
		if (str[i] != ' ')
		{
			a = i;
			/* compte la taille de chaque mot*/
			for (j = 0; str[i] != ' ' && str[i] != '\0'; i++, j++)
			;
			/* alloue la mémoire pour chaque mots*/
			ptr[c] = malloc(j + 1);
			for (h = 0 ; h < j ; h++)
				ptr[c][h] = str[a + h];
			c++;
		}
ptr[c] = '\0';
return (ptr);
}
