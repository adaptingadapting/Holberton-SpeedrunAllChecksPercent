#include "main.h"

/**
 * swap_int - main
 * @a: int
 * @b: int
 */

void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;
}
