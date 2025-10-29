#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: the destination buffer
 * @src: the source string
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int n;

	for (n = 0; src[n] != '\0'; n++)
	;
	n++;
	for (; n != -1 ; n--)
	{
		dest[n] = src[n];
	}
return (dest);
}
