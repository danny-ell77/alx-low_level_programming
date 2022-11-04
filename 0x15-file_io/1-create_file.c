#include "main.h"

/**
 * create_file - a function that creates a file
 *
 * @filename: the file's name
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 **/
int create_file(const char *filename, char *text_content)
{
	int fd, res;
	int length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	while (text_content[length] != '\0')
		length++;

	res = write(fd, text_content, length);

	if (res != length)
		return (-1);

	res = close(fd);

	if (res == -1)
		exit(-1);

	return (1);
}
