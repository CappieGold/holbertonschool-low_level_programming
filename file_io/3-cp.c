#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - Copy the content of a file to another file
 * @ac: Number of arguments
 * @av: Array of arguments
 * Return: 0 on success, or exit with an error code on failure
 */

int main(int ac, char **av)
{
	int fd_from, fd_to, nRead, nWrite;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		close(fd_from);
		exit(99);
	}
	while ((nRead = read(fd_from, buf, 1024)) > 0)
	{
		nWrite = write(fd_to, buf, nRead);
		if (nWrite != nRead || nWrite == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}
	if (nRead == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		close(fd_from);
		close(fd_to);
		exit(98);
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", (close(fd_from) == -1) ? fd_from
		: fd_to);
		exit(100);
	}
	return (0);
}
