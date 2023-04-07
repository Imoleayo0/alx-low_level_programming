#include "main.h"

/**
 *_pow_recursion - return the value of x raised to y
 *@x: value
 *@y: power
 *
 *Return: result of the  power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
			return (1);
	}
		return (x * _pow_recursion(x, y - 1));
}
