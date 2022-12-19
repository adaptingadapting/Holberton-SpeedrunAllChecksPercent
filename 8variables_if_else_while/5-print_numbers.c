#include <stdio.h>

/**
 * main - void
 * Return: always 0
 */

int main(void)
{
	int i = '0';

	for (; i <= '9'; i++)
		putchar(i);
	putchar(10);
}
