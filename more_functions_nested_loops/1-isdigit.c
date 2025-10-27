#include "main.h"
/**
* _isdigit - check if the entry is an uppercase
* @c: entry point
* Return: return the result
*/

int _isdigit(int c)
{
	int a;

	if (c >= 48 && c <= 57)
		a = 1;
	else
		a = 0;
return (a);
}
