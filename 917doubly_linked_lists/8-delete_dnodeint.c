#include "lists.h"

/**
 * delete_dnodeint_at_index - delete the node at index
 * @h: head pointer
 * @idx: index
 * Return: 1 on succes, minus 1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **h, unsigned int idx)
{
	unsigned int i = 0;
	dlistint_t *free2 = NULL;
	dlistint_t *frees = NULL;

	frees = *h;
	while (frees)
	{
		if (i == idx)
		{
			if (!i)
			{
				*h = frees->next;
				if (*h)
					(*h)->prev = NULL;
			}
			else
			{
				free2->next = frees->next;
				if (frees->next)
					frees->next->prev = free2;
			}
			free(frees);
			return (1);
		}
		free2 = frees;
		frees = frees->next;
		i++;
	}
	return (-1);
}
