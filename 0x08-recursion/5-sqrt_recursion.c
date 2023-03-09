#include "main.h"

/**
 * _sqrt_recursion - calculates square root of a number
 * @n: number whose root is calculated
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	else if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	else
		return (_square_root(n, 0));
}

/**
 * _square_root - calculates square root
 * @n: number
 * @i: initial guess
 * Return: square root, i, or -1 if natural root doesn't exist
 */

int _square_root(int n, int i)
{
	if (n == i * i)
		return (i);
	if (n < i * i)
		return (-1);
	return (_square_root(n, i + 1));
}
