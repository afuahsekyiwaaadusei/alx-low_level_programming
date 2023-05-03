#include "main.h"
#include <stdio.h>

/**
 *rev_string - reverses a string
 *@s: pointer to the string to be reversed
 */

void rev_string(char *s)
{
	int i = -1;
	int x = 1;

	while (*(s + i) != '\0')
		i++;

	char tmp[] = {*(s + i)};

	while (i > 0)
	{
		tmp[x] = *(s + i);
		x++;
		i--:
	}
}
