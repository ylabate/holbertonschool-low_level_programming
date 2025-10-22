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

	if (e >= 97 && e <= 122)
		r = 1;
	else
		r = 0;
return (r);
}
