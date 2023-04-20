#include "main.h"
/**
 * is_prime_number - check if n prime number
 * @n : number be checked
 *
 * Return : returnned 1 or 0
 */
int is_prime_number(int n)
{
	if(n <= 1)
	{
		return (0);
	}
	else
		return (_prime_1(n, 2));
}

/**
 * _prime_1 - is prime
 * @a: same as n
 * @b: divisor from 1 to n
 *
 * Return : 1 or 0
 */
int _prime_1(int a, int b)
{
	if (a % i == 0)
	{
		if (i == a)
			return (1);
		else 
			return (0);
	}
	else 
		return (_prime_1(a, b + 1));
}
