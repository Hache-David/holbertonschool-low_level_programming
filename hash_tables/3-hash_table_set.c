#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * _strcmp - check the code
 *
 * @s1 : first string.
 * @s2 : second string.
 *
 * Return: Always 0.
 */

int _strcmp(const char *s1, const char *s2)
{
	int index = 0;
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	if (s1[i] != s2[i])
	{
		index = (s1[i] - s2[i]);
		return (index);
	}
	return (index);
}

/**
 * *_strcpy - check the code
 *
 * @dest: destination.
 * @src: source.
 *
 * Return: Always 0.
 */

char *_strcpy(char *dest, const char *src)
{
	int i;
	int n = 0;

	while (src[n] != '\0')
	{
		n++;
	}
	n++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

/**
 * _strlen - check the code
 *
 * @s : first input.
 *
 * Return: Always 0.
 */

int _strlen(const char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}

/**
 * key_index - check the code
 *
 * @key: the key.
 * @ht: hash table input.
 * @value: value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	hash_table_t *new_table;
	unsigned long int index;

	(void)ht;
	node = malloc(sizeof(hash_node_t));
	node->key = (char *)malloc(_strlen(key) + 1);
	node->value = (char *)malloc(_strlen(value) + 1);
	strcpy(node->key, key);
	strcpy(node->value, value);

	new_table = malloc(sizeof(hash_table_t));
	new_table->size = 1024;
	new_table->array = (hash_node_t **) calloc(new_table->size,
	sizeof(hash_node_t *));

	index = key_index((const unsigned char *)key, 1024);

	if (node == NULL)
	{
		new_table->array[index] = node;
	}
	else
	{
		if (_strcmp(new_table->array[index]->key, key) == 0)
		{
			_strcpy(new_table->array[index]->value, value);
			return (1);
		}
		else
		{
			new_table->array[0] = node;
			return (0);
		}
	}
	return (0);
}
