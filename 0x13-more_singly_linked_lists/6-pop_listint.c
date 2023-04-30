#include "lists.h"

/**
 * pop_listint - deletes the had node of a list
 * @head: pointer to the first element
 * Return: the data inside the element that was deleted or 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temmp;
	int number;

	if (!head || !*head)
		return (0);

	number = (**head).n;
	temmp = (**head).next;
	free(*head);
	*head = temmp;

	return (number);
}
