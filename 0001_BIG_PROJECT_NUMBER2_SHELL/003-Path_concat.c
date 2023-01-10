#include "main.h"

/**
 * path_concat - splits path into parts to concat and does it
 * @input: user input to check for in path
 * Return: string containing the concat path to execute
 */

char *path_concat(char *nstring, list_t *head)
{
	char *path = _getenv("PATH");
	char *token = NULL;
	size_t i;
	char *buffer = NULL;
	struct stat st;

	if (!stat(nstring, &st) && st.st_mode == 33261)
	{
		free(path);
		buffer = strdup(nstring);
		return (buffer);
	}
	if (!path)
		return (NULL);
	i = strlen(path) + 1 + strlen(nstring);
	token = strtok(path, ":");
	while (token)
	{
		buffer = malloc(i);
		strcpy(buffer, token);
		strcat(buffer, "/");
		strcat(buffer, nstring);
		if (!stat(buffer, &st) && st.st_mode == 33261)
		{
			free(path);
			return (buffer);
		}
		token = strtok(NULL, ":");
		free(buffer);
	}
	free(path);
	return (NULL);
}
