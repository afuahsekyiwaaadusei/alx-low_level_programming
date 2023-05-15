#include "main.h"
#include <stdlib.h>

/**
 *create_array - creates an array of chars,
 *and initializes it with a specific char.
 *@size: size of array.
 *@c: initializing value.
 *
 *Return: a pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *str;

	if (size == 0)
	{
		return (0);
	}

	str = malloc(size * sizeof(char));
	str[0] = c;

	if (str == NULL)
		return (0);
	return (str);
}
