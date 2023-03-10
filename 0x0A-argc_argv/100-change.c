#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the number of coins to make change
 * @argc: number of arguments to main
 * @argv: the arguments to main
 * Return: 0 when successful
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
	}
	else
	{
		while (cents > 0)
		{
			if (cents >= 25)
				cents -= 25;
			else if (cents >= 10)
				cents -= 10;
			else if (cents >= 5)
				cents -= 5;
			else if (cents >= 2)
				cents -= 2;
			else
				cents -= 1;
			coins += 1;
		}
		printf("%d\n", coins);
	}
	return (0);
}
