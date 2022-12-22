#include "function_pointers.h"

/**
 * _strcmp - compares two strings
 * @str1: string
 * @str2: string
 * Return: int
 */

int _strcmp(char *str1, char *str2)
{
	int i;

	for (i = 0; str1[i]; i++)
	{
		if (str1[i] - str2[i])
		{
			return (str1[i] - str2[i]);
		}
	}
	for (i = 0; str2[i]; i++)
	{
	    	if (str2[i] - str1[i])
		{
			return (str2[i]);
		}
	}
	return (0);
}
