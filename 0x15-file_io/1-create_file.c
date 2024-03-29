#include "main.h"

/**
 * create_file - Creates a file
 * @filename: name of file to be created
 * @text_content: contents of the file created
 * Return: 1 on Success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i, wrt;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (i = 0; text_content[i] != '\0'; i++)
		;
	wrt = write(fd, text_content, i);
	if (wrt == -1)
		return (-1);
	close(fd);
	return (1);
}
