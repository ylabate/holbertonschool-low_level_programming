#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes printed.
 */

size_t print_list(const list_t *h)
{
	int len = 0;

	if (h == NULL)
		return (0);
	for (; h != NULL; len++)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s", h->len, h->str);
		if (h->next != NULL)
			printf("\n");
		h = h->next;
	}
	printf("\n");
	return (len);
}
