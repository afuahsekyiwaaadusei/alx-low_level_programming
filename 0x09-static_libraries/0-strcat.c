#include "main.h"

/**
 *_strcat - This function appends the src string to the dest string
 *overwriting the terminating null byte (\0) at the end of dest
 *and then adds a terminating null byte
 *@dest : pointer to destination string
 *@src: pointer to source string
 *
 *Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int destlen = 0;

	int i = 0;

	while (*(dest + destlen) != '\0')
		destlen++;

	while (*(src + i) != '\0')
	{
		*(dest + destlen) = *(src + i);
		i++;
		destlen++;

	}

	destlen++;

	*(dest + destlen) = '\0';
	return (dest);
}
