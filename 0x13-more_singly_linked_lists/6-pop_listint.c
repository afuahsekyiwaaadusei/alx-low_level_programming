#include "lists.h"
#include <stdlib.h>

/**
 *pop_listint - a function that deletes the head node
 *of a listint_t linked list.
 *@head: pointer to the starting node.
 *
 *Return: the head node’s data (n) or if the linked list is empty return 0.
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int data = (*head)->n;

	if (head == NULL)
		return (0);
	*head = (*head)->next;
	free(tmp);
	return (data);
}
