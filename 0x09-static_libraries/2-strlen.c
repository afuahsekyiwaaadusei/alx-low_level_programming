#include "main.h"

/**
 *_strlen - returns the length of a string
 *@s: pointer to string whose length is to be returned
 *
 *Return: The length of string
 */

int _strlen(char *s)
{
	int i = 0;
	int x = 0;

	while (*(s + x) != '\0')
	{
		x++;
		i++;

	}
	return (i);
}
