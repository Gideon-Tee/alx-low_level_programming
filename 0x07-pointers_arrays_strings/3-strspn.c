#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length, j;

	/* loop through string s */
	for (length = 0; *(s + length) != '\0'; length++)
	{
		/* loop through string accept */
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			/* check where the first character in string j appears */
			/* in string c and immediately break out of loop */
			if (*(s + length) == *(accept + j))
			{
				break;
			}
		}
		/* check if there is no string accept to loop through */
		if (!*(accept + j))
			break;
	}
	/* return the length where the first character appears */
	return (length);
}
