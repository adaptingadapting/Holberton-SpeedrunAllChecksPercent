#include "lists.h"

/**
 * print_listint - prints a list
 * @h: head
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (!h)
		return (0);
	for (; h; h = h->next)
	{
		printf("%d\n", h->n);
		i++;
	}
	return (i);
}
