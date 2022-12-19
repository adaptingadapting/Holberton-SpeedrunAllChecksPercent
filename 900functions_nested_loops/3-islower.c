#include "main.h"

/**
 * _islower - islower
 * @c: char
 * Return: int
 */

int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	return (0);
}
