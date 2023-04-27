#include "main.h"

/**
 *_isupper - checks for uppercase character
 *@c: character to be checked
 *
 *Return: 1 if c is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65)
		return (1);
	else
		return (0);
}
