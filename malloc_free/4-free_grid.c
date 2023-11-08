#include "main.h"

/**
* free_grid - un forfait mobile 4g 300go pour 10 euros/mois
* @grid: la grille a liberer
* @height: hauteur de la grid
*/

void free_grid(int **grid, int height)

{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
