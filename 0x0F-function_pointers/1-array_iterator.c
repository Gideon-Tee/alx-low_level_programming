#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function to perform action
 * on array elements
 * @array: array items
 * @size: size of array
 * @action: action to perform
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && action)
	{

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
