#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	int i, result = 0;

	if (argc <= 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc - 1; i++)
		{
			if (isdigit(argv[i] == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				result += atoi(argv[i]);
			}
		}
		printf("%d\n", result);
	}

	return (0);
