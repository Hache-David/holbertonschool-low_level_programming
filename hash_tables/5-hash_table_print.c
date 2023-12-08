#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - Prints the key/value pairs of a hash table
 *
 * @ht: The hash table
 *
 * Return: nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	int index;

	if (ht == NULL)
	{
		return;
	}
	index = 0;

	printf("{");
	for (i = 0; i < ht->size; ++i)
	{
		current = ht->array[i];

		while (current != NULL)
		{
			if (index)
			{
				printf(", ");
			}
			printf("'%s': '%s'", current->key, current->value);
			index = 1;

			current = current->next;
		}
	}
	printf("}\n");
}
