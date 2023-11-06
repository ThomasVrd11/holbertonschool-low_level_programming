#include "main.h"
#include <stdlib.h>
/**
 * create_array - creer un array de char.
 * @size: taille de l'array
 * @c: char storaged
 *
 * Return: pointeur d'array
 */
char *create_array(unsigned int size, char c)
{
	char *cree;
	unsigned int i;

	if (size == 0)
		return (NULL);

	cree = malloc(sizeof(c) * size);

	if (cree == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cree[i] = c;

	return (cree);
}
