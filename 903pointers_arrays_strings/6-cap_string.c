#include "main.h"

/**
 * cap_string - capitalize string
 * @str: string
 * Return: stirng
 */

char *cap_string(char *str)
{
	char delims[] = {" ,.;!?\"'\t''\n'(){}'\0'"};
	int i;
	int j;
	int Capitalizenow = 1;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; delims[j]; j++)
			if (str[i] == delims[j])
				Capitalizenow = 1;

		if (Capitalizenow)
		{
			if ((str[i] <= '9' && str[i] >= '0'))
				Capitalizenow = 0;
			if (str[i] >= 'A' && str[i] <= 'Z')
			  	Capitalizenow = 0;
			if (str[i] <= 'z' && str[i] >= 'a')
			{
				str[i] -= 32;
				Capitalizenow = 0;
			}
		}
	}
	return (str);
}
