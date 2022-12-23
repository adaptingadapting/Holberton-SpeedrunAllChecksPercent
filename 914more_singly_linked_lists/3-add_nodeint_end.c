#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end
 * @head: pointer to head
 * @n: number to put in the nwew node 
 * Return: returns a poointer to the node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = NULL;

	if (!*head)
	{
		node = malloc(sizeof(listint_t));
		if (!node)
			return (NULL);
		*head = node;
		node->n = n;
		node->next = NULL;
		return (node);
	}
	node = *head;
	for (; node->next; node = node->next)
		;
	node->next = malloc(sizeof(listint_t));
	if (!node->next)
		return (NULL);
	node = node->next;	
	node->n = n;
	node->next = NULL;
	return (node);
	    
}
