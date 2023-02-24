#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks if a char is a digit
 * @c: char to be checked
 * Return: 0
 */

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
