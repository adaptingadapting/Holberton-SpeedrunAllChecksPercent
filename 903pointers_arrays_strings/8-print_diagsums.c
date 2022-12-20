#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints something
 * @a: a
 * @size: size
 * Return: returns
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + 1];
		sum2 += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
