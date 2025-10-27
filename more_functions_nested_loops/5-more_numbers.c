#include "main.h"
/**
* print_most_numbers - print all number from 0 to 9 except 2 and 4
*/

void more_numbers(void)
{
	int a;
	int b;
	int c;
	int i;
	int i_f;
	int i_l;

	for (c = 0; c < 10; c++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				i_f = (i / 10);
				i_l = (i % 10);
				for (a = 0; a < 2; a++)
				{
					if (a == 0)
					{
						b = i_f;
					}
					else
					{
						b = i_l;
					}
					_putchar(b + '0');
				}
			}
			else
				_putchar(i + '0');
		}
		_putchar('\n');
	}
}