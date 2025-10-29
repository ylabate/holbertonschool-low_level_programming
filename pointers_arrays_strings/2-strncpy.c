#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copies a string
 * @dest: the destination buffer
 * @src: the source string
 * @n: maximum number of bytes to copy from src
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
return (dest);
}
