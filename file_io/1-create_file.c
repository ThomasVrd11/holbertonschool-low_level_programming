#include "main.h"

/**
 * create_file - function qui cre un file
 * @filename: nom
 * @text_content: text du fifichier
 * Return: 1
 */

int create_file(const char *filename, char *text_content)
{
	int filedef, i = 0;

	if (!filename)
	{
		return (-1);
	}
	filedef = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (filedef == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
		write(filedef, text_content, i);
	}
	close(filedef);
	return (1);
}
