#include "main.h"

/**
 * _execute - execues a command (or doesnt)
 * @array: pointer to the first node of a linked list
 * Return: returns the exit status
 */

ssize_t _execute(list_t **list, ssize_t *exit_value, size_t *count)
{
	list_t *node;
	char *rstring = NULL;
	char **array = NULL;
	size_t len = 0, i;

	if (!*list)
		return (0);
	node = *list;
	if (!_builtins(list, exit_value))
		return (0);
	rstring = path_concat(node->string);
	len = list_len(*list);
	array = calloc(len + 1, sizeof(char *));
	for (i = 0; node; i++, node = node->next)
			array[i] = node->string;
	if (rstring)
	{
		array[0] = rstring;
		*exit_value = _execute2(array, count);
	}
	else
	{
		fprintf(stderr, "./hsh: %ld: %s: not found\n", *count, array[0]);
		*exit_value = 127;
	}
	*count += 1;
	return (*exit_value);
}
