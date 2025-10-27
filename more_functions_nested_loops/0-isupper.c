#include "main.h"
/**
* _isupper - check if the entry is an uppercase
* @c: entry point
* Return: return the result
*/

int _isupper(int c)
{
	int a;

	if (c >= 65 && c <= 90)
		a = 1;
	else
		a = 0;
return (a);
}
