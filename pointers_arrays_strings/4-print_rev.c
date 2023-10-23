#include "main.h"
#include "2-strlen.c"
/**
* print_rev- print un string a l'envers
* @s: le char a getstring
*
*/

void print_rev(char *s)
{
int i = 0;

	for (i = _strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
// i = _strlen(s) - 1; : Initialise i à la longueur de la chaîne moins 1.
// Cela place i à la dernière position de la chaîne.
// i >= 0; : C'est la condition de la boucle. Tant que i
// est supérieur ou égal à 0, la boucle continue à s'exécuter.
