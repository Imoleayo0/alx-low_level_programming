#include "main.h"

/**
 * print_rev - reverse a string
 * @s: string
 * return: 0
 */

void print_rev(char *s)
{
	int length = 0;
	int n;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (n = length; n > 0; n--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
