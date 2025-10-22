#include "main.h"
/**
* _islower - that say if the entry is lowercase
* @e: what do you want more
*
*Return: Always 0.
*
*/

int _islower(char e)
{
	int r;

	if (e <= 'a' && e >= 'z')
		r = 0;
	else
		r = 1;
return (r);
}
