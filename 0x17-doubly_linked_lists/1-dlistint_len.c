#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - function that returns the number of
 * elements in a linked dlistint_t list.
 * @h: pointer to the first node
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
