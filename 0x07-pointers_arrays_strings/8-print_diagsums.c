#include "main.h"
#include <stdio.h>


void print_diagsums(int *a, int size)
{
	unsigned int i, j, k, l;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += *a[i][j];
		}
	}

	for (k = size - 1; k >= 0; k--)
	{
		for (l = size - 1; l >= 0; l--)
		{
			if (k == l)
				sum2 += *a[k][l];
		}
	}

	printf("%d, %d", sum1, sum2);
