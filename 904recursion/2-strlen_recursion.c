#include "main.h"

/**
 * _strlen_recursion - returns len of str
 * @str: string
 * Return: int
 */

int _strlen_recursion(char *str)
{
	if (*str)
	{
		return (1 + _strlen_recursion(str + 1));
	}
		else
			return (0);
}
