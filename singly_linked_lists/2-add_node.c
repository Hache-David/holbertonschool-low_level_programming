#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - add new node on the beginning of the list.
 *
 * @str: string to add on the new node.
 * @head: pointer to a struct list_t *head.
 *
 * Return: return the address of the new node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	int index = 0;
	char *str2;

	tmp = malloc(sizeof(*tmp));
	if (tmp == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	while (str[index])
	{
		index++;
	}
	str2 = malloc(sizeof(char) * (index + 1));
	if (str2 == NULL)
	{
		free(tmp);
		return (NULL);
	}
	index = 0;
	while (str[index])
	{
		str2[index] = str[index];
		index++;
	}
	tmp->str = str2;
	tmp->len = index;
	tmp->next = *head;

	*head = tmp;

	return (tmp);
}
