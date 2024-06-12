#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * range_num -used to create a array of numbers
 * @min: minimum number.
 * @max: maximum number.
 * @arr: arr pointer.
 */
void range_num(int min, int max, int *arr)
{
	int i;

	for (i = 0; min <= max; i++)
	{
		*(arr + i) = min;
		min++;
	}
}
/**
 * palindrome - checks if a number is a palindrome.
 * @num: number to be checked.
 *
 * Return: 1 if @num is a palindrome and 0 otherwise.
 */
int palindrome(int num)
{
	dlistint_t *head = NULL, *current = NULL, *prev = NULL, *h = NULL;
	int remainder;
	
	while (num)
	{
		remainder = num % 10;
		add_dnodeint(&head, remainder);
		num /= 10;
	}
	current = head;
	h = head;
	while (current != NULL)
	{
		prev = current;
		current = current->next;
	}
	current = h;
	while(current != NULL && prev != NULL)
	{
		if (current->n != prev->n)
			return (0);
		current = current->next;
		prev = prev->prev;
	}
	return (1);
}
/**
 *largest_product - checks for the largest palindrome from the product of 3 digits
 * Return: the largest palindrome product.
 */
int largest_product()
{
	int num1[900], num2[900], x, y, result = 0, product;
	
	range_num(100, 999, num1);
	range_num(100,999, num2);
	for (x = 1; x <= 900; x++)
	{
		for (y = 1; y <= 900; y++)
		{
			product = num1[x] * num2[y];
			if (palindrome(product))
			{
				if (product > result)
					result = product;
			}

		}
	}
	return (result);
}
