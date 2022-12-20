#include "main.h"

/**
 * _strstr - string finder
 * @haystack: haystack
 * @needle: find in haystack
 * Return: needle in hasytack
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int diff = 0;;
	int retorno;

	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[0])
		{
			retorno = i;
			for (j = 0; needle[j]; j++, i++)
			{
			  diff += (needle[j] - haystack[i]);
			}
			if (!diff)
			{
				return(haystack + retorno);
			}
		}
	}
	return (NULL);
}
