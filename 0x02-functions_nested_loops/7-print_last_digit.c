#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - prints the last digit of a number
 *
 * @a: parameter to be taken
 *
 * Return: Always 0.
 */

int print_last_digit(int a)
{
	int lastDigit = abs(a % 10);

	_putchar(lastDigit + '0');
	return (lastDigit);
}
