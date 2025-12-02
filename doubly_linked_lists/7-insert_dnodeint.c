#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer to the head of the doubly linked list
 * @idx: index where the new node should be added, starting at 0
 * @n: value to store in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	unsigned int current_index;

	for (current_index = 0 ; current_index < idx ; current_index++)
		current = current->next;
	current->n = n;
	return (current);
}
