#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to a newly allocated string
 * @str: string to duplicate
 *
 * Return: pointer to the copy of str
 */

char *_strdup(char *str)
{
	char *strdup;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	;

	strdup = (char *)malloc(sizeof(char) * (i + 1));

	if (strdup == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		strdup[j] = str[j];

	return (strdup);
