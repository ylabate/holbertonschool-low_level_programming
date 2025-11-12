#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j, t = 0;
	char *s;
/* gere les cas NULL */
	if (ac == 0 || av == NULL)
		return (NULL);
/* calcule la longueur de av et alloue l'espace necessaire pour s*/
	for (i = 0 ; i < ac ; i++)
		for (j = 0 ; av[i][j] != '\0' ; j++)
		t++;
	s = malloc((t + 1) * sizeof(char) + ac);
/* remplace s par tout les elements de av */
	t = 0;
	for (i = 0; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] != '\0' ; j++)
			s[t + j] = av[i][j];
		s[t + j] = '\n';
		t = t + j + 1;
	}
	s[t + j] = '\0';
return (s);
}
