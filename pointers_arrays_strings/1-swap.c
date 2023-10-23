#include "main.h"
/**
* swap_int- fonction qui swap la valeur de deux int
*
* @a: premier int
* @b: deuxieme int
*/
void swap_int(int *a, int *b)
{
	int c = *b;
	int d = *a;
	*a = c;
	*b = d;
}
