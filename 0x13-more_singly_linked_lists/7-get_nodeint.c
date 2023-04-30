#include "lists.h"

/**
 *get_nodeint_at_index - returns the node at a certain index in a list
 * @head: first node in the linked list
 * @index: index of the node to return
 * Return: pointer to the node we are looking or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *temmp = head;

	while (temmp && j < index)
	{
		temmp = (*temmp).next;
		j += 1;
	}

	return (temmp ? temmp : NULL);
}
