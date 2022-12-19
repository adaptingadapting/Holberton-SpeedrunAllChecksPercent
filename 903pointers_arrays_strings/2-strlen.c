#include "main.h"

/**
 * _strlen - main
 * @str: string
 * Return: len
 */

int _strlen(char *str)
{
	int i;
    
	for (i = 0; str[i]; i++)
		continue;
	return (i);
}
