#include "lists.h"

/**
 * pop_listint - deletes first element
 * @head: head pointer
 * Return: data in head
 */

int pop_listint(listint_t **head)
{
	listint_t *fnode = *head;
	int i = (*head)->n;

	if (!*head || !head)
		return (0);
	(*head) = (*head)->next;
	free(fnode);
	return (i);
}
