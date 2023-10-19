#include "main.h"

/**
* print_line - ça fait une ligne
*
* @n: le nombre de _ que je veux print
*/
void print_line(int n)
{
	int ligne;

	if (n > 0)
	{
		for (ligne = 0; ligne < n; ligne++)
			_putchar('_');
	}
	_putchar('\n');
}
