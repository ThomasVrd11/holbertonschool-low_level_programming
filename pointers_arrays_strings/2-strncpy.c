#include "main.h"

/**
* _strncpy - copie un string
* @dest: la destination
* @src: source
* @n: le nombre de bytes venant de src
* Return: le pointer vers dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;
// Boucle pour copier les caractères de src vers dest
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
// Si le nombre de caractères copiés est inférieur à n, remplir dest avec des caractères nuls ('\0')
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
// Retourne un pointeur vers la chaîne de destination
return (dest);
}
