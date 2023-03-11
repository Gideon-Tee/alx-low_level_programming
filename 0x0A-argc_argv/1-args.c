#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: number of arguments
 * @argv: set of arguments
 * Return: Nothing
 */

int main(int argc, char *argv[])
{
	(void) argv[];
	printf("%i\n", atoi(argc));

	return (0);
}
