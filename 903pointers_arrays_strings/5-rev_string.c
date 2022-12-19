#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses string
 * @str: string
 */

void rev_string(char *str)
{
	int i;
	int j = _strlen(str) - 1;
	char aux;

	for (i = 0; str[i]; i++, j--)
	{
		if (i == j)
			break;
		aux = str[i];
		str[i] = str[j];
		str[j] = aux;
	}
}
