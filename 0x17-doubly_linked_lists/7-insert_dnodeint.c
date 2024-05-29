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
	dlistint_t *current = *h,*new_node;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == idx)
			break;
		count++;
		current = current->next;
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->prev = current->prev;
	new_node->next = current;
	new_node->n = n;
	current->prev->next = new_node;
	return (new_node);
}
