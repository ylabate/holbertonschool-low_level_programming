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

	for (i = 0; src[i] == '\0';i++)
		if (src[i] != '\0')
			break;
		else
			if (i > 150)
				return ('\0');
	for (i = 0; i < n && dest[i] != '\0'; i++)
	{
		if (src[i] == '\0')
			continue;
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
return (dest);
}
