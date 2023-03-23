#include "function_headers.h"

/**
 * int_index - searches for an integer
 * @array: array to search through
 * @size: size of the array
 * @cmp: pointer to function to compare values
 * Return: index of item or -1 if unsuccessful
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (array && cmp)
	{

		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
