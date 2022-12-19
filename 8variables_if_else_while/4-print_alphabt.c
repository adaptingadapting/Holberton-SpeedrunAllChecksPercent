#include <stdio.h>

/**
 * main - void
 * Return: always 0
 */

int main(void)
{
	int i = 'a';

	for (; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
			putchar(i);
	}
	putchar(10);
}
