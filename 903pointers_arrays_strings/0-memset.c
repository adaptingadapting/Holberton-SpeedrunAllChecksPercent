#include <stdio.h>
#include "main.h"

/**
 * _memset - memset mimick function
 * @str: string to be filled
 * @n: n amount of times
 * @c: by char c
 */

char *_memset(char *str, char c, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		str[i] = c;
	}
	return (str);
}
