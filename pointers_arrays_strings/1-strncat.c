#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenates the string pointed to by src to the end of dest
 * @dest: the destination buffer
 * @src: the source string
 * @n: maximum number of bytes to use from src
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int ndest;
	int nsrc;
	int i;

	for (ndest = 0; dest[ndest] != '\0'; ndest++)
	;
	for (nsrc = 0; src[nsrc] != '\0'; nsrc++)
	;
	for (i = 0; i != (nsrc + ndest) && i != n; i++)
	{
		dest[(ndest + i)] = src[i];
	}
return (dest);
}