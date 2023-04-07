#include "main.h"

int actual_sqrt_recursion(int n, int j);

/**
 *_sqrt_recursion - return the nature square of a number
 *@n: number to calculate
 *
 *Return: the square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 *actual_sqrt_recursion - recurse to find natural
 *square of a number
 *@n: number to calculate the square root
 *@j: iterator
 *Return: the resulting square
 */

int actual_sqrt_recursion(int n, int j)
{
	if (j * j > n)
		return (-1);
	if (j * j == n)
		return (j);
	return (actual_sqrt_recursion(n, j + 1));
}
