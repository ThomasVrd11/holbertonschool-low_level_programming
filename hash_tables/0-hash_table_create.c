#include "hash_tables.h"

/**
 * hash_table_create - fabrique une hash table enfin c'est dans le titre
 * @size: taille de l'array
 * Return: pointer vers nouvelle table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	size_t i;
	hash_table_t *hash;

	if (!size)
		return (NULL);
	hash = malloc(sizeof(hash_table_t));
	if (!hash)
		return (0);
	hash->size = size;
	hash->array = malloc(sizeof(hash_table_t *) * size);
	if (!hash->array)
		return (0);
	for (i = 0; i < size; i++)
		hash->array[i] = NULL;
	return (hash);
}
