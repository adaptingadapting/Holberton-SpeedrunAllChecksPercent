#include "main.h"

/**
 * _memcpy - main
 * @n: n
 * @src: source
 * @dest: dest
 * Return: return string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
