#include "main.h"
#include <stdlib.h>

/**
 *_strdup - returns a pointer to a newly allocated space in memory
 *which contains a copy of the string given as a parameter.
 *@str: string to be duplicated.
 *
 *Memory for the new string is obtained with malloc,and can be freed with free.
 *returns NULL if str = NULL
 *Return: a pointer to the duplicated string or
 *NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	int strlen = 0;
	char *s;
	int i = 0;

	if (str == NULL)
		return (NULL);

	while (str[strlen] != '\0')
	{
		strlen++;
	}

	s = malloc((sizeof(char) * strlen) + 1);

	if (s == NULL)
		return (NULL);

	while (i < strlen)
	{
		s[i] = *(str + i);
		i++;
	}

	return (s);


}
