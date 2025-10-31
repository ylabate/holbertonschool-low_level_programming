#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: pointer to the string
 *
 * Return: pointer to the resulting string
 */

char *leet(char *str)
{
	int i;
	int j;
	char base[] = "aAeEoOtTlL";
	char leet[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
		for (j = 0; base[j] != '\0'; j++)
			if (str[i] == base[j])
				str[i] = leet[j];
return (str);
}
