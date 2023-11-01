#include "main.h"

/**
* _strlen_recursion - retourne la taille d'un str
* @s: string
* Return: la taille du str
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));

}
