#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new instance of struct dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int name_len, owner_len, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (name_len = 0; name[name_len]; name_len++)
	;
	name_len++;

	dog->name = malloc(sizeof(char) * name_len);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
		dog->name[i] = name[i];
	dog->age = age;

	for (owner_len = 0; owner[owner_len]; owner_len++)
	;
	owner_len++;

	dog->owner = malloc(sizeof(char) * owner_len);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
	}
	for (i = 0; i < owner_len; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
