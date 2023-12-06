#include "hash_tables.h"

/**
 * hash_table_get - fonc qui recuper eune clz
 * @ht: la hash que je veux parcourir
 * @key: la ki que je cherche
 * Return: vvaleur associée a element
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	size_t i;
	hash_node_t *node;

	if (!key || !ht)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	node = ht->array[i];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;
	if (!node)
		return (0);
	else
		return (node->value);
}
