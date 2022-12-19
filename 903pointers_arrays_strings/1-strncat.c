#include "main.h"

/**
 * _strncat - concatenates two strings
 * @n: int
 * @dest: destination string
 * @src: source to concat from
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i]; i++)
		continue;
	for (j = 0; src[j] && j < n; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
