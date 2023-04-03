#include "main.h"

/**
 *_strpbrk - Entry point
 *@s: inpute
 *@accept: inpute
 *Return: Always 0
 */

char *_strpbrk(char *s, char *accept)
{
	char *i;

	while (*s)
	{
		for (i = accept; *i; i++)
		{
		if (*s == *i)
		return (s);
		}
		s++;
	}
	return ('\0');
}
