#include "main.h"
#include <stdlib.h>



/**
 *get_length - returns the length of a string.
 *@str: string.
 *
 *Return: the length of @str.
 */

int get_length(char *str)
{
	int i = 0;
	int len = 0;

	while(str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}





/**
 *string_nconcat - concatenates two strings.concatenate
 *@s1: first string.
 *@s2: string to be added to @s1.
 *@n: number of bytes of s2 to be added to s1.
 *
 *Return: pointer to a newly allocated space in memory,
 *which contains s1, followed by the first n bytes of s2, and null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	unsigned int i, j;
	char *new_mem;


	if (s1 == NULL)
	{
		s1 = '\0';
	}

	if (s2 == NULL)
	{
		s2 = '\0';
	}
	
	len1 = get_length(s1);
	len2 = get_length(s2);
	new_mem = malloc(sizeof *new_mem * (len1 + len2 + 1));
	i = 0;

	if (new_mem == NULL)
		return (NULL);

	while (i < len1)
	{
		new_mem[i] = s1[i];
		i++;
	}

	j = 0;

	if (n >= len2)
		n = len2;

	while (j < n)
	{
		new_mem[i] = s2[j];
		i++;
		j++;
	}

	new_mem[i] = '\0';
	return (new_mem);
}
