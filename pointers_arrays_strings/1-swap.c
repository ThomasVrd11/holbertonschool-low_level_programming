#include "main.h"
/**
* swap_int- fonction qui swap la valeur de deux int
*
* @a: premier int
* @b: deuxieme int
*/
void swap_int(int *a, int *b)
{
	int c = *b;// Stocke la valeur de l'entier pointé par 'b' dans une variable temporaire 'c'.
	int d = *a;// Stocke la valeur de l'entier pointé par 'a' dans une variable temporaire 'd'.
	*a = c;// Affecte la valeur de 'c' à l'entier pointé par 'a', ce qui échange les valeurs de 'a' et 'b'.
	*b = d;// Affecte la valeur de 'd' à l'entier pointé par 'b'.
}
