#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the head of the list
 * @str: string to store in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = NULL;
	int i;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		exit(EXIT_FAILURE);

	for (i = 0 ; str[i] != '\0' ; i++)
		;
	temp->len = i;
	temp->str = strdup(str);

	temp->next = *head;

	*head = temp;

	return (temp);
}
