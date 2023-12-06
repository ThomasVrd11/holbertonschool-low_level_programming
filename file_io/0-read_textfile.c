#include "main.h"

/**
 * read_textfile - func read text posix stdout
 * @filename: nom du file
 * @letters: size of text
 * Return: write
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, re, wr;
	char *buf;

	buf = malloc(letters * sizeof(char));

	if (!buf)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	re = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, re);

	if (fd == -1 || re == -1 || wr != re)
	{
		free(buf);
		return (0);
	}
	close(fd);
	return (wr);
}
