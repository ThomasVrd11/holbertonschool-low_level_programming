#include "main.h"
/**
 * _strcat - concatenate deux strings
 * @destination: destination
 * @src: source.
 * Return: le pointeur verrs destination.
 */
char *_strcat(char *destination, char *src)
{
	int count = 0, count2 = 0;

	while (*(destination + count) != '\0')
	{
		count++;
	}

	while (count2 >= 0)
	{
		*(destination + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (destination);
}
/*
int count = 0, count2 = 0; : Ces deux variables sont utilisées pour compter les caractères dans la chaîne 
de destination (count) et dans la chaîne source (count2).
La première boucle while : Cette boucle parcourt la chaîne de destination jusqu'à ce qu'elle atteigne le caractère nul 
'\0', ce qui signifie la fin de la chaîne. La variable count compte le nombre de caractères dans la chaîne de destination.
La deuxième boucle while : Cette boucle est utilisée pour copier les caractères de la chaîne source à la fin de la chaîne
de destination. Elle commence par count2 égal à zéro.
*(destination + count) = *(src + count2); : Cette ligne copie le caractère actuel de la chaîne source (src) dans la position
correspondante de la chaîne de destination (destination). Cela ajoute essentiellement le caractère de la source à la fin de la destination.
if (*(src + count2) == '\0') break; : Cette condition vérifie si nous avons atteint la fin de la chaîne source. Si c'est le
cas (c'est-à-dire si le caractère actuel de la source est '\0'), la boucle s'arrête car il n'est pas nécessaire de copier des caractères nuls supplémentaires.
count++; count2++; : Ces lignes sont utilisées pour incrémenter les compteurs count et count2 pour avancer dans les chaînes 
de destination et de source.
La fonction retourne destination : La fonction renvoie un pointeur vers la chaîne de destination mise à jour, qui maintenant
contient la concaténation de la chaîne source à la fin de la destination.
Cependant, il y a une petite erreur dans votre code. La deuxième boucle while a count2 initialisé à zéro, ce qui signifie
qu'elle ne copiera jamais de caractères de la source à moins que count2 ne soit déjà égal à zéro au départ. Vous devriez initialiser
count2 à la longueur de la chaîne source pour garantir qu'elle soit correctement copiée à la fin de la chaîne de destination.
*/
