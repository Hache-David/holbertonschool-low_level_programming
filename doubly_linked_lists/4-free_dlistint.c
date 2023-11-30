#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - free all malloc created in function add_node.
 *
 * @head: pointer to a struct list_t *head.
 *
 * Return: nothing.
 */

void free_dlistint(dlistint_t *head)
{
	while (head->next != NULL)
	{
		free(head);
		head = head->next;
	}
	free(head);
}
