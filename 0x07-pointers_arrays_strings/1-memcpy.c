#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest: destination memory area.
 * @src: source memory area.
 * @n: number of bytes to be copied.
 *
 * Return: the pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while(i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
