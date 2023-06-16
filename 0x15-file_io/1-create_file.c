#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *create_file - a function that creates a file.
 *@filename: name of the file to be created.
 *@text_content: a NULL terminated string to write to the file.
 *
 *Return: 1 on success and -1 on failure
 *(file can not be created, file can not be written, write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[len] != '\0')
			len++;
		wr = write(fd, text_content, len);
		if (wr == -1)
			return (-1);
	}
	return (1);
}
