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
	int i = 0, stock = 0;

	while (stock == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		stock = ((s1[i]) - (s2[i]));
		i++;
	}
	return (stock);
}

