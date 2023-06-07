#include "lists.h"
#include <stdlib.h>

/**
 *sum_listint -  a function that returns the
 *sum of all the data (n) of a listint_t linked list.
 *@head: starting node.
 *
 *Return: sum of all the data (n) or if the list is empty, return 0.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
