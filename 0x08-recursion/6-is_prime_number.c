#include "main.h"

/**
 * _isPrime - checks if a number is prime.
 * @n: number to be checked.
 * @i: factors guess.
 * Return: 1 or 0.
 */

int _isPrime(int n, int i)
{
	if (n % i == 0)
		return (1);
	if (n == i)
		return (0);

	return (_isPrime(n, i + 1));
}

/**
 * is_prime_number - checks if a number is prime.
 * @n: number to be checked.
 * Return: 1 or 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (_isPrime(n, 2));
}
