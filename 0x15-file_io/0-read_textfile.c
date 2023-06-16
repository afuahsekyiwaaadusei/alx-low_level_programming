#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 *read_textfile - a function that reads a text file and prints it to the POSIX
 *standard output.
 *@filename : filename or file path.
 *@letters :the number of letters it should read and print.
 *
 *Return: the actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *buf = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	rd = read(fd, buf, letters);
	if (rd == -1)
		return (0);
	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1)
		return (0);
	close(fd);
	return (wr);
}
