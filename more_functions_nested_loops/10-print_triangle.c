#include "main.h"

/**
 * print_triangle - print un triangle
 *
 * @size: nombre de ligne.
 */
void print_triangle(int size)
{
	int lon, lar;

	for (lon = 0; lon < size; lon++)
	{
		for (lar = 1; lar < (size - lon); lar++)
			_putchar(' ');
		for (lar--; lar < size; lar++)
			_putchar(35);
		if (lon < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
