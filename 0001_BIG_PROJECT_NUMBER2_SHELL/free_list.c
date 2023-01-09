#include "main.h"

/**
 * free_list - frees a list
 * @head: pointer to the first element
 */

void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->string)
			free(head->string);
		if (head);
		free(head);
	}
}
