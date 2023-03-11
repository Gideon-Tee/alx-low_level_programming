#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: number of arguments
 * @argv: set of arguments
 * Return: Nothing
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%i\n", argc - 1);

	return (0);
}
