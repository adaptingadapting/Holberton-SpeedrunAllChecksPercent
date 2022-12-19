#include <stdio.h>

/**
 * main - void
 * Return: always 0
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (k = '0'; k <= '9'; k++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			for (j = '0'; j <= '9'; j++)
			{
				if (((j != i) && (k != i) && (k != j)) && ((j > i) && (j > k) && (i > k)))
				{
					putchar(k);
					putchar(i);
					putchar(j);
					if (k < '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
