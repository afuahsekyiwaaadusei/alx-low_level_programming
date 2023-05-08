#include "main.h"

/**
 *_strchr - returns a pointer to the first occurrence of the character c
 *in the string s, or NULL if the character is not found.
 *@s: string to be searched
 *@c: character to be found
 *
 *Return: a pointer to the first occurrence of c.
 */

char *_strchr(char *s, char c)
{
	char *result;

	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			result = &s[i];
			return (result);
		}
		i++;
	}

	if (s[i] == c)
		return (&s[i]);


	return (0);
}
