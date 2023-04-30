#include "lists.h"

/**
 * sum_listint - sum of all data in the list
 * @head: first node in list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int summ = 0;
	listint_t *temmp = head;

	while (temmp)
	{
		summ += (*temmp).n;
		temmp = (*temmp).next;
	}

	return (summ);
}
