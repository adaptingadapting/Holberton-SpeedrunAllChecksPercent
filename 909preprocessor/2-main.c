#include "main.h"

/**
 * main - main function
 * Return: int
 */

int main()
{
	char *s = __FILE__;
	int i;

	for (i = 0; s[i]; i++)
		_putchar(s[i]);
	_putchar(10);
	return (0);
}


