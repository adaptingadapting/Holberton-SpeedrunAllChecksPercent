#include "main.h"
#include <stdio.h>
/**
 * arrray_range - creates an array of ints
 * @min: min
 * @max: max
 * Return: array of integers
 */

int *array_range(int min, int max)
{
	int i;
	int j;
	int *a;

	if (min > max)
		return (NULL);
	j = (1 + max - min) * 4;
	a = malloc(j);
	if (!a)
		return (NULL);
	for (i = min, j = 0; i <= max; i++, j++)
	{
		a[j] = i;
	}
	return (a);
}
