#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer to the string to search
 * @needle: pointer to the substring to find
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
		if (haystack[i] == needle[0])
		{
			for (j = 1; needle[j] != '\0'; j++)
				if (haystack[i + j] != needle[j])
					break;
				else if (haystack[i + j] == needle[j] && needle[j + 1] == '\0')
					return (&haystack[i]);
		}
	if (needle[0] == '\0')
		
	return (0);
}
