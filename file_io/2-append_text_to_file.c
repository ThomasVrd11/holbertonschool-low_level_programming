#include "main.h"

/**
 * append_text_to_file - append le text apres to file
 * @filename: nom du file
 * @text_content: texte a ajouter
 * Return: 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int filedef, i = 0, writ = 0;

	if (!filename)
	{
		return (-1);
	}
	filedef = open(filename, O_CREAT | O_APPEND | O_RDWR);

	if (text_content != NULL)
	{
		while (text_content[i])
			i++;
		writ = write(filedef, text_content, i);
	}
	if (writ == -1 || filedef == -1)
	{
		return (-1);
	}
	close(filedef);
	return (1);
}
