#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all
 * the data (n) of a dlistint_t linked list.
 * @head: pointer to the beginning of the linked list
 *
 * Return: sum of all data, or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	if (head == NULL)
	{
		return (i);
	}

	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}

	return (i);
}
