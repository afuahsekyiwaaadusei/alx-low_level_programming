#include "lists.h"
#include <stdio.h>

/**
 *listint_len - a function that prints all the elements of a listint_t list.
 *@h: starting node of list.
 *
 *Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
