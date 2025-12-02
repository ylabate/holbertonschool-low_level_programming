#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to pointer to the head of the list
 * @n: integer value to store in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *last = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (new);

	new->n = n;
	new->next = NULL;

	if (*head != NULL)
	{
		while (last->next != NULL)
			last = last->next;

		last->next = new;
		new->prev = last;
	}
	else
	{
		new->prev = NULL;
		*head = new;
	}

	return (new);
}
