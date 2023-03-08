#include "main.h"
#include <string.h>

/**
 * _puts_recursion - prints string
 * @s: pointer to the string to print
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (strlen(s) == 0)
		_putchar('\n');

	_putchar(s[0]);
	_puts_recursion(s + 1);
}
