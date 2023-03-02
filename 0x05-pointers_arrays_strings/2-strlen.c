#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of string
 * @s: string to be used
 * Return: length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
