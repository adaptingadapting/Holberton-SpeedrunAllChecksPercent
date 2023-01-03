#include "lists.h"

/**
 * dlistint_len - returns the len of a dlist
 * @h: pointer to head
 * Return: len of dlist
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (!h)
		return (0);
	while (h->prev)
		h = h->prev;
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
