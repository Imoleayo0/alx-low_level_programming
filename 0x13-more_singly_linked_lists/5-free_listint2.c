#include "lists.h"

/**
 * free_listint2 - free a linked list
 * @head: pointed to the listint_list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *temmp;

	if (head == NULL)
		return;

	while (*head)
	{
		temmp = (**head).next;
		free(*head);
		*head = temmp;
	}

	*head = NULL;
}
