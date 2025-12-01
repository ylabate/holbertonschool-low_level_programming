#include "lists.h"

size_t list_len(const list_t *h)
{
	int len;

	if (h == NULL)
		return (0);
	for (len = 0; h != NULL; len++)
		h = h->next;
	return (len);
}
