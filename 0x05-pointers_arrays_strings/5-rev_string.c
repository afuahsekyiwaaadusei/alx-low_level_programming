#include "main.h"

/**
 *rev_string - reverses a string
 *@s: pointer to the string to be reversed
 */

void rev_string(char *s)
{
	int i = 0;
	int x = 0;
	int y = 0;

	while (*(s + x) != '\0')
	{
		i++;
		x++;
	}
	_putchar(i);

	while (i >= 0)
	{
		*(s + y) = *(s + i);
		y++;
		i--;

	}
}
