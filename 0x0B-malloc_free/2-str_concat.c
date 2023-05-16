#include "main.h"
#include <stdlib.h>


/**
 *get_length - returns the length of string.
 *@str: str whose lenght is to be found.
 *
 *Return: length of string.
 */

int get_length(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	return (len);
}


/**
 *str_concat - concatenates two strings.
 *@s1: string one.
 *@s2: string two.
 *
 *if NULL is passed, treat it as an empty string
 *Return: returned pointer should point to a newly allocated space in memory
 *which contains the contents of s1, followed by the contents of s2,
 *and null terminated
 * or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = get_length(s1);
	int len2 = get_length(s2);
	char *str = malloc((sizeof(char) * len1) + (sizeof(char) * len2) + 2);
	int i = 0;
	int j = 0;

	if (s1 == NULL || s2 == NULL)
	{
		str[0] = '\0';
		return (str);
	}

	if (str == NULL)
		return (NULL);

	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}
	while (i < (len2 + len1))
	{
		str[i] = s2[j];
		j++;
		i++;
	}
	str[i] = '\0';

	return (str);
}
