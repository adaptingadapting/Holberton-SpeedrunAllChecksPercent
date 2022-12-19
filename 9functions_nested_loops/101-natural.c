#include "main.h"
#include <stdio.h>

/**
 * main - void
 * Return: 0
 */

int main(void)
{
	int i;
	int sum = 0;

	for (i = 1023; i > 0; i--)
	{
		if (!(i % 3) || !(i % 5))
			sum += i;
	}
	printf("%d\n", sum);
}
