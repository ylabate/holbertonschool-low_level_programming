#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string
 *
 * Return: the integer value
 */

int _atoi(char *s)
{
	int o = 0;
	int i;
	int ii = 0;
	int negatif = 1;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == 45)
		{
			if (negatif > 0)
				negatif = -1;
			else
				negatif = 1;
		}

	for (i = 0; ii == 0; i++)
	{
		if ((s[i] >= 48 && s[i] <= 57))
		{
			for (ii = 0; s[i + ii] >= 48 && s[i + ii] <= 57; ii++)
			{
				o = (s[i + ii] - 48 + (o * 10));
			}
		}
		else if (s[i] == '\0')
			return (0);
	}
	if (negatif < 0)
		o = (o - (o * 2));
return (o);
}
