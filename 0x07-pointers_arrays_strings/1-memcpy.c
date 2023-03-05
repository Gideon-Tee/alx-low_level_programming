#include "main.h"

/**
 * _memcpy - copies bytes from one memory area to another.
 * @dest: destination memory area.
 * @src: source memory area.
 * @n: number of bytes to be copied.
 *
 * Return: @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;

	while(i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	
	return (dest);
}
