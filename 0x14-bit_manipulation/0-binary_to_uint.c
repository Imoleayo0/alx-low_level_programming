#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: containg binary number
 * Return: the cnverted number
 */

unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int deci_va = 0;

	if (!b)
		return (0);
	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		deci_va = 2 * deci_va + (b[j] - '0');
	}

	return (deci_va);
}
