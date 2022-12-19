#include "main.h"

/**
 * _strncpy - string copying
 * @dest: destination
 * @src: source
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
