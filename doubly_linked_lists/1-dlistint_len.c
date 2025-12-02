#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a doubly linked list
 * @h: pointer to the head of the doubly linked list
 *
 * Return: the number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int count = 0;

	if (h == NULL)
		return (0);
	while (temp->prev)
		temp = temp->prev;
	while (temp)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
