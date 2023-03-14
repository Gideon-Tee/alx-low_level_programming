#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array and inintializes it
 * @size: size of array
 * @c: character to initialize array with
 *
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);

	free(arr);
}
