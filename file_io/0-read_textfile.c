#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * standard output.
 *
 * @filename: Pointer to the file to read.
 * @letters: letters to be read and print.
 * Return: the number of letters read and print.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nRead, nWrite;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	buffer = malloc((sizeof(char)) * (letters));

	if (!buffer)
		return (0);

	nRead = read(fd, buffer, letters);
	nWrite = write(STDOUT_FILENO, buffer, nRead);

	if (nWrite != nRead)
		return (0);

	free(buffer);
	close(fd);

	return(nWrite);
}
