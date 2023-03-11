#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all it's command line arguments
 * @argc: number of arguments
 * @argv: set of all arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	printf("%s\n", argv[0]);
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
			printf("%s\n", argv[i]);
	}

	return (0);
}
