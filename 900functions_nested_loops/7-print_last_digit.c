#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: number
 * Return: last digit
 */

int print_last_digit(int n)
{
	_putchar((_abs(n) % 10) + '0');
	return(_abs(n) % 10);
}
