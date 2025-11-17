#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - just do it
 * @array: the array to iterate over
 * @size: the size of the array
 * @action: function pointer to execute on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0 ; i < size ; i++)
		action(array[i]);
}
