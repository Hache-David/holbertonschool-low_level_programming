#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - create an hash table .
 *
 * @size: size of hash table.
 *
 * Return: hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable;

	hashtable = malloc(sizeof(hash_table_t));
	if (size == 0)
		return (NULL);
	if (hashtable == NULL)
		return (NULL);
	hashtable->size = size;
	hashtable->array = calloc(size, sizeof(hash_node_t *));
	return (hashtable);
}
