#include "main.h"

/**
 *rot13 - a function that encodes a string using rot13
 *@s: string to be encoded
 *
 *Return: the encoded string
 */

char *rot13(char *s)
{
	int i = 0;

	char str[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char encode[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		int x = 0;

		while (x < 52)
		{
			if (s[i] == str[x])
			{
				s[i] = encode[x];
				break;
			}
			x++;
		}

		i++;
	}
	return (s);
}
