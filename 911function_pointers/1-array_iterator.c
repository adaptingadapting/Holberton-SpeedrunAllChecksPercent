#include "function_pointers.h"

/**
 * array_iterator - executes an action
 * @array: array to execute
 * @size: size of the array
 * @actiono: action to take
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
