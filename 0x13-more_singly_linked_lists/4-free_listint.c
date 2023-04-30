#include "lists.h"

/**
 * free_listint -free a linked list
 * @head: listint_t list to be freeed
 */

void free_listint(listint_t *head)
{
	listint_t *temmp;

	while (head)
	{
		temmp = (*head).next;
		free(head);
		head = temmp;
	}
}
