#include "main.h"

/**
* _atoi - converti un string en int.
*
* @s: input string.
*
* Return: int.
unsigned int count = 0, size = 0, oi = 0, pn = 1, m = 1, i; : Cette ligne déclare plusieurs variables qui seront utilisées dans la fonction. Voici leur signification :
count : Compte le nombre de caractères parcourus dans la chaîne.
size : Compte le nombre de caractères numériques (chiffres) dans la chaîne.
oi : Stocke la valeur entière résultante.
pn : Stocke le signe positif (+1) ou négatif (-1) de la valeur.
m : Utilisé pour multiplier les chiffres par la bonne puissance de 10 lors de la conversion.
i : Utilisé dans la boucle for pour itérer à travers la chaîne.

while (*(s + count) != '\0') : C'est une boucle while qui parcourt chaque caractère de la chaîne s jusqu'à ce qu'elle atteigne le caractère nul '\0', ce qui marque la fin de la chaîne.
Dans la boucle while, le code vérifie chaque caractère pour déterminer s'il s'agit d'un chiffre, d'un signe négatif ou d'autres caractères. Voici ce que fait chaque partie :
Si le caractère n'est pas un chiffre (*(s + count) < '0' || *(s + count) > '9'), la boucle s'arrête car nous avons atteint la fin du nombre entier.
Si le caractère est un signe négatif ('-'), la variable pn est multipliée par -1 pour représenter un nombre négatif.
Si le caractère est un chiffre ('0' à '9'), le code incrémente size (pour compter le nombre de chiffres) et ajuste la variable m pour être la bonne puissance de 10.
Enfin, count est incrémenté pour passer au caractère suivant.
Après la boucle while, une autre boucle for est utilisée pour convertir les chiffres en entier. Elle commence à partir du dernier chiffre (d'où count - size) et se termine à la position count.
Dans la boucle for, chaque chiffre est converti en entier en soustrayant la valeur ASCII de '0' et en multipliant par la puissance de 10 appropriée. Cette valeur est ensuite ajoutée à oi.
Enfin, oi est multiplié par pn pour prendre en compte le signe négatif si nécessaire, et la valeur entière résultante est renvoyée.

En résumé, cette fonction parcourt une chaîne de caractères pour extraire et convertir un entier. Elle prend en compte le signe négatif, ignore les caractères non numériques, et effectue la conversion en multipliant chaque chiffre par la bonne puissance de 10.
*/
int _atoi(char *s)
{
	unsigned int count = 0, size = 0, oi = 0, pn = 1, m = 1, i;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;

		if (*(s + count) == '-')
			pn *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (oi * pn);
}
