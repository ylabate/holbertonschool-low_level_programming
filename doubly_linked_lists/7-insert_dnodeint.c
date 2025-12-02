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
	dlistint_t *new;
	dlistint_t *temp = NULL;
	unsigned int current_index;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	for (current_index = 0; current_index < idx; current_index++)
	{
		if (current == NULL)
		{
			free(new);
			return (NULL);
		}
		current = current->next;
	}
	if (current_index != 0)
	{
		if (current == NULL)
		{
			temp = *h;
			while (temp->next != NULL)
				temp = temp->next;
			temp->next = new;
			new->prev = temp;
		}
		else
		{
			new->prev = current->prev;
			temp = current->prev;
			current->prev = new;
			temp->next = new;
		}
	}
	else
	{
		if (current != NULL)
			current->prev = new;
		*h = new;
	}

	new->next = current;
	return (new);
}
