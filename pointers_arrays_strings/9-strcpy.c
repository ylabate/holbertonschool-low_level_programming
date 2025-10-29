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
	int i;

	for (n = 0; src[n] != '\0'; n++)
	;
	i = n;
	for (; i != -1 ; i--)
	{
		dest[i] = src[i];
		if (src[i] == '\r' && src[i] == '\n')
			i = n;
	}
return (dest);
}
