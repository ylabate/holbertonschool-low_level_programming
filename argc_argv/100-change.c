#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on error
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
		printf("0\n");
		return (0);
	}

	for (; x != 0; a++)
	{
		if (x >= 25)
			x = x - 25;
		else if (x >= 10)
			x = x - 10;
		else if (x >= 5)
			x = x - 5;
		else if (x >= 2)
			x = x - 2;
		else
			x = x - 1;
	}
printf("%d\n", a);
return (0);
}
