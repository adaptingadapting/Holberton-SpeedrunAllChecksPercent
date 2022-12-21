#include "main.h"

/**
 * str_concat - concatenates two strings
 * @str: string 1
 * @str2: string 2
 * Return: string
 */

char *str_concat(char *str1, char *str2)
{
	int i;
	int j;
	int len = 0;
	char *rstring;

	if (!str1 || !str2)
	{
		if (!str2 && str1)
			return (str1);
		if (!str1 && str2)
			return (str2);
		return (NULL);
	}
	for (i = 0; str1[i]; i++)
		len++;
	for (i = 0; str2[i]; i++)
		len++;
	rstring = malloc(len + 1);
	for (i = 0; str1[i]; i++)
		rstring[i] = str1[i];
	for (j = 0; str2[j]; j++)
	{
		rstring[j + i] = str2[j];
	}
	rstring[j + i] = str2[j];
	return (rstring);
}
