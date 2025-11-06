#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the program name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a = 0;
	int x;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);

	if (x <= 0)
	{
		printf("0");
		return (0);
	}

	while(x != 0)
	{
		if (x >= 25)
		{
			x = x - 25;
			a++;
		}
		else if (x >= 10)
		{
			x = x - 10;
			a++;
		}
		else if (x >= 5)
		{
			x = x - 5;
			a++;
		}
		else if (x >= 2)
		{
			x = x - 2;
			a++;
		}
		else
		{
			x = x - 1;
			a++;
		}
	}
printf("\n%d\n", a);
return (0);
}