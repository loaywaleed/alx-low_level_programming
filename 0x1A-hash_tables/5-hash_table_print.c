#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int f;

	if (ht == NULL)
		return;
	printf("{");
	f = 0;
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (f == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", node->key, node->value);
			f = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
