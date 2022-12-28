#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node
 * @index: index
 * Return: index node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	for (;head && (i <= index); i++, head = head->next)
	{
		if ((head) && i == index)
			return (head);
	}
	return (NULL);
}
