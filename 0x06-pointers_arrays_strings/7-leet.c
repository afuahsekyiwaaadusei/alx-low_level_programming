#include "main.h"

/**
 *leet - a function that encodes a string into Leet (or "1337")
 *@s: pointer to string to be encoded
 *
 *Return: pointer to string
 */

char *leet(char *s)
{
	char letters[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	int num[10] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};

	int i = 0;

	while (s[i] != '\0')
	{
		int x = 0;

		while (x < 10)
		{
			if (s[i] == letters[x])
				s[i] = num[x];
			x++;
		}
		i++;
	}

	return (s);
}
