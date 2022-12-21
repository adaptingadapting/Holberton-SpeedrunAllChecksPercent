#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array: array to search from
 * @size: size of the array
 * @cmp: function that compares
 * Return: returns the first element that matches
 */

int int_index(int *array, int size, int (*cmp)(int a))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (!cmp(array[i]))
			continue;
		return (i);
	}
	return (-1);
}
