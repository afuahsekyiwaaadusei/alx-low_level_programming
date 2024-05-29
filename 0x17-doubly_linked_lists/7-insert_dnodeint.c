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
	dlistint_t *current = *h, *new_node;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (current == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
	}
	else
	{
		if (idx == 0)
		{
			new_node->prev = NULL;
			new_node->next = current;
			current->prev = new_node;
			*h = new_node;
			return (new_node);
		}
		while (current->next != NULL)
		{
			if (count == idx)
				break;
			count++;
			current = current->next;
		}
		if (current->next == NULL)
		{
			new_node->prev = current;
			new_node->next = NULL;
			current->next = new_node;
		}
		else
		{
			new_node->prev = current->prev;
			new_node->next = current;
			current->prev->next = new_node;
		}
	}
	return (new_node);
}
