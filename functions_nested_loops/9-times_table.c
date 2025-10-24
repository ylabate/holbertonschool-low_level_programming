#include "main.h"
/**
* times_table - show the all multiplication tables
* Return: return the result
*/

void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;
			if (c > 9)
			{
				_putchar('0' + (c / 10));
				_putchar('0' + (c % 10));
			}
			else
				_putchar(c + '0');
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (a == 1 && b > 4)
					_putchar(' ');
				else
					if (a * (b + 1) < 10 && (b * (a + 1)) < 10)
						_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
