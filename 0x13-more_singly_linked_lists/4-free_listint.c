#include "lists.h"
#include <stdlib.h>

/**
 *free_listint - a function that frees a listint_t list.
 *@head: ths start of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
