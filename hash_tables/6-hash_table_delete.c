#include "hash_tables.h"

/**
 * hash_table_delete - supprime cette merde barre toi connasse
 * @ht: le hachis parmentier nn serieux j'en ai marre la 
 * Return: vide
*/

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temporaire, *nodequidegage;
	size_t i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			nodequidegage = ht->array[i];

			while (nodequidegage != NULL)
			{
				temporaire = nodequidegage->next;
				free(nodequidegage->value);
				free(nodequidegage->key);
				free(nodequidegage);
				nodequidegage = temporaire;
			}
		}
	}
	free(ht->array);
	free(ht);
}
