#include "main.h"

/**
 * _strcmp - compare deux strings
 * @s1: premier string.
 * @s2: deuxieme string.
 * Return: 0 si s1 et s2 sont egaux,
 * un autre nombre si c'est pas le cas.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, stock = 0;		// variable pour index et pour stocker le resultat de la comparaison

	while (stock == 0)		//// Boucle de comparaison caractère par caractère.
	{
		// Vérifie si les deux caractères actuels sont des caractères nuls (fin de chaîne).
        // Si c'est le cas, cela signifie que les chaînes sont égales et la boucle s'arrête.
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		// Calcul de la différence entre les caractères de s1 et s2 à la position actuelle (indice i).
        // Si les caractères sont égaux, op reste égal à 0.
		/*
		stock = *(s1 + i) - *(s2 + i);
		*/
		stock = ((s1[i]) - (s2[i]));
		i++;		// Incrémentation de l'indice i pour passer au caractère suivant.
	}

	return (stock);
}

