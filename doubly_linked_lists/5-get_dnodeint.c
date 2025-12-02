#include "lists.h"

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
