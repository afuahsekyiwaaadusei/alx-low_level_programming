#include "lists.h"
#include <stdlib.h>

/**
 *insert_nodeint_at_index - a function that inserts a new node at a given position.
 *@head: starting node.
 *@idx:  index of the list where the new node should be added. Index starts at 0.
 @n: data to be added.
 *
 *if it is not possible to add the new node at index idx,
 *do not add the new node and return NULL
 *Return: the address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
	unsigned int i = 0;

	while (head != NULL && i != index -1)
	{
		head = head->next;
		i++;
	}

}
