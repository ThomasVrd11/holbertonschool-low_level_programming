#include "main.h"

/**
 * print_square - une forme en utilisant des diez j'en peux plus de ce projet
 * @size: la size du square.
 */
void print_square(int size)
{
	int hauteur, largeur;

	if (size > 0)
	{
		for (hauteur = 0; hauteur < size; hauteur++)
		{
			for (largeur = 0; largeur < size; largeur++)
				_putchar('#');

			if (hauteur == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
