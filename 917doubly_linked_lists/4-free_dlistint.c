#include "lists.h"

/**
 * free_dlistint - frees a dlistint list
 * @head: head of the list
 */

void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_dlistint(head->next);
		free(head);
	}
}
