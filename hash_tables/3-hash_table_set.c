#include "hash_tables.h"

/**
 * hash_table_set -  ajoute un element a une ht
 * @ht: hash table
 * @key: ki
 * @value: valeur associée au script
 * Return: 1 si c bien à si c poas bien
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newnode;
	char *copieval;
	size_t index, i;

	if (!key || !ht || !value)
		return (0);
	copieval = strdup(value);
	if (!copieval)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = copieval;
			return (1);
		}
	}
	newnode = malloc(sizeof(hash_node_t));
	if (!newnode)
		return (0);
	newnode->key = strdup(key);
	if (!newnode->key)
	{
		free(newnode);
		return (0);
	}
	newnode->value = copieval;
	newnode->next = ht->array[index];
	ht->array[index] = newnode;
	return (1);
}
