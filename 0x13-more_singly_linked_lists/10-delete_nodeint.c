#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a  list at a specified index
 * @head: pointer to the first element in the list
 * @index: index of the node ro delete
 * Return: 1(success) or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temmp = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (**head).next;
		free(temmp);
		return (1);
	}


	while (i < index - 1)
	{
		if (!temmp || !(temmp->next))
			return (-1);
		temmp = (*temmp).next;
		i += 1;
	}

	current = (*temmp).next;
	(*temmp).next = (*current).next;
	free(current);
	return (1);
}
