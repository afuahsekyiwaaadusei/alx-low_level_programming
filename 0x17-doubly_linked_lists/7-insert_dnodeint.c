#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: list head pointer.
 * @idx: index at which to insert node.
 * @n: data of new node
 *
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *current = *h, *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (current == NULL)
		return (new_node);
	for (count = 0; current->next != NULL; count++)
	{
		if (count == idx)
			break;
		current = current->next;
	}
	if (current->next == NULL && count > 0)
	{
		if (idx == count + 1)
		{
			new_node->prev = current;
			current->next = new_node;
		}
		else
			return (NULL);
	}
	else
	{
		new_node->prev = current->prev;
		new_node->next = current;
		if (idx == 0)
			*h = new_node;
		else
			current->prev->next = new_node;
		current->prev = new_node;
	}
return (new_node);
}
