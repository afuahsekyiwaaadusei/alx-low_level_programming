#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 * @h: list head pointer
 *
 * Return: the number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
