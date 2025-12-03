#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: pointer to pointer to the head of the list
 * @index: index of the node to delete, starting at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current = *head;

	for (i = 0 ; i < index ; i++)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
	}
	if (current == NULL)
		return (-1);
	if (i > 0)
	{
		if (current->next != NULL)
		{
			current->prev->next = current->next;
			current->next->prev = current->prev;
		}
		else
			current->prev->next = NULL;
	}
	else
	{
		if (current->next != NULL)
		{
			current->next->prev = NULL;
			*head = current->next;
		}
		else
			*head = NULL;
	}
	free(current);
	return (1);
}
