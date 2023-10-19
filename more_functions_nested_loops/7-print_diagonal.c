#include "main.h"

/**
 * print_diagonal - print une diagonale.
 * @n: le nombre de fois que la diagonale est print
 *
 */
void print_diagonal(int n)
{
	int lon, lar;

	for (lon = 0; lon < n; lon++)
	{
		for (lar = 0; lar < lon; lar++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (lon < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
