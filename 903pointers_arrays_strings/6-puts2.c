#include "main.h"

/**
 * puts2 - main
 * @str: string
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (!(i % 2))
		  _putchar(str[i]);
	}
	_putchar(10);
}
