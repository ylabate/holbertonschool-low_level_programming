#include <stdio.h>
#include <math.h>

/**
 * main - print the largest prime number of 1231952
 * Return: 0 if a prime number have been find or 1 if not
 */

int main(void)
{
	long int o = 612852475143;
	int i;
	int a;

	for (i = (o - 1); i != 1; i--)
		if ((i % o) == 0)
		{
			for (a = (i - 1); a != 0; a--)
			{
				if (a == 0)
				{
					printf("%i", i);
					return (0);
				}

			}
		}
return (1);
}
