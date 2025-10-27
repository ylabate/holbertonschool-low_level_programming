#include <stdio.h>

/**
 * main - print numbers from 1 to 100 with Fizz, Buzz, and FizzBuzz conditions
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 1; a != 101; a++)
	{
		if ((a % 3) == 0 && (a % 5) == 0)
			printf("FizzBuzz");
		else if ((a % 3) == 0)
			printf("Fizz");
		else if ((a % 5) == 0)
			printf("Buzz");
		else
			printf("%d", a);
		if (a != 100)
			printf(" ");
		else
			printf("\n");
	}
return (0);
}
