#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: elements of array
 * @size: size of elements in array
 * Return: pointer to allocd memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	int i;

	if (!nmemb || !size)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		p[i] = '\0';     
	return (p);
}
