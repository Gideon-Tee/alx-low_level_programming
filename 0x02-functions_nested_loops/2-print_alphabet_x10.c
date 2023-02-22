#include "main.h"

/**
 * print_alphabet_x10 - the alphabets 10 times
 *
 * Return: return void
 */


void print_alphabet_x10(void)
{
	char i;
	int count = 0;

	while (count < 10)
	{

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		count++;
	}
}
