#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index index of the list.
 * @head: list head pointer.
 * @index: index of node to be deleted.  Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *prev = NULL;
	unsigned int count = 0;

	if (current == NULL)
		return (-1);
	while (current != NULL)
	{
		if (count == index)
			break;
		count++;
		prev = current;
		current = current->next;
	}
	if (current == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
	}
	else
	{
		prev->next = current->next;
		current->next->prev = prev;
	}
	free(current);
	return (1);
}
