#include "main.h"

/**
 * _strchr - locates a char in a string
 * @str: string to be parsed
 * @c: char to find
 */

char *_strchr(char *str, char c)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == c)
		{
			return (str + i);
		}
	}
	return (NULL);
}
