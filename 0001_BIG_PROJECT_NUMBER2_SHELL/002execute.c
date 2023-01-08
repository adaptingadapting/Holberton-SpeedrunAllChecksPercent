#include "main.h"

/**
 * _execute - execues a command (or doesnt)
 * @array: pointer to the first node of a linked list
 * Return: returns the exit status
 */

size_t _execute(list_t **list)
{
	list_t *node;
	char *rstring = NULL;
	char **array;
	size_t len = 0, i;

	if (!*list)
		return (0);
	node = *list;
	if (!_builtins(list))
		return (0);
	rstring = path_concat(node->string);
	len = list_len(*list);
	array = malloc(len  * 9);
	for (i = 0; node; i++, node = node->next)
	{
		array[i] = NULL;
		array[i] = strdup(node->string);
	}
	if (rstring)
	{
		array[0] = rstring;
		_execute2(array);
	}
	return (0);
}
