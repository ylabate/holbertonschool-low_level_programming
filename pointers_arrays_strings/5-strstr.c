#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to the string to search
 * @accept: pointer to the string containing characters to match
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
		if (haystack[i] == needle[0])
			for (j = 0; haystack[j + i] == needle[j]; j++)
				if (needle[j] == '\0')
					return (&haystack[i]);
	return (0);
}
