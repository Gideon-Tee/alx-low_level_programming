#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14
 * Return: Always 0
 */

void more_numbers(void)
{
	int i = 0;
	int ch;

	while(i < 10) {
		for (ch = 48; ch <= 62; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
