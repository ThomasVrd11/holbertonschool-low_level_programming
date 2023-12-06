#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: is the hash table
 * Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nodeactuel;
	size_t i;
	char virgulegod = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (virgulegod == 1)
				printf(", ");
			nodeactuel = ht->array[i];
			while (nodeactuel != NULL)
			{
				printf("'%s': '%s'", nodeactuel->key, nodeactuel->value);
				nodeactuel = nodeactuel->next;
				if (nodeactuel != NULL)
					printf(", ");
			}
			virgulegod = 1;
		}
	}
	printf("}\n");
}
