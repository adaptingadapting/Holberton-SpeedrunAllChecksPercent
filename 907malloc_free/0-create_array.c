#include "main.h"

/**
 * create_array - creates an array
 * @size: size of array
 * @c: char to fill array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	int i;

	if (!size)
		return (NULL);
	array = malloc(size);
	if (!array)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
