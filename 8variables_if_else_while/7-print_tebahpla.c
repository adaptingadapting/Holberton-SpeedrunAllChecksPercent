#include <stdio.h>

/**
 * main - void
 * Return: always 0
 */

int main(void)
{
	int i = 'z';

	for (; i >= 'a'; i--)
		putchar(i);
	putchar(10);
	return (0);
}
