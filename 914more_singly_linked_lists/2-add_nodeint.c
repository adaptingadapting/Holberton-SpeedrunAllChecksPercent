#include "lists.h"

/**
 * add_nodeint - adds a node at the start
 * @n: number to go into n
 * Returns: a pointer to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = NULL;
	listint_t *temp = *head;

	node = malloc(sizeof(node));
	if (!node)
		return (NULL);
	*head = node;
	node->next = temp;
	node->n = n;
	return (node);
}
