#include "main.h"

/**
 * add_node_end - adds a node at the end of the list
 * @list: list to work with
 * @string: string to put in the string
 * Return: return a pointer to the position of the node
 */

list_t *add_node_end(list_t **list, char *string)
{
	list_t *node = NULL;

	if (!string)
		return (NULL);
	if (!*list)
	{
		node = malloc(sizeof(list_t));
		if (!node)
			return (NULL);
		*list = node;
		node->string = strdup(string);
		if (!node->string)
			return (NULL);
		node->next = NULL;
		return (node);
	}
	node = *list;
	while (node->next)
		node = node->next;
	node->next =  malloc(sizeof(list_t));
	if (!node->next)
		return (NULL);
	node = node->next;
	node->string = strdup(string);
	if (!node->string)
		return (NULL);
	node->next = NULL;
	return (node);
}

/**
 * delete_node - deletesa node in a linked list
 * @list: list to delete from
 * @index: index to delete from
 */

int delete_node(list_t **list, size_t index)
{
	list_t *j = NULL;
	list_t *temp = NULL;
	size_t i = 0;

	if (!*list)
		return (-1);
	if (!index)
	{
		temp = *list;
		*list = temp->next;
		free(temp);
		return (1);
	}
	for (temp = *list, i = 0; temp && i < index - 1; temp = temp->next, i++)
		continue;
	if (i == index - 1)
	{
		j = temp->next;
		temp->next = j->next;
		free(j);
		return (1);
	}
	return (-1);
}

/**
 * list_len - returns list len
 * @h: head of list
 * Return: as said
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;
  
	for (; h; h = h->next)
		nodes++;
	return (nodes);
}
