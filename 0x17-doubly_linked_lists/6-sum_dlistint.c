#include "lists.h"

/**
 * sum_dlistint - returns sum of all the data(n) of a dlistint_t linked list.
 * @head: list head pointer.
 *
 * Return: the sum of all data of a linked lists or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
