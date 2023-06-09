#include "main.h"
#include <stdio.h>

/**
 *print_array - prints n elements of an array of integers
 *followed by a new line.
 *@a: pointer to array to be printed
 *@n: number of elements to be printed
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == (n - 1))
		{
			printf("%d", *(a + i));
			i++;
		}
		else
		{
			printf("%d, ", *(a + i));
			i++;
		}
	}
	printf("\n");
}
