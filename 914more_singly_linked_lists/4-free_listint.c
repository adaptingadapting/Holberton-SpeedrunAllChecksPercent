#include "lists.h"

/**
 * free_listint - frees a listint list
 * @h: head
 */

void free_listint(listint_t *h)
{
	if (h)
	{
		free_listint(h->next);
		free(h);
	}
}
