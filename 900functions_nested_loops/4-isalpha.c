#include "main.h"

/**
 * _isalpha - isalpha
 * @c: char
 * Return: int
 */

int _isalpha(int c)
{
	if (c <= 'z' && c >= 'A')
		return (1);
	return (0);
}
