#include "main.h"

/**
 * _getenv - gets a variable from the environment
 * @var;
 * Return: the value of the variable
 */

char *_getenv(char *var)
{
	int i;
	char *copy = NULL;
	char *first_token = NULL;

	for (i = 0; environ[i]; i++)
	{
		copy = strdup(environ[i]);
		if (!copy)
			return(NULL);
		first_token = strtok(copy, DELIMS3);
		if (!strcmp(first_token, var))
		{
			first_token = strtok(NULL, DELIMS3);
			if (first_token)
			{
				copy = strdup(first_token);
				return (copy);
			}
			return (NULL);
		}
	}
	free(copy);
	return (NULL);
}
