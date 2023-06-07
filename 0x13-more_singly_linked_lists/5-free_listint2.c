#include "lists.h"
#include <stdlib.h>

/**
 *free_listint2 - a function that frees a listint_t list.
 *@head: pointer to the start of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			tmp = *head;
			*head = (*head)->next;
			free(tmp);
		}
		*head = NULL;
	}
}
