#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the beginning of the linked list
 * @idx: index at which to insert the new node
 * @n: data to enter into new node
 *
 * Return: pointer to the new node, or NULL on failure
 */

unsigned int dt_len(dlistint_t *h);

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current_head, *temp;
	unsigned int i = dt_len(*h), p = 0;

	if (idx > i)
	{
		return (NULL);
	}
	current_head = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (current_head == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		current_head = new_node;
		return (new_node);
	}

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		*h = new_node;

		if (new_node->next != NULL)
		{
			(new_node->next)->prev = new_node;
		}
		return (new_node);
	}

	if (idx == i - 1)
	{
		new_node->next = NULL;
		while (current_head->next != NULL)
			current_head = current_head->next;

		new_node->prev = current_head;
		current_head->next = new_node;
		return (new_node);
	}

	temp = *h;
	while (p < idx - 1)
	{
		temp = temp->next;
		p++;
	}
	new_node->prev = temp;
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}

/**
 * dt_len - function that returns the number of
 * elements in a linked dlistint_t list.
 * @h: pointer to the first node
 *
 * Return: number of nodes
 */
unsigned int dt_len(dlistint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}

