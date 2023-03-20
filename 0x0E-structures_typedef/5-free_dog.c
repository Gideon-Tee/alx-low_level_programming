#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free memory allocated to d
 * @d: pointer to dog
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
