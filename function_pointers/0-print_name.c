#include "function_pointers.h"

/**
 * print_name - prints a name using a function pointer
 * @name: the name to print
 * @f: function pointer to use for printing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
