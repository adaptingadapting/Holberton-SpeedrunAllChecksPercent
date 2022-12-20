#include "main.h"

/**
 * _strspn - gives a int
 * @str: string
 * @accept: accept
 * Return: unsigned int
 */

unsigned int _strspn(char *str, char *accept)
{
	int i;
	unsigned int l;
	int j;
	unsigned int result = 0;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (str[i] == accept[j])
			{
				result++;
			}
		}
		if (result)
		{
			if (l == result)
				return (result);
			l = result;
		}
	}
	return (result);
}
