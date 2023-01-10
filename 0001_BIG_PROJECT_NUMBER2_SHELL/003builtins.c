#include "main.h"

/**
 * _builtins - built int command of the shell
 * @list: list of args
 * Return: returns the exit code
 */

ssize_t _builtins(char *string, list_t **list, ssize_t *exit_value)
{
	int i;

	if (!strcmp(string, "exit\n"))
	{
		if (list)
			free_list(*list);
		exit(*exit_value);
	}
	if (!strcmp(string, "env\n"))
	{
		for (i = 0; environ[i]; i++)
			printf("%s\n", environ[i]);
		return (0);
	}
	return (1);
}
