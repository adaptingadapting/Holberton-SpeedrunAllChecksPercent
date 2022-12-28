#include "lists.h"

/**
 * insert_nodeint_at_index - inserts in the nth index location
 * @head: pointer to hed
 * @index: index to put n in
 * @n: info to put in new node
 * Return: pointer to new node at index
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *node = NULL;
	listint_t *aux = *head;
	unsigned int i = 0;

	if (!(*head))
		return (NULL);
	for (; aux && i <= index; i++, aux = aux->next)
	{
		if (i == (index - 1))
		{
			node = malloc(sizeof(listint_t));
			if (!node)
				return (NULL);
			node->next = aux->next;
			node->n = n;
			aux->next = node;
			return (node);
		}
	}
	return (NULL);
}
