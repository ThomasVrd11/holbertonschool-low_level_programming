#include "main.h"
/**
 * fileError - function qui verifie si file error
 * @file_from: depart
 * @file_to: destination
 * @argv: list arg
 * Return: vide
 */
void fileError(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - check the code
 * @argc: argc
 * @argv: argv
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, re;
	ssize_t i, wr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	fileError(file_from, file_to, argv);

	i = 1024;
	while (i == 1024)
	{
		i = read(file_from, buf, 1024);
		if (i == -1)
		{
			fileError(-1, 0, argv);
		}
		wr = write(file_to, buf, i);
		if (wr == -1)
		{
			fileError(0, -1, argv);
		}
	}
	re = close(file_from);
	if (re == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	re = close(file_to);
	if (re == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
