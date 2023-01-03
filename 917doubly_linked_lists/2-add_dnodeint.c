#include "lists.h"

/**
 * add_dnodeint - adds a node at the start of a dlist
 * @h: double pointer to head
 * @n: number to be put into the new node
 * Return: addres of the new element or null
 */

dlistint_t *add_dnodeint(dlistint_t **h, const int n)
{
	dlistint_t *newnode = NULL;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = *h;
	if (*h)
		(*h)->prev = newnode;
	*h = newnode;
	return (newnode);
}
