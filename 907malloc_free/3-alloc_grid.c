#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @w: widhth
 * @h: height
 * Return: 0
 */

int **alloc_grid(int w, int h)
{
	int i;
	int j;
	int **rstring;

	if (w <= 0 || 0 >= h)
		return NULL;
	rstring = malloc(sizeof(int *) * h);
	if (!rstring)
		return (NULL);
	for (i = 0; i < h; i++)
	{
		rstring[i] = malloc(sizeof(int *) * w);
		if (!rstring[i])
		{
			for (j = i; j >= 0; j--)
				free(rstring[i]);
			return (NULL);
		}
	}
	for (i = 0; i < h; i++)
	{
		for (j = 0; j < w; j++)
			rstring[i][j] = 0;
	}
	return (rstring);
}
