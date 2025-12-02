#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to return, starting from 0
 *
 * Return: pointer to the node at index, or NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int current_index;

	for (current_index = 0 ; current_index < index ; current_index++)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
	}

	return (current);
}
