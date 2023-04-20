#include "main.h"

int _prime_1(int a, int b);

/**
 * is_prime_number - check if  prime number
 * @n: the number checked
 * Return: 1 if n is a prime number, else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (_prime_1(n, 2));
}

/**
 * _prime_1 - if the number is prime
 * @a: the number to  test
 * @b: iterates number
 * Return: 1 or 0
 */
int _prime_1(int a, int b)
{
	if (a % b == 0)
	{
		if (b == a)
			return (1);
		else
			return (0);
	}
	else
		return (_prime_1(a, b + 1));
}
