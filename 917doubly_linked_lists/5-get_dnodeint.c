#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node in the nth pos
 * @h: head pointer of the linked list
 * @idx: index position to retrieve
 * Return: pointer to nth pos
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int idx)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	for (; (head->next) && (i < idx); i++, head = head->next)
		if (i == idx - 1)
			return (head->next);
	return (NULL);
}
