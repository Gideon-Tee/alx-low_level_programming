#include "main.h"
#include <stdio.h>

/**
 * _puts - Function that prints a string
 * @str: pointer to the string to be written.
 *
 * Return: No return.
 */

void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	putchar('\n');
}
