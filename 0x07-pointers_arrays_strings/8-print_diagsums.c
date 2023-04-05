#include "main.h"
#include <stdio.h>

/**
 *print_diagsums  - Entry point
 *@a: input
 *@size: inpute
 *Return: Always 0
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int j;

	for (j = 0; j < size; j++)
	{
		sum1 = sum1 + a[j * size + j];
	}

	for (j = size - 1; j >= 0; j--)
	{
		sum2 += a[j * size + (size - j - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
