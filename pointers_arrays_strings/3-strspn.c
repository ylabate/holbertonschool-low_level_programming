#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to search
 * @accept: pointer to the string containing characters to match
 *
 * Return: number of bytes in the initial segment of s which consist only
 * of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, a;
	unsigned int c = 0;

	for (i = 0; s[i] != '\0'; i++)
		for (a = 0; accept[a] != '\0'; a++)
			if (s[i] == accept[a])
				c++;
	return (c - 1);
}