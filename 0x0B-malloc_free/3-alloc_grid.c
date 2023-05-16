#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *@width: width of array.
 *@height: height of array.
 *
 *Each element of the grid should be initialized to 0
 *The function should return NULL on failure
 *If width or height is 0 or negative, return NULL
 *Return: a pointer to the 2-d array of integers
 */
int **alloc_grid(int width, int height)
{
	int *arr = malloc(sizeof(int) * height * width);
	int i = 0;
	int **arr2 = malloc(sizeof(int *)  * height);

	if (width <= 0 || height <= 0)
		return (NULL);
	if (arr == NULL || arr2 == NULL)
		return (NULL);

	while (i < height)
	{
		int j = 0;

		while (j < width)
		{
			if (j == 0)
			{
				arr2[i] = &arr[i * width + j];
			}
			arr[i * width + j] = 0;
			j++;
		}

		i++;
	}
	return (arr2);
}
