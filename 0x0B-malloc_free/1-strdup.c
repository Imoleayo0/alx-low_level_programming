#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *_strdup - duplicate to new memory space location
 *@str: char
 *Return: 0
 */

char *_strdup(char *str)
{
	char *jjj;
	int k, h = 0;

	if (str == NULL)
		return (NULL);
	k = 0;
	while (str[k] != '\0')
		k++;

	jjj = malloc(sizeof(char) * (k + 1));
	if (jjj == NULL)
		return (NULL);
	for (h = 0; str[h]; h++)
		jjj[h] = str[h];
	return (jjj);
}
