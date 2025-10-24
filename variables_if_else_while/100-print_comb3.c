#include <stdio.h>
/**
*main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (a > b)
				continue;
			if (a == b)
				continue;
			putchar(a + '0');
			putchar(b + '0');
			if (!(a == 8 && b == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}

	}
return(0);
}
