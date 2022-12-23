#include "lists.h"

/**
 * add_node_end - adds a node at the end of a ll
 * @head: pointer that points to head
 * @str: string to put into the new node
 * Return: returns a new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
		list_t *new_node = NULL;
		
		new_node = malloc(sizeof(list_t));
		if (!new_node)
			return (NULL);
		if (!*head)
		{
			*head = new_node;
			new_node->len = strlen(str);
			new_node->str = strdup(str);
			new_node->next = NULL;
			return (new_node);
		}
		new_node = *head;
		for (; new_node->next; new_node = new_node->next)
			;
		new_node->next = malloc(sizeof(list_t));
		new_node = new_node->next;
		new_node->len = strlen(str);
		new_node->str = strdup(str);
		new_node->next = NULL;
		return (new_node);
}
