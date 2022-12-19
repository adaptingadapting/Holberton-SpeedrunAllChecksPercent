#include "main.h"

/**
 * _isidigt - main
 * @c: int
 * Return: 1 if yes 0 if no
 */

int _isdigit(int c)
{
	if (('0' - c) >= 0 && ('0' - c) <= 9)
		return (1);
	return (0);
}
