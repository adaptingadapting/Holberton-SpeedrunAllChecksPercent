#include "lists.h"

/**
 * free_listint2 - frees a list, sets head to null
 * @head: head
 */

void free_listint2(listint_t **head)
{
	if (*head)
	{
		free_listint(*head);
		*head = NULL;
	}
}

/**
 * free_listint - frees a list
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
