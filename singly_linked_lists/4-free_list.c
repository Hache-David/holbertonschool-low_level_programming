#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - free all malloc created in function add_node.
 *
 * @head: pointer to a struct list_t *head.
 *
 * Return: nothing.
 */

void free_list(list_t *head)
{
	while (head->next != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
	free(head->str);
	free(head);
}
