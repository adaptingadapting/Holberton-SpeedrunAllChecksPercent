#include "main.h"
#include <stddef.h>

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source to concat from
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i]; i++)
		continue;
	for (j = 0; src[j]; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
