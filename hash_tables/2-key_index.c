#include "hash_tables.h"

/**
 * key_index - donne l'i de la key
 * @key: key
 * @size: taille de l'array
 * Return: l'index qui a une paired value
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
