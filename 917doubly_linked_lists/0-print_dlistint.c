#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * @h: pointer to head node
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (!h)
		return (0);
	while (h->prev)
		h = h->prev;
	while (h)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
