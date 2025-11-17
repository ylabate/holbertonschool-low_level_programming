#include "function_pointers.h"
#include <limits.h>
#include <stdio.h>
/**
 * int_index - searches for an integer in an array
 * @array: the array to search
 * @size: the size of the array
 * @cmp: function pointer to compare values
 *
 * Return: index of the first element for which cmp doesn't return 0,
 *         or -1 if no match is found or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int int_index;

	if (size < 0 || array == NULL || cmp == NULL) /* handle the wrong input case*/
		return (-1);

	for (i = 0 ; i < size ; i++) /* browse the list */
		/* if the expected integer is find wrote the position in int_index*/
		if (cmp(array[i]) != 0)
		{
			int_index = i;
			break; /* exit the loop */
		}

	if (i == size++) /* if no expected case have been find */
		return (-1);
	else /* return the good value if all is good */
		return (int_index);
}
