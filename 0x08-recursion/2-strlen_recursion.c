#include "main.h"

/**
 *_strlen_recursion - returns the length of a string.
 *@s: string whose length is to be returned
 *
 *Return: lenght of @s.
 */

int _strlen_recursion(char *s)
{
	int n = 1;

	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (n + _strlen_recursion(s));
}

