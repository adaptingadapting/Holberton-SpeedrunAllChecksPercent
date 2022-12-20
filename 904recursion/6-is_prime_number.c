#include "main.h"

int isprime(int a, int b);
  
/**
 * is_prime_number - check is n is prime
 * @n: is prime)
 * Return: 1 if prime 0 if not
 */

int is_prime_number(int n)
{
	if (n < 0)
		n = -n;
	return(isprime(2, n));
}

/**
 * isprime - isprime?
 * @a: a
 * @b: b
 * Return 1 if prime 0 if not
 */

int isprime(int a, int b)
{
	if (b == 1)
		return 0;
	if (a < b)
	{
		if (b == 1 || !(b % a))
			return (0);
		isprime(a + 1, b);
	}
	else 
		return (1);
}
