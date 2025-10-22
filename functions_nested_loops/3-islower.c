#include "main.h"
/**
*int _islower - that say if the entry is lowercase
*
*Return: Always 0.
*
*/
int r;
char e;

int _islower(char e)
{
	if (e >= 'a' && e <= 'z')
		r = 0;
	else
		r = 1;
return(r);
}
