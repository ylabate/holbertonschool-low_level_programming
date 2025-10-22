#include "main.h"
/**
* _isalpha - that say if the entry is lowercase
* @e: what do you want more
*
*Return: Always 0.
*
*/

int _isalpha(char e)
{
	int r;

	if ((e >= 97 && e <= 122) || (e >= 65 && e <= 90))
		r = 1;
	else
		r = 0;
return (r);
}
