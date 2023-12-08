#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *new_node;

	index = key_index((const unsigned char*)key, ht->size);
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	new_node = ht->array[index];
	while(new_node != NULL)
	{
		if(strcmp(new_node->key, key) == 0)
		{
			return (new_node->value);
		}
		new_node = new_node->next;
	}
	return (NULL);
}
