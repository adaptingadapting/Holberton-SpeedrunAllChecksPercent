#include "main.h"

/**
 * _strpbrk - string something
 * @str1: string
 * @str2: string 2
 * @Return: pointer to frist occurence of char
 */

char *_strpbrk(char *str1, char *str2)
{
	int i;
	int j;

	for (i = 0; str1[i]; i++)
	{
		for (j = 0; str2[j]; j++)
		{
			if (str1[i] == str2[j])
				return (str1 + i);
		}
	}
	return (NULL);
}
