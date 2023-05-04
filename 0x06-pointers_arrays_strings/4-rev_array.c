#include "main.h"

/**
 *reverse_array - reverses the content of an array of integers.
 *@a: pointer to the array of integers
 *@n: length of the array
 */

void reverse_array(int *a, int n)
{
	int i = 0;

	int x = n - 1;

	int halflen;

	if (n % 2 == 0)
		halflen = n / 2;
	else
		halflen = (n + 1) / 2;

	while (i < halflen)
	{
		int tmp = a[i];

		a[i] = a[x];
		a[x] = tmp;
		i++;
		x--;
	}
}

