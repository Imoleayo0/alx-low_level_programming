#include "lists.h"

/**
 *add_nodeint - adds a new node at the beginning of a linked list
 *@head: pointer to the first node
 *@n: data to insert in that new node
 *Return: pointer to the new code, NULL if fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newst;

	newst = malloc(sizeof(listint_t));
	if (!newst)
		return (NULL);
	newst->n = n;
	(*newst).next = *head;
	*head = newst;

	return (newst);
}
