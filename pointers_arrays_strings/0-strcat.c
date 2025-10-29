#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies the string pointed to by src to dest
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
		dest[(ndest + i)] = src[i];
		if (src[i] == '\r' && src[i] == '\n')
			i = nsrc;
	}
return (dest);
}