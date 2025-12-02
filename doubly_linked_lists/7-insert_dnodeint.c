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
	dlistint_t *temp;
	unsigned int current_index;

	temp = malloc(sizeof(dlistint_t));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL || temp == NULL)
		return (NULL);

	new->n = n;
	/* go to the index */
	for (current_index = 0 ; current_index < idx ; current_index++)
	{
		if (current == NULL)
		{
			free(new);
			free(temp);
			return (NULL);
		}
		current = current->next;
	}

	if (current_index != 0)
		new->prev = current->prev;
	else
		new->prev = NULL;

	new->next = current;

	temp = current->prev;
	current->prev = new;
	temp->next = new;

	free(temp);
	return (new);
}
