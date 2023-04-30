#include "lists.h"

/**
 * insert_nodeint_at_index - insertd s new node at a given postion
 * @head: pointer to the first node
 * @idx: index where the node is added
 * @n: data to insert
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *new;
	listint_t *temmp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	(*new).n = n;
	(*new).next = NULL;

	if (idx == 0)
	{
		(*new).next = *head;
		*head = new;
		return (new);
	}

	for (j = 0; temmp && j < idx; j++)
	{
		if (j == idx - 1)
		{
			(*new).next = (*temmp).next;
			(*temmp).next = new;
			return (new);
		}
		else
			temmp = (*temmp).next;
	}
	return (NULL);
}
