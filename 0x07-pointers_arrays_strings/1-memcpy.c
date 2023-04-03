#include "main.h"

/**
 *_memcpy - a function that copies n bytes from  memory area src to dest
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *Return: cpoied memory with n bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		*(dest + r) = *(src + i);
		n--;
	}
	return (dest);
}
