#include <stdio.h>

/**
 * main - void
 * Return: always 0
 */

int main(void)
{
	int i = 'a';

	for (; i <= 'z'; i++)
		putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);
	putchar(10);
	return (0);
}
