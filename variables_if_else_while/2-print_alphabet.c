#include <stdio.h>
/**
*main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; )
	{
		putchar(a);
		a++;
	}
	a = '\n';
	putchar(a);
return (0);
}
