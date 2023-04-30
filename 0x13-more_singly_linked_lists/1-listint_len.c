#include "lists.h"

/**
 *listint_len -  return the number of element of a linked list
 *@h: linked list of type listint to traverse
 *Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num += 1;
		h = h->next;
	}

	return (num);
}
