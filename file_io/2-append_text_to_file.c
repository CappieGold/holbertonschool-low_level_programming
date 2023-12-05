#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - Function that appends text at the end of a file
 * @filename: Pointer to the file.
 * @text_content: the text to appends in file.
 * Return: 1 on success and -1 on failure.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nWrite;
	int lenght = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);

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
