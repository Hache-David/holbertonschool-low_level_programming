#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - add new node on the beginning of the list.
 *
 * @str: string to add on the new node.
 * @head: pointer to a struct list_t *head.
 *
 * Return: return the address of the new node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	char *str2;
	int index = 0;

	if (str == NULL)
		return (NULL);
	tmp = malloc(sizeof(*tmp));
	if (tmp == NULL)
		return (NULL);
	while (str[index])
		index++;
	str2 = malloc(sizeof(char) * (index + 1));
	if (str2 == NULL)
	{
		free(tmp);
		return (NULL);
	}
	for (index = 0; str[index]; index++)
		str2[index] = str[index];

	tmp->str = str2;
	tmp->len = index;
	tmp->next = NULL;
	if (*head == NULL)
		*head = tmp;
	else
	{
		list_t *tail = *head;

		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = tmp;
	}
	return (tmp);
}
