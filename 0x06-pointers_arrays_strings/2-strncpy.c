#include "main.h"

/**
 *_strncpy - copies a string.
 *@dest: pointer to destination string
 *@src: pointer to source string
 *@n: the number of bytes of src to be copied
 *
 *Return: pointer to destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((i < n) && (*(src + i) != '\0'))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}

	return (dest);

}
