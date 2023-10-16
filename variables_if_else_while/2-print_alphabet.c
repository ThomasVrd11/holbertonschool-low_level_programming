#include <stdio.h>

/**
* main- Recite l'alphabet
*
* Return: toujours succes (0)
*
* je declare letter qui vaut a, point de depart
* while verifie que la lettre est toujours inferieure a z
* putchar letter me fait print ma lettre
* ++ permet d'avancer d'une lettre
*je ferme
*je reviens a la ligne
*/

int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');

return (0);
}
