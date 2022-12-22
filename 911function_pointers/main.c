#include "function_pointers.h"

/**
 * main - does an operation on a and b
 * @a: int
 * @b: int
 * Return: returns a code
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int (*f)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	if (strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	i = atoi(argv[1]);
	j = atoi(argv[3]);
	f = get_op_func(argv[2]);
	if (f)
	{
		i = f(i, j);
		printf("%d\n", i);
	}
	else
	{
		printf("Error\n");
		exit(99);
	}
}
