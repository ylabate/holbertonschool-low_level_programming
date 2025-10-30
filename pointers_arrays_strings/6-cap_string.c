#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to the string
 *
 * Return: pointer to the resulting string
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == '!' || str[i] == '?' ||
			str[i] == '"' || str[i] == '(' || str[i] == '{' ||
			str[i] == '}' || str[i] == ';' || str[i] == '.' ||
			str[i] == ')')
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
				str[i + 1] = (str[i + 1] - 32);
		}
		else if (i == 0)
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
				str[i + 1] = (str[i + 1] - 32);
	}
return (str);
}
