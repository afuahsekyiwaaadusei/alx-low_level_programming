#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - A function that frees a dlistint_t list.
 * @head: list head pointer.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
