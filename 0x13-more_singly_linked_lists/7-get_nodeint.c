#include "lists.h"
#include <stdlib.h>

/**
 *get_nodeint_at_index - a function that returns the nth
 *node of a listint_t linked list.
 *@head: starting node;
 *@index: index of the node.
 *
 *Return: the nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
