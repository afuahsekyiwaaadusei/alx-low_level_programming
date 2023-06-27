#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
	int len1;
	int len2;
	char *str;
	int i = 0;
	int j = 0;

	if (s1 == NULL)
	{
		printf("before s1 empty");
		s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = '\0';
	}

	len1 = get_length(s1);
	len2 = get_length(s2);
	str = malloc((sizeof(char) * len1) + (sizeof(char) * len2) + 1);

	if (str == NULL)
		return (NULL);

	while (i < len1)
	{
		str[i] = s1[i];
		printf("len1 is %d and i is %d str[%d] is s1[%d] ", len1, i, i, i);
		i++;
	}
	while (i < (len2 + len1))
	{
		str[i] = s2[j];
		printf("len2+len1 is %d i is %d j is %d str[%d] and s[%d] ", len2+len1, i, j, i, j);
		j++;
		i++;
	}
	str[i] = '\0';

	return (str);
}
