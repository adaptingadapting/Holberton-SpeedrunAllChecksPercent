#include "main.h"

/**
 * puts_half - puts half the stinrg
 * @str: string
 */

void puts_half(char *str)
{
	int i = _strlen(str) / 2;
	int j = _strlen(str);

	for (; i <= j; i++)
		_putchar(str[i]);
	_putchar(10);
}
