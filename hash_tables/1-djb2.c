#include "hash_tables.h"

/**
 * hash_djb2 - ajout de l'algo djb2
 * @str: string
 * Return: hash
*/

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int h;
	int c;

	h = 5381;
	while ((c = *str++))
	{
		h = ((h << 5) + h) + c;
	}
	return (h);
}
