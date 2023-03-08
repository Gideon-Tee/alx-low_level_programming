#include "main.h"
#include <string.h>

/**
 * _puts_recursion - prints string
 * @s: pointer to the string to print
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
