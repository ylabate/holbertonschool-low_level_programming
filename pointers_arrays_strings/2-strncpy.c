#include "main.h"

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
	for (; n != -1; n--)
		dest[n] = src[n];
	dest[n] = '\0';
return (dest);
}
