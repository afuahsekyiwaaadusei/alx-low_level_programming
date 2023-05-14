#include "main.h"

/**
 *_strncat - The _strncat function is similar to the _strcat function
 *except that it will use at most n bytes from src; and
 *src does not need to be null-terminated if it contains n or more bytes
 *@dest : pointer to destination string
 *@src: pointer to source string
 *@n: the function will use at most n bytes
 *
 *Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;

	int i = 0;

	while (*(dest + destlen) != '\0')
		destlen++;

	while (i < n && *(src + i) != '\0')
	{
		*(dest + destlen) = *(src + i);
		i++;
		destlen++;
	}

	destlen++;

	*(dest + destlen) = '\0';

	return (dest);
}
