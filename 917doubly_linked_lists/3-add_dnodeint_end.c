#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end
 * @head: head of the linked list
 * @n: number to put in the new node
 * Return: pointer to the new node or null
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;
	dlistint_t *nnode = NULL;

	if (!(*head))
	{
		node = malloc(sizeof(dlistint_t));
		if (!node)
			return (NULL);
		*head = node;
		node->n = n;
		node->next = NULL;
		node->prev = NULL;
		return (node);
	}
	for (node = *head; node->next; node = node->next)
		continue;
	node->next = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	nnode = node->next;
	nnode->n = n;
	nnode->prev = node;
	nnode->next = NULL;
	return (nnode);
}
