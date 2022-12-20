#include "main.h"

int _sqrt2(int a, int b);

/**
 * _sqrt_recursion - recursion
 * @x: x
 * Return: int
 */

int _sqrt_recursion(int x)
{
	return(_sqrt2(1, x));
}

/**
 * _sqrt2 - finds if a is sqrt of b
 * @a: as said
 * @b yep
 * Return: int
 */

int _sqrt2(int a, int b)
{
	if (a * a == b)
	{
		return (a);
	}
	else if (a <= b)
		return (_sqrt2(a + 1, b));
	else
		return (-1);
}
