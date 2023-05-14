#include "main.h"

/**
 *_strpbrk - locates the first occurrence in the
 *string s of any of the bytes in the string accept
 *@s: the string to be scanned
 *@accept: the string to be matched
 *
 *Return: a pointer to the byte in s that matches one of the bytes in accept,
 *or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		int i = 0;

		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				return (s);
			}
			i++;
		}
		s++;
	}
	return (0);
}
