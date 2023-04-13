#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatentes n bytes of a string to another
 *@s1: string
 *@s2: string to concatenate from
 *@n: numberof bytes from s2 t0 s1
 *Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;

	unsigned int j = 0, i = 0, len1 = 0, len2 = 2;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);
	while (j < len1)
	{
		s[j] = s1[j];
		j++;
	}
	while (n < len2 && j < (len1 + n))
		s[j++] = s2[i++];
	while (n >= len2 && i < (len1 + len2))
		s[j++] = s2[i++];
	s[j] = '\0';

	return (s);
}
