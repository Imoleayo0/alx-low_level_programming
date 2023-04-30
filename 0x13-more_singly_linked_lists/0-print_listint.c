#include "lists.h"

/**
 *print_listint - print all the element of link list
 *@h: linked list of type
 *Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num += 1;
		h = h->next;
	}

	return (num);
}
