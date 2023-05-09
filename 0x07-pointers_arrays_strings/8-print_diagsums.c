#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - prints the sum of the two diagonals
 *of a square matrix of integers.
 *@a: 2d array of integers(square matrix)
 *@size: size of square martix of integer
 */

void print_diagsums(int *a, int size)
{
	int fdiagsum = 0;
	int sdiagsum = 0;
	int i = 0;

	while (i < size)
	{
		fdiagsum += a[(i * size) + i];
		sdiagsum += a[(size - 1) + ((size - 1) * i)];
		i++;
	}
	printf("%d, %d\n", fdiagsum, sdiagsum);
}
