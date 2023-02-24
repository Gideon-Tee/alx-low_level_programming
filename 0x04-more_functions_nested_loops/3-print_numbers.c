#include "main.h"

/**
 * print_numbers - print numbers 0 to 9
 * Description: prints numbers without returning a value
 * Return: none
 */

void print_numbers(void)
{
	int ch;

	for (ch=48; ch<58; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
