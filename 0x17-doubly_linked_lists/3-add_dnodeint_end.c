#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - a function that adds a
 * @head: double pointer to the beginning of the linked list
 * @n: value to add to new nodenew node at the end of a dlistint_t list.
 *
 * Return: pointer to the new node, or NULL on failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current_head;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	current_head = *head;
	while (current_head->next != NULL)
		current_head = current_head->next;
	new_node->prev = current_head;
	current_head->next = new_node;

	return (new_node);
}
