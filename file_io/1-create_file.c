#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - Function that creates a file.
 * @filename: The name of file create.
 * @text_content: argument for what i write in the file.
 * Return: 1 on success, -1 on failure.
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	int nWrite;
	int lenght = 0;

	if (!filename)
		return (-1);

	fd = creat(filename, 0600);

	if (!text_content)
		text_content = "";

	for (lenght = 0; text_content[lenght] != '\0'; lenght++)
	;

	nWrite = write(fd, text_content, lenght);

	if (nWrite == -1)
		return (-1);

	close(fd);
	return (1);
}
