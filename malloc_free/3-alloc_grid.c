#include "main.h"

/**
* alloc_grid - retourne un pointeur a un 2d
* @width: int
* @height: unt
* Return: retourne mon esperance de vie
*/

int **alloc_grid(int width, int height)
{
	int heightIndex;
	int widthindex;
	int **p;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	p = malloc(height * sizeof(int *));
	if (p == NULL)
		return (NULL);

	for (heightIndex = 0; heightIndex < height; heightIndex++)
	{
		p[heightIndex] = malloc(width * sizeof(int));
		if (p[heightIndex] == NULL)
		{
			for (widthindex = 0; widthindex < heightIndex; widthindex++)
				free(p[widthindex]);
			free(p);
			return (NULL);
		}
		for (widthindex = 0; widthindex < width; widthindex++)
		{
			p[heightIndex][widthindex] = 0;

		}
	}
	return (p);
}
