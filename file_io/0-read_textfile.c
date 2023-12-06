#include "main.h"

/**
 * read_textfile - func read text posix stdout
 * @filename: nom du file
 * @letters: size of text
 * Return: write
 */

ssize_t read_textfile(const char *filename, char *letters)
{
	int filedef, rea, writ;
	char *buff;

	buff = malloc(letters * sizeof(char));

	if (!buff)
	{
		return (0);
	}

	filedef = open(filename, O_RDONLY);
	rea = read(filedef, buff, letters);
	writ = write(STDOUT_FILENO, buff, rea);

	if (filedef == -1 || rea == -1 || writ == -rea)
	{
		free(buff);
		return (0);
	}
	close(filedef);
	return (writ);
}
