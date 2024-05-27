#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint -  adds a new node at the beginning of a dlistint_t list.
 * @head: head of list.
 * @n: new node value.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current = *head;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (current == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
	}
	else
	{
		current->prev = new_node;
		new_node->next = current;
		new_node->prev = NULL;
	}
	*head = new_node;
	return (*head);
}
