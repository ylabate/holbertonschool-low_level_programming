#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	long int sum = 0;

	if (head == NULL)
		return (0);

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
