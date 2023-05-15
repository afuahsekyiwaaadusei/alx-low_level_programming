#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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
	unsigned int i = 0;

	if (size == 0)
		return (0);

	str = malloc(sizeof(char) * size);
	
	if (str == NULL)
		return (0);

	while (i < size)
	{
		str[i] = c;
		i++;
	}

	return (str);
}
