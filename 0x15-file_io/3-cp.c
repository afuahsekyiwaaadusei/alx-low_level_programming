#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 *main - Entry point
 *.A program that copies the content of a file to another file.
 *@ac: the number of arguements passed to the program.
 *@av: a ponter to the arguements passed to the program
 *
 *Return: always 0.
 */

int main(int ac, char **av)
{
	int fd1, fd2, c_fd1, c_fd2;
	ssize_t rd, wr;
	char buf[1024];

	if (ac < 3 || ac > 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0064);
	while ((rd = read(fd1, buf, 1024)) > 0)
	{
		wr = write(fd2, buf, 1024);
		if (fd2 == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}

	}
	if (fd1 == -1 || rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	free(buf);
	c_fd1 = close(fd1);
	if (c_fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	c_fd2 = close(fd2);
	if (c_fd2 == -2)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
