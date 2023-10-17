#include "main.h"

/**
 * _isalpha - Chec si un character est alphabetique
 * @c: character se fait check.
 *
 * Return: 1 si c'est une lettre, 0 si c'est pas le cas
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
