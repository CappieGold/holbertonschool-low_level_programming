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
	int fd_src, fd_dest, nRead, nWrite;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	fd_src = open(av[1], O_RDONLY);
	if (fd_src == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_dest = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_dest == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		close(fd_src);
		exit(99);
	}
	while ((nRead = read(fd_src, buf, 1024)) > 0)
	{
		nWrite = write(fd_dest, buf, nRead);
		if (nWrite != nRead || nWrite == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			close(fd_src);
			close(fd_dest);
			exit(99);
		}
	}
	if (nRead == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		close(fd_src);
		close(fd_dest);
		exit(98);
	}
	if (close(fd_src) == -1 || close(fd_dest) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", (close(fd_src) == -1) ? fd_src : fd_dest);
		exit(100);
	}
	return (0);
}
