#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a singly linked list
 * @head: Double pointer to the head of the list
 * @str: String to store in the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *current;
	int i;

	current = *head;
	if (current != NULL)
		while (current->next != NULL)
			current = current->next;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		exit(EXIT_FAILURE);
	temp->str = strdup(str);
	for (i = 0 ; str[i] != '\0' ; i++)
		;
	temp->len = i;
	temp->next = NULL;


	if (current == NULL)
	{
		*head = temp;
		return (temp);
	}
	current->next = temp;
	return (current);
}
