#include "main.h"

/**
 * _strchr - returns pointer to first occurence of char
 * @s: string to check
 * @c: character to check
 */

char *_strchr(char *s, char c)
{
	unsigned int size;
	unsigned int i;

	size = 0;

	while (*(s + size) != '\0')
	{
		size++;
	}

	for (i = 0; i <= size; i++)
	{
		if (*(s + i) == 'c')
		{
			return (s + i);
			break;
		}
		else
		{
			if (i == size)
				return ('\0');
		}
	}

