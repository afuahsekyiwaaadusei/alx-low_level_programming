#include "main.h"

/**
 *_strstr - finds the first occurrence of the substring needle in
 *the string haystack. The terminating null bytes (\0) are not compared
 *@haystack: string to be scanned.
 *@needle: string containing the sequence of characters to match.
 *
 *Return: a pointer to the beginning of the
 *located substring, or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int j = 0;

	while (haystack[j] != '\0')
	{
		if (haystack[j] == needle[0])
		{
			int i = 0;

			int x = j;

			int check;

			while (needle[i] != '\0')
			{
				if (haystack[x] != '\0' && haystack[x] == needle[i])
				{
					check = 1;
					x++;
				}
				else
				{
					check = 0;
					break;
				}
				i++;
			}
			if (check)
				return (&haystack[j]);
		}

		j++;
	}
	return ('\0');
}
