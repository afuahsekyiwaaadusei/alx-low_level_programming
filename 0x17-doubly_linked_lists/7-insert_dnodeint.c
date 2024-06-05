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
	dlistint_t *current = *h , *prev = NULL , *new_node;
	unsigned int count;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (current == NULL)
	{
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}
	for (count = 0; current != NULL; count++)
	{
		if (count == idx)
			break;
		prev = current;
		current = current->next;
	}
	new_node->prev = prev;
	if (current == NULL)
	{
		if (idx == count + 1)
		{
			prev->next = new_node;
			return (new_node);
		}
		else 
			return (NULL);
	}
	new_node->next = current;
	if (prev == NULL)
		*h = new_node;
	else
		prev->next = new_node;
	current->prev = new_node;
	return (new_node);
}
