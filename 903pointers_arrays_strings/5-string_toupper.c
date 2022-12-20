#include "main.h"

/**
 * string_toupper - transfrom a string to uppercase
 * @str: string
 * Return: string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			str[i] -= 32;
		}
	}
	return (str);
}
