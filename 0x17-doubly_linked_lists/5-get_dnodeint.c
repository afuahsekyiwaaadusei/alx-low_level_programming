#include "lists.h"
#include <stdio.h>

/**
 *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *@head: list head pointer.
 *@index: index of node to be returned.
 *
 * Return: nth node or NULL if node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		current = current->next;
		count++;
	}
	return (NULL);
}
