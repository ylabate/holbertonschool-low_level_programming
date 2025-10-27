#include <stdio.h>

/**
 * main - print the largest prime number of 1231952
 * Return: 0 if a prime number have been find or 1 if not
 */

int main(void)
{
	int o = 1231952;
	int i;

	for (i = o; i != 0; i--)
		if ((o % i) == 0)
		{
			printf("%i\n", i);
			return (0);
		}
return (1);
}
