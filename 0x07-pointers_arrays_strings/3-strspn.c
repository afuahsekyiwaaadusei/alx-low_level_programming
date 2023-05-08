#include "main.h"

/**
 *_strspn - Returns the number of bytes in the initial segment of s
 *which consist only of bytes from accept.
 *@s: initial segment.
 *@accept:
 *
 *Return: number of bytes of accept in s.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	unsigned int count = 0;

	while (s[i] != '\0')
	{
		int j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
			}

			j++;
		}

		i++;
	}


	return (count);
}
