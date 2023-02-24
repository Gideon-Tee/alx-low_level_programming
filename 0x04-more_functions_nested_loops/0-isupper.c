#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks if a char is uppercase
 * @c: character to be checked
 * Return: 0
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
