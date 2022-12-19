#include <stdio.h>
#include "main.h"

/**
 * _atoi - maain
 * @str: string
 * Return: int
 */

int _atoi(char *str)
{
	int sign = 0;
	int i;
	int rtr = 0;
	int elevationNeeded = 0;
	int firstdigit;
	int elevation = 1;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == '-')
			sign++;
		if (str[i] <= '9' && str[i] >= '0')
		{
			firstdigit = i;
			for (i; str[i] <= '9' && str[i] >= '0'; i++)
			{
				elevationNeeded++;
			}
			for (i = 0; i < elevationNeeded; i++)
			{
				elevation *= 10;
			}
			for (; str[firstdigit]; firstdigit++, elevation /= 10)
			{
				if (str[firstdigit] <= '9' && str[firstdigit] >= '0')
					rtr += ((str[firstdigit] - '0') * elevation);
			}
			if (!sign % 2)
				return (rtr / 10);
			return (-rtr / 10);
		}
	}
	return (0);
}
