#include "lists.h"

/**
 * insert_dnodeint -insert a new node at index
 * @h: head pointer
 * @idx: index
 * @n: info to put in the new node
 * Return: pointer to new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
		unsigned int i = 0;
		dlistint_t *node = NULL;

		if (!(*h))
		{
			if (!idx)
			{
				node = malloc(sizeof(dlistint_t));
				if (!node)
					return (NULL);
				node->n = n;
				node->next = NULL;
				node->prev = NULL;
				*h = node;
				return (node);
			}
			return (NULL);
		}
		for (; (*h)->next; (*h) = (*h)->next, i++)
		{
			if (i == (idx - 1))
			{
				node = malloc(sizeof(dlistint_t));
				node->n = n;
				node->next = (*h)->next;
				(*h)->next = node;
				node->prev = (*h);
				return (node);
			}
		}
		return (NULL);
}
