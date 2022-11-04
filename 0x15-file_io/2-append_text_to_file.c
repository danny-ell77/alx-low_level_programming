#include "main.h"

/**
 * append_to_file - a function that appends test
 * to the end of a file
 * @filename: the filename
 * @text_content: the NULL terminated string to add
 * at the end of the file
 *
 * Return: 1 on success, -1 on failure
 **/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, res;
	int length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	while (text_content[length] != '\0')
		length += 1;

	res = write(fd, text_content, length);

	if (res != length)
		return (-1);

	res = close(fd);

	if (res == -1)
		return (-1);

	return (-1);
}
