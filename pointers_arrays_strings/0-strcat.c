#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates the string pointed to by src to the end of dest
 * @dest: the destination buffer
 * @src: the source string
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int ndest;
	int nsrc;
	int i;

	for (ndest = 0; dest[ndest] != '\0'; ndest++)
	;
	for (nsrc = 0; src[nsrc] != '\0'; nsrc++)
	;
	for (i = 0; i != (nsrc + ndest); i++)
	{
		if (nsrc == '\0')
			if (i != (nsrc + ndest))
				continue;
		dest[(ndest + i)] = src[i];
	}
	for (i = 0; dest[i]; i++)
		src[i] = dest[i];
return (src);
}