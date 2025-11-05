#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the program name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, result = 0;

	if (argc < 1)
	{
		printf("0\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0 || isdigit(atoi(argv[i])) == 0)
		{
			printf("Error\n");
			return (1);
		}
		result = result + atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
