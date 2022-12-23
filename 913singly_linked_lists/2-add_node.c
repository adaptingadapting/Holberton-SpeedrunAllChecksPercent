#include "lists.h"
#include <string.h>

/**
 * add_node - adds a node at the begging
 * @head: head of the linked list
 * @str: string
 * Return: new element added
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;

	if(!head)
		return (NULL);
	new_node = malloc(sizeof(list_t *));
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	
	new_node->next = *head;
	*head = new_node;
}
