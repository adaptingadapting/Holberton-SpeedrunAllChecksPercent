#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: potiner to pointer to head
 * @index: index position of node to be deleted
 * Return: 1 on succes -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = NULL;
	listint_t *freeable;

	if (!(*head))
		return (-1);
	temp = *head;
	for (; temp && i <= index; i++, temp = temp->next)
	{
		if ((!index));
		{
			*head = temp->next;
			free(temp);
			return (1);
		}
		if (i == (index - 1))
		{
			freeable = temp->next;
			temp->next = freeable->next;
			free(freeable);
			return (1);
		}
	}
	return (-1);
}
