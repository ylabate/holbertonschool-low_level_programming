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
	int i;

	for (ndest = 0; dest[ndest] != '\0'; ndest++)
	;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[(ndest + i)] = src[i];
	}
return (dest);
}