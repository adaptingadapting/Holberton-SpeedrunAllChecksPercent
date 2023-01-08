#include "main.h"

/**
 * _builtins - built int command of the shell
 * @list: list of args
 * Return: returns the exit code
 */

size_t _builtins(list_t **list)
{
	list_t *node = NULL;
	int i;

	if (!*list)
		return (0);
	node = *list;
	if (!strcmp(node->string, "exit"))
		exit(0);
	if (!strcmp(node->string, "env"))
	{
		for (i = 0; environ[i]; i++)
			printf("%s\n", environ[i]);
		return (0);
	}
	return (1);
}
