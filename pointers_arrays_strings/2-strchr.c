#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to search
 * @c: character to locate
 *
 * Return: pointer to the first occurrence of c in s, or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (1)
	{
		if (s[i] == c || s[i] == '\0')
			return (&s[i]);
		i++;
	}
}
