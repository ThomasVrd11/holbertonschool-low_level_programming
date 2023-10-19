#include "main.h"

/**
 * print_diagonal - alligne une diagonale.
 * @n: le nombre de \
 */
void print_diagonal(int n)
{
	int ligne, espace;

	if (n > 0)
	{
		for (ligne = 0; ligne < n; ligne++)
		{
			for (espace = 0; espace < ligne; espace++)
			_putchar(' ');
			_putchar('\\');

			if (ligne == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
