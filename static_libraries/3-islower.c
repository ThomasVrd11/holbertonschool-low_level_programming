#include "main.h"

/**
 * _islower - Check si la lettre est en minuscule
 * @c: Pour check la lettre.
 *
 * Return: Comme d'hab toujours 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
