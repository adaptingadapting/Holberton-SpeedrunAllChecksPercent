#include "main.h"

/**
 * path_concat - splits path into parts to concat and does it
 * @input: user input to check for in path
 * Return: string containing the concat path to execute
 */

char *path_concat(char *input)
{
	char *path = _getenv("PATH");
	char *token = NULL;
	size_t i;
	char *buffer = NULL;
	struct stat st;

	if (!stat(input, &st) && st.st_mode == 33261)
		return (input);
	if (!path)
		return (NULL);
	i = strlen(path) + 1 + strlen(input);
	token = strtok(path, ":");
	while (token)
	{
		buffer = malloc(i);
		strcpy(buffer, token);
		strcat(buffer, "/");
		strcat(buffer, input);
		if (!stat(buffer, &st) && st.st_mode == 33261)
			return (buffer);
		token = strtok(NULL, ":");
		free(buffer);		
	}
	return (NULL);
}
