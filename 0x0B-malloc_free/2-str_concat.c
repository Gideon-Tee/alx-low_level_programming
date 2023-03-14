#include "main.h"
#include <stdlib.h>

/**
 * str_concat - returns the pointer to the concantenation of two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, x, y;
	char *newStr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	;
	for (j = 0; s2[j] != '\0'; j++)
	;

	newStr = (char *)malloc(sizeof(char) * ((i + j + 1)));
	if (newStr == NULL)
		return (NULL);

	for (x = 0; x < i; x++)
		newStr[x] = s1[x];

	for (y = 0; y <= j; y++, x++)
		newStr[x] = s2[y];

	return (newStr);
}
