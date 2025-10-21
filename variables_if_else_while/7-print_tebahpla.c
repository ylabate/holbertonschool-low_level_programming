
#include <stdio.h>
/**
*main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char z;

	for (z = 'z'; z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar('\n');
return (0);
}
