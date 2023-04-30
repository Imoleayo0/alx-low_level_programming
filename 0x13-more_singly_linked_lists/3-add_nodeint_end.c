#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element o the list
 * @n: data to insert in the new element
 * Return: pointer to the new node, NULL if fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newst;
	listint_t *temp = *head;

	newst = malloc(sizeof(listint_t));
	if (!newst)
		return (NULL);

	(*newst).n = n;
	(*newst).next = NULL;

	if (*head == NULL)
	{
		*head = newst;
		return (newst);
	}
	while (temp->next)
		temp = (*temp).next;
	(*temp).next = newst;

	return (newst);
}
