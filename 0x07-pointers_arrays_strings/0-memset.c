#include "main.h"

/**
 *_memset fill a block of memory with a given value
 *@s: starting address of memory to be filled
 *@n: number of bytes to be changed
 *
 * Return: changed array with new value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
