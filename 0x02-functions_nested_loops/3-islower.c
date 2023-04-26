#include "main.h"

/**
 *_islower - checks for lowercase character
 *@c: the character to be checked
 *
 *Return: 1 if the character is lowercase and 0 otherwise
 */

int _islower(int c)
{
	if (c < 97)
		return (0);
	else
		return (1);
}
