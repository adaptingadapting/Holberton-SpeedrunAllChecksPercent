#include "lists.h"

/**
 * listint_len - returns the lenght of the list
 * @h: head
 * Return: lenght
 */

size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h; h = h->next, i++)
		continue;
	return (i);
}
