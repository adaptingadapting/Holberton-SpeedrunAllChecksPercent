#include "main.h"

/**
 * _strdup - copies a string into a malloc
 * @str: string
 * Return: string
 */

char *_strdup(char *str)
{
	int i;
	int j;
	char *copied;

	if (!str)
		return (NULL);
	for (i = 0; str[i]; i++)
		continue;
	copied = malloc(i + 1);
	for (j = 0; j < i; j++)
	{
		copied[j] = str[j];
	}
	copied[j] = str[j];
	return (copied);
}
