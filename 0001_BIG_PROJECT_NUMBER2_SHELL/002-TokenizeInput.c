#include "main.h"

/**
 * _split - splits a string into tokens
 * @string: string to be split
 * Return: returns an lnked list with the tokens
 */

void _split(list_t **list, char *string, char *delim)
{
	list_t *test = NULL;

	if (*list)
		while (*list)
			delete_node(list, 0);
	test = add_node_end(list, strtok(string, delim));
	while (test)
		test = add_node_end(list, strtok(NULL, delim));
}
