#include "main.h"
/**
* print_alphabet_x10 - permet de print l'alphabet 10 fois
*
*/
void print_alphabet_x10(void)

{
	char letter;
	int compteur;

	compteur =0;

while (compteur++ <= 9)
	{
	for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);
	_putchar('\n');
	}
}
