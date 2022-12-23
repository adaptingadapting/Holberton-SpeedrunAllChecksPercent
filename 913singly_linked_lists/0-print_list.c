#include "lists.h"

/**
 * print_list - prints a list
 * @h: head of the list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int i;

	if (!h)
		return (0);
	for (i = 0; h; h = h->next)
	{
		i++;
		if (h->str)
			printf("[%d] %s", h->len, h->str);
		else
			printf("[0] (nil)");
		printf("\n");
	}
	return (i);
}
