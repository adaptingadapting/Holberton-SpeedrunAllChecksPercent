#include "lists.h"

/**
 * list_len - returns list len
 * @h: head of list
 * Return: as said
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;
  
	for (; h; h = h->next)
		nodes++;
	return (nodes);
}
