#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX  stdou
 * @filename: file name parameter
 * @letters: number of letters it should read and print
 * Return: 0 if opened or read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t readN, writeN;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);
	readN = read(fd, buf, letters);
	writeN = write(STDOUT_FILENO, buf, readN);
	close(fd);
	free(buf);
	return (writeN);
}
