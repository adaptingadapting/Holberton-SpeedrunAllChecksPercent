#include "main.h"

/**
 * leet - main
 * @string: string to be turned 1337
 * Return: string
 */

char *leet(char *str)
{
	int i;
	int j;
	char array[] = {"aAeEoOtTlL'\0'"};
	char array2[] = {"4433007711'\0'"};

	for (i = 0; str[i]; i++)
	{
		for (j = 0; array[j]; j++)
		{
			if (str[i] == array[j])
			{
				str[i] = array2[j];
			}
		}
	}
	return (str);
}
