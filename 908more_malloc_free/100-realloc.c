#include "main.h"

/**
 * _realloc - reallocs memory from osize to nsize
 * @ptr: pointer to alloc to
 * @osize: oldisze
 * @nsize: newsize
 * Return: void pointer
 */

void *_realloc(void *ptr, unsigned int osize, unsigned int nsize)
{
	int i;
	char *ptr2;
	char *ptr3 = ptr;

	if (ptr)
	{
		if (osize == nsize)
			return (ptr);
		if (!nsize)
		{
			free(ptr);
			return (NULL);
		}
		ptr2 = malloc(nsize);
		for (i = 0; i < nsize && ptr3[i]; i++)
			ptr2[i] = ptr3[i];
		free(ptr);
		return (ptr2);
  	}
	ptr2 = malloc(nsize);
	return (ptr2);
}
